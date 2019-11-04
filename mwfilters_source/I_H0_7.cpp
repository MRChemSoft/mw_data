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
auto get_I_H0_7() noexcept -> Eigen::Matrix<double, 8, 8> {
  return (Eigen::Matrix<double, 8, 8>() << 0.895707487009669, 0.434843207278771, -0.0599451660193357, -0.0436505764850839, 0.0394055415676175, 0.0135407046696839, -0.0135897980415883, -0.0127223578390284, -0.209980976319618, 0.574075156811808, 0.756654177824218, 0.170056865232167, -0.121330020335236, -0.0379134017340978, 0.0363712553955588, 0.0333662997962317, 0.119288724686373, -0.220367042687151, 0.152194808092242, 0.74123698873335, 0.565709263796433, 0.103555650741223, -0.0839441561983522, -0.0721482697948556, -0.0786491405658413, 0.132780007164429, -0.0720116601418848, -0.138838124469443, 0.340854998099031, 0.641201519185536, 0.502793395622549, 0.257705665892529, 0.0538515635972884, -0.0877491764880682, 0.0440906681681598, 0.0731278562432582, -0.129522280688298, -0.0820030581458462, 0.144202554236099, 0.207366036010604, -0.0360171108136787, 0.0576971684311077, -0.0280259184419785, -0.0439102404829613, 0.0710303998105019, 0.0391403689322588, -0.0567300561742151, -0.0668950906455136, 0.021683215290714, -0.0344332576441491, 0.0164487913282616, 0.0251032971309058, -0.0391075539978932, -0.0205145472875957, 0.0281387920269388, 0.0317435862813101, -0.0091651296722233, 0.0144953618954685, -0.0068718530691739, -0.0103661915169689, 0.015894036470854, 0.00817577888771626, -0.0109877505937536, -0.0122069170701003).finished();
}
} // namespace mrcpp
} // namespace detail
