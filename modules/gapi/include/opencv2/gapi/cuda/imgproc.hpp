// This file is part of OpenCV project.
// It is subject to the license terms in the LICENSE file found in the top-level directory
// of this distribution and at http://opencv.org/license.html.
//
// Copyright (C) 2018 Intel Corporation


#ifndef OPENCV_GAPI_CUDA_IMGPROC_API_HPP
#define OPENCV_GAPI_CUDA_IMGPROC_API_HPP

#include <opencv2/core/cvdef.h>     // GAPI_EXPORTS
#include <opencv2/gapi/gkernel.hpp> // GKernelPackage

namespace cv {
namespace gapi {
namespace imgproc {
namespace cuda {

    GAPI_EXPORTS GKernelPackage kernels();

} // namespace cuda
} // namespace imgproc
} // namespace gapi
} // namespace cv


#endif // OPENCV_GAPI_CUDA_IMGPROC_API_HPP
