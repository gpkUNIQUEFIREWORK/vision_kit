#ifndef _BASE_HPP_
#define _BASE_HPP_

#include <vector>
#include <stdint.h>

#include <opencv2/core/core.hpp>

namespace vk{

/**
 * [ComputePyramid computing pyramid images]
 * @param  image         [input image]
 * @param  image_pyramid [output pyramid images]
 * @param  scale_factor  [pyramid decimation ratio, greater than 1]
 * @param  level         [0-based maximal pyramid level number; if set to 0, pyramids are not used (single level), if set to 1, two levels are used]
 * @return               [return true if succeed]
 */
bool computePyramid(const cv::Mat& image, std::vector<cv::Mat>& image_pyramid, const float scale_factor = 1.2f, const uint16_t level = 3);

}//! vk

#endif