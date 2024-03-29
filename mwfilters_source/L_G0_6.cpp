/*
 * MRCPP, a numerical library based on multiresolution analysis and
 * the multiwavelet basis which provide low-scaling algorithms as well as
 * rigorous error control in numerical computations.
 * Copyright (C) 2019 Stig Rune Jensen, Jonas Juselius, Luca Frediani and contributors.
 *
 * This file is part of MRCPP.
 *
 * MRCPP is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * MRCPP is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with MRCPP.  If not, see <https://www.gnu.org/licenses/>.
 *
 * For information on the complete list of contributors to MRCPP, see:
 * <https://mrcpp.readthedocs.io/>
 */

// THIS FILE HAS BEEN AUTOGENERATED, DO NOT TOUCH

#include "FilterData.h"

#include <Eigen/Core>


namespace mrcpp {
namespace detail {
auto get_L_G0_6() noexcept -> Eigen::Matrix<double, 7, 7> {
  return (Eigen::Matrix<double, 7, 7>() << 0.106980326843028, 0.185295361502449, 0.181803615137879, -0.056608668000612, -0.534901634215141, 0.35481360408791, -0.0771446107796869, 3.12004703249067e-73, -0.0395284707521047, -0.153093108923949, -0.30190368221228, -0.205395959064437, 0.529838811967061, -0.246855220726644, -0.086476184935818, -0.149781145953559, -0.165785918816308, -0.0656248039525381, 0.221885517531998, 0.411325226866508, -0.468907524824438, 1.32955003923246e-72, 0.0286703685130632, 0.111039859780723, 0.236848948891487, 0.290857133198612, 0.00784279657250586, -0.588295294497251, -0.0950931665454351, -0.164706195909303, -0.194920686522912, -0.146794852602623, 0.0481649604788955, 0.374916788415119, 0.511276729635546, 1.01732778503285e-72, -0.0258315268968978, -0.100045073478794, -0.227981341507731, -0.377817254856742, -0.449169532791078, -0.304711463781546, 0.144438546738283, 0.250174901522118, 0.318080857425383, 0.353197832400995, 0.337620129221579, 0.252721159802372, 0.113006849013016).finished();
}
} // namespace mrcpp
} // namespace detail
