#ifndef PENTAGON_H
#define	PENTAGON_H
#include <cstdlib>
#include <iostream>
#include "Figure.h"

class Pentagon : public Figure{
public:
    Pentagon();
    Pentagon(std::istream &is);
    Pentagon(size_t i,size_t j);
    Pentagon(const Pentagon& orig);

    double Square() override;
    void   Print() override;

    virtual ~Pentagon();
private:
    size_t side_a;
    size_t side_b;
};

#endif	/* PENTAGON_H */