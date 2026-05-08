#ifndef BASE_HPP
#define BASE_HPP
class Base{
    public:
        virtual ~Base(){};
        Base * generate(void);
        Base * idenftify(Base* p);
        Base * idenftify(Base& p);
};
#endif