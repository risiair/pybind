#include "precomp.hpp"

namespace cv {
namespace matlib {

//EXAMPLE FOR PYBIND
void transform::Inc(InputArrayOfArrays src, OutputArray dst)
{
    cv::Mat M = src.getMat();
    std::cout << "arr in c++: " << std::endl << " "  << M << std::endl << std::endl;

    int image_width = M.cols;
    int image_height = M.rows;

    for(int i = 0; i < M.rows; i++)
    {
        double* Mi = M.ptr<double>(i);
        for(int j = 0; j < M.cols; j++)
            Mi[j] = Mi[j] + 1;
    }
    M.copyTo(dst);
}  


} // Matlib
} // cv


