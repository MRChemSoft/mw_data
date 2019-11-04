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
auto get_I_H0_13() noexcept -> Eigen::Matrix<double, 14, 14> {
  return (Eigen::Matrix<double, 14, 14>() << 0.899209845062551, 0.428288602362851, -0.0684066254702183, -0.0276073112335448, 0.0401260797898864, -0.0143225204349939, -0.0125643334413037, 0.0143014359228069, 0.00402658618263563, -0.00931873954131217, -0.00539809120029964, 0.00208311564182059, 0.00447204698181952, 0.0032914617857807, -0.214500816350456, 0.594445067247449, 0.754367173999727, 0.104528941897942, -0.120897409608127, 0.0391710009327741, 0.0326476666403532, -0.0360475712126261, -0.00995421385827972, 0.0227421041988372, 0.0130597398503748, -0.00501055085490244, -0.0107174748112742, -0.00787307798627248, 0.126513817676213, -0.234812743541635, 0.195905881883496, 0.815165677521335, 0.448927574862487, -0.095025542989582, -0.0676811468213827, 0.0690023671112308, 0.0181875952303663, -0.0403530229900415, -0.0227344178052977, 0.00861437955179205, 0.0182843156059339, 0.0133779855933152, -0.0887328062568275, 0.150187090078009, -0.0966850157906093, -0.110834851117884, 0.574107616586383, 0.742466541369517, 0.179345301293085, -0.140914723267317, -0.032994994856678, 0.0685683894002307, 0.0371333035585941, -0.0137286955323204, -0.0287120646108248, -0.0208497324145173, 0.067003537322497, -0.109298760491573, 0.0648080482236873, 0.0622617300986356, -0.196558112326417, 0.168376047366487, 0.727193655112643, 0.579167570597306, 0.0772453918827229, -0.131910703323088, -0.0648154223165134, 0.0226965312520795, 0.0460325693356571, 0.0329250853894738, -0.052532354280097, 0.0841158997979005, -0.048020846566128, -0.043104725083378, 0.120136709440548, -0.0789225405363281, -0.132742831392784, 0.349735436199543, 0.699975478358533, 0.518698069304498, 0.158044170874939, -0.0462509482852397, -0.0861406172015214, -0.0592779435547072, 0.0419653579568001, -0.0664849633967021, 0.0371752593669293, 0.0322428162834664, -0.0850751468296269, 0.0511059065410391, 0.0733474459902351, -0.13772893202923, -0.0673998447923362, 0.310846301207351, 0.558675422975013, 0.521365236311021, 0.354241069935192, 0.191869344688883, -0.03372965588605, 0.0530853284288966, -0.0293116099736653, -0.0249212007943747, 0.0638368176271529, -0.0367177720513273, -0.0494061533709652, 0.0840049079515531, 0.034923114185487, -0.119147983727547, -0.102051335488942, 0.0580623867843737, 0.177991467646234, 0.168967535310744, 0.0269828485767137, -0.0422834358062483, 0.0231585375344604, 0.0194450448797665, -0.0489268948148737, 0.0274543314372021, 0.0357139769432066, -0.0579902865171017, -0.0226386923439519, 0.0708887239792988, 0.054100792667605, -0.026542262158737, -0.0687702272053603, -0.056783645137503, -0.0212282817704199, 0.0331685428013918, -0.0180679775738178, -0.0150465009085728, 0.0374278566629371, -0.0206825288120618, -0.0263727251179387, 0.0417411500364066, 0.0157800467416786, -0.0475101742211331, -0.0346364816872198, 0.0161778843175249, 0.0400540944099272, 0.0320601151790009, 0.0161498916065068, -0.025183305978541, 0.0136677223022294, 0.0113194700284193, -0.0279447150722786, 0.0152901961990383, 0.0192541177753928, -0.0300067341109194, -0.0111354237813169, 0.0328151965502045, 0.0233694247946402, -0.01066248859779, -0.0258703387477114, -0.0204377486844255, -0.0115328676664566, 0.0179595823201525, -0.00972318485741232, -0.00802317947777425, 0.0197088132757675, -0.0107149750852938, -0.0133857033409973, 0.0206615059467217, 0.00758188266692902, -0.0220643135484972, -0.0155063372756187, 0.00698505338421238, 0.0167680425745956, 0.0131579832681925, 0.00722308306755834, -0.0112386014642294, 0.00607504740972201, 0.00500137596630599, -0.0122478231358701, 0.00663243514938081, 0.00824542236821217, -0.0126538871154446, -0.00461272526884684, 0.0133261778761111, 0.00929506722403527, -0.00415739023397418, -0.00992201385150934, -0.00775761828947919, -0.00311548298461098, 0.00484530498059742, -0.0026170060274197, -0.00215190380330779, 0.00526129147506541, -0.00284326732501219, -0.00352591893376715, 0.00539514262051418, 0.00196010872552553, -0.00564215401461692, -0.00392078835393843, 0.00174754623992004, 0.00415891412382563, 0.00324600371043092).finished();
}
} // namespace mrcpp
} // namespace detail
