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
auto get_L_G0_5() noexcept -> Eigen::Matrix<double, 6, 6> {
  return (Eigen::Matrix<double, 6, 6>() << -7.49596608562415e-75, -0.0690065559342354, -0.267261241912424, -0.421637021355784, 0.478091443733757, -0.132137494528682, -0.107622738385727, -0.186408050933773, -0.182895336805923, 0.0569486002368799, 0.538113691928636, -0.356944242136037, -2.82800968981877e-74, 0.0417814244489655, 0.161818761071667, 0.319724575109042, 0.221973542660275, -0.566191613825599, -0.105568077133336, -0.182849273252289, -0.204676750730999, -0.0936564731418126, 0.245278210958605, 0.587023011762966, 2.04268892516601e-74, 0.0361235077077328, 0.139905743758644, 0.31137042777625, 0.469258130230493, 0.402450914986221, 0.161557581910374, 0.279825940216739, 0.352652456017037, 0.376555328895631, 0.319268554727644, 0.165850868000944).finished();
}
} // namespace mrcpp
} // namespace detail
