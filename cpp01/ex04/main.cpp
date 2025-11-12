/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 05:46:26 by marvin            #+#    #+#             */
/*   Updated: 2025/11/12 15:28:24 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    
    if (argc != 4)
    {
        std::cout << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string line;

    // Critical check: s1 cannot be empty (prevents infinite loop)
    if (s1.empty())
    {
        std::cout << "Error: s1 cannot be empty." << std::endl;
        return 1;
    }

    // 2. Open Input File
    std::ifstream input_file(filename.c_str());
    if (!input_file.is_open())
    {
        std::cout << "Error: cannot open file " << filename << std::endl;
        return 1;
    }

    // 3. Open Output File
    std::string output_filename = filename + ".replace";
    std::ofstream output_file(output_filename.c_str());
    if (!output_file.is_open())
    {
        input_file.close(); 
        std::cout << "Error: cannot create output file '" << output_filename << "'." << std::endl;
        return 1;
    }

    // 4. Process File Line by Line and Perform Replacement INLINE
    while (std::getline(input_file, line))
    {
        size_t pos = 0;
        
        // Inline Replacement Loop: Find -> Erase -> Insert
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            // Erase s1
            line.erase(pos, s1.length());
            
            // Insert s2
            line.insert(pos, s2);
            
            // Advance the position past the inserted string s2
            pos += s2.length(); 
        }
        
        // 5. Write to Output File and manage newlines
        output_file << line;
        
        // Manually re-add the newline if it's not the end of the file
        if (!input_file.eof())
            output_file << '\n';
    }
    
    // 6. Close Files and Exit
    input_file.close();
    output_file.close();
    
    // Optional success message:
    // std::cout << "✅ File '" << output_filename << "' created successfully!" << std::endl;
    return 0;
}