// my_second_cmake_project.cpp: определяет точку входа для приложения.
//

#include "my_second_cmake_project.h"


int main()
{
    Triangle triangle;
    RectangularTriangle rectTriangle;
    IsoscelesTriangle isoTriangle;
    PerfectTriangle perfectTriangle;
    Quadrangle quadrangle;
    Rectangle rectangle;
    Quadrate quadrate;
    Parallelogram parallelogram;
    Rhombus rhombus;

    printInfo(&triangle);
    printInfo(&rectTriangle);
    printInfo(&isoTriangle);
    printInfo(&perfectTriangle);
    printInfo(&quadrangle);
    printInfo(&rectangle);
    printInfo(&quadrate);
    printInfo(&parallelogram);
    printInfo(&rhombus);

    return 0;
}
