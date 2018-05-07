#ifndef POLYGON_H
#define POLYGON_H
#include "spatial.h"

namespace AyxCppTest
{

    class Polygon
    {
    public:
        Polygon();
        bool Contains(Point line1Pt1);
    };
}
#endif // POLYGON_H
