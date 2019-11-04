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
auto get_L_H0_8() noexcept -> Eigen::Matrix<double, 9, 9> {
  return (Eigen::Matrix<double, 9, 9>() << 0.707106781186548, -7.63336668597164e-79, 1.45033967033461e-77, -7.63336668597164e-79, 4.27468534414412e-77, 0, -1.83200800463319e-77, 3.81668334298582e-79, 4.82619608720557e-76, -0.612372435695794, 0.353553390593274, -1.24757836773849e-77, 2.94123160118845e-77, -3.71649540523244e-77, 3.36345219600625e-77, 1.59704343633063e-77, -5.37794537297595e-77, -4.16799711757222e-76, 7.63336668597164e-79, -0.684653196881458, 0.176776695296637, -5.49602401389958e-77, 7.63336668597164e-78, -6.87003001737447e-77, -9.16004002316596e-78, 9.80887619147355e-77, 1.58583192901061e-76, 0.233853586673371, 0.405046293650491, -0.522912516583797, 0.0883883476483184, -3.57814063404921e-78, 3.90732957238173e-77, 3.12013863289091e-77, -4.80902101216213e-77, -3.09210986459085e-76, 1.45033967033461e-77, 0.153093108923949, 0.592927061281571, -0.350780380010057, 0.0441941738241592, 6.87003001737447e-78, -4.88535467902185e-77, -3.62584917583653e-77, 5.43304873874031e-76, -0.146575492494482, -0.253876200144874, -0.163876382526586, 0.581703452155821, -0.219863238741723, 0.0220970869120796, 3.67832857180258e-77, 3.00563813260133e-77, -2.75111306216597e-76, -4.27468534414412e-77, -0.0689981317681863, -0.26722861525761, -0.421585548851001, 0.478033079399324, -0.132121363478811, 0.0110485434560398, 2.36634367265121e-77, -1.64499052082689e-76, 0.106977062012728, 0.185289706650491, 0.181798066847189, -0.0566069404148025, -0.534885310063639, 0.3548027758708, -0.0771422564770762, 0.0055242717280199, 1.07415781834157e-76, 3.0953301911615e-76, 0.0394511911654769, 0.152793806371937, 0.301313449619951, 0.204994402553155, -0.528802957971469, 0.246372609862836, -0.0441077726196727, 0.00276213586400995).finished();
}
} // namespace mrcpp
} // namespace detail