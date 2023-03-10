#include <iostream>
#include <float.h>

struct Matrix
{
    int rows;
    int cols;
    float * pData;
};

    float matrix_max(const struct Matrix & mat)
    { 
        float max = FLT_MIN;
        for(int r = 0; r < mat.rows; r++)
            for(int c = 0;c < mat.cols; c++)
            {
                float val = mat.pData[ r * mat.cols + c ];
                max = (max > val ? max:val);
            }
        return max;
    }

int main()
{
    using namespace std;

    Matrix matA = {3,4};
    matA.pData = new float[matA.rows * matA.cols]{1.f,2.f,3.f};

    Matrix matB = {4,8};
    matB.pData = new float[matB.rows * matB.cols]{10.f,20.0f,30.0f};

    Matrix matC = {4, 2};
    matC.pData = new float[matC.rows * matC.cols]{100.f, 200.f, 300.f};

    float maxa;
    // maxa = matrix_max(matB);

    cout << maxa << endl;

    delete[] matA.pData;

    return 0;
}


