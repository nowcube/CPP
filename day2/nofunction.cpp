#include <iostream>
#include <float.h>

struct Matrix
{
    int rows;
    int cols;
    float * pData;
};

int main()
{
    using namespace std;

    Matrix matA = {3,4};
    matA.pData = new float[matA.rows * matA.cols]{1.f,2.f,3.f};

    Matrix matB = {4,8};
    matB.pData = new float[matB.rows * matB.cols]{10.f,20.0f,30.0f};

    Matrix matC = {4, 2};
    matC.pData = new float[matC.rows * matC.cols]{100.f, 200.f, 300.f};

    float maxa = FLT_MIN;
    float maxb = FLT_MIN;
    float maxc = FLT_MIN;

    for(int r = 0; r < matA.rows; r++)
        for(int c = 0;c < matA.cols; c++)
        {
            float val = matA.pData[ r * matA.cols + c ];
            maxa = (maxa > val ? maxa:val);
        }

    cout << maxa << endl;

    delete[] matA.pData;

    return 0;
}
