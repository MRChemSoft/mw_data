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
auto get_I_H0_5() noexcept -> Eigen::Matrix<double, 6, 6> {
  return (Eigen::Matrix<double, 6, 6>() << 0.891895066341596, 0.441717689292156, -0.0485067553322659, -0.060238062513699, 0.0199128572048269, 0.0253764737044299, -0.205030885103655, 0.551619047941073, 0.752884105491598, 0.24606259901593, -0.0641609825878157, -0.0754822120015765, 0.111261589128492, -0.204325018301143, 0.107265502172609, 0.62891758437888, 0.590076098184458, 0.299272873570694, -0.0671912684222546, 0.113126401235785, -0.0475971300512205, -0.144275318914026, 0.100112513952248, 0.225076111980437, 0.0384281217684824, -0.0626362756029587, 0.024635080773997, 0.0662493932781376, -0.0379907251441195, -0.0681476270683871, -0.0158608446876437, 0.0255210433850456, -0.00978900386320209, -0.0253115434154902, 0.0137902467164606, 0.0236029030638833).finished();
}
} // namespace mrcpp
} // namespace detail
