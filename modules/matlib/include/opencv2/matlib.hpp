#ifndef __OPENCV_MATLIB_HPP__
#define __OPENCV_MATLIB_HPP__

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

namespace cv {
namespace matlib {

class CV_EXPORTS_W transform
{
public:
    CV_WRAP transform() {}
    virtual ~transform() {}

    CV_WRAP void Inc(InputArray src, OutputArray dst);
};

} // matlib
} // cv

#endif