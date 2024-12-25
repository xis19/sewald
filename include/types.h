#ifndef __SEWALD_TYPES_H
#define __SEWALD_TYPES_H

#include <cinttypes>
#include <Eigen/Core>

namespace sewald {

using integer = std::uint32_t;
using real = double;

using Vec3 = Eigen::Vector3<real>;

} // namespace sewald

#endif