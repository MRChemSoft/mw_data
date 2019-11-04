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
auto get_I_G0_12() noexcept -> Eigen::Matrix<double, 13, 13> {
  return (Eigen::Matrix<double, 13, 13>() << -0.208519978881033, 0.319274648840579, -0.165836351086528, -0.137999318294869, 0.309096708268472, -0.137209055486757, -0.207733823516517, 0.226710533998757, 0.155044610095704, -0.15692593381201, -0.205229174037176, -0.0904956950554568, -0.0121011434508385, -0.1764984330306, 0.312371921146729, -0.26775448453072, 0.0485067404570506, 0.21268900166193, -0.296629921684676, 0.0742211998815315, 0.237692444335989, -0.160597533850216, -0.206690339986338, 0.0270980369385711, 0.141554818121409, 0.112737646889313, -0.14152376190624, 0.279480536002595, -0.31642193639579, 0.217823573899526, -0.00142259489773941, -0.227356275895016, 0.281716863090978, -0.0436934068198214, -0.243802282920391, 0.0832404235986735, 0.210494696389889, 0.102259974572744, 0.0138440612674453, -0.104561351097903, 0.224160544979443, -0.303295274718333, 0.310613143740377, -0.216404125021387, 0.0185693095062461, 0.206030752920488, -0.270103416749235, 0.024845284635119, 0.237927383704976, 0.0137294178785845, -0.132671522267216, -0.112930845691805, 0.0677604838422662, -0.154476400032074, 0.236224767764125, -0.300307728682044, 0.321095798069337, -0.259189365936296, 0.0831366309590488, 0.159224834858494, -0.25398543430238, -0.00703586997475493, 0.213797138191425, 0.111612738204481, 0.016972787738462, 0.0353896792256415, -0.0847118284912062, 0.142088938648262, -0.209270758922551, 0.281244234462298, -0.336349397968372, 0.323903256645738, -0.174029691033776, -0.102370164625884, 0.229643575912867, 0.0715679519722335, -0.1372865461293, -0.113902061752998, -0.0124588123449251, 0.0313670259269009, -0.0576317251003118, 0.0970359437627298, -0.15667129732669, 0.241071657760625, -0.338188497526311, 0.388564731079437, -0.268056397329084, -0.062603543044054, 0.191324452746972, 0.159983772788237, 0.0116085466302891, -0.0009049869011065, 0.00300378061379709, -0.00785017268740467, 0.0187829200912439, -0.0423466571627951, 0.0904971105187904, -0.180413215737633, 0.318878502767541, -0.442715837820852, 0.343685682769355, 0.0698016493500598, -0.102190853022417, -0.161021546339882, -0.00222605026376833, 0.0051907848523977, -0.0082464384106238, 0.0109158080156759, -0.0113693364145756, 0.00401557202712714, 0.0259430685015512, -0.110239970300234, 0.28689374278447, -0.493156718115524, 0.374755992194407, 0.129537582438014, 0.0638439827752198, 0.00176049654925853, -0.00428432033236586, 0.00745498722249571, -0.0117644042368518, 0.0178056440984569, -0.0257748017941903, 0.0330574032302182, -0.0255091628553748, -0.0441692982229124, 0.263659401113415, -0.55932357900557, 0.305533162293941, 0.139280617993072, -0.000786981910762226, 0.00193363129080642, -0.00343692112345648, 0.00565254716005101, -0.00924628150163231, 0.0154901334895226, -0.026576402919012, 0.0444431625706156, -0.0599325774188229, 0.00796510331199843, 0.282218473621785, -0.640590864753752, 0.0573206821188604, -0.000235298526860441, 0.000575917109472703, -0.00101838364165688, 0.00167122718399142, -0.00276222157147985, 0.00482555974164479, -0.00921248267488226, 0.0193419536659779, -0.0422343871750588, 0.0784626555669415, -0.037465091935162, -0.40080312061112, 0.574037437421176, -4.36995496371204e-05, 0.000105423661823481, -0.000181427642658508, 0.00028582693951259, -0.000448355828549118, 0.000745122107058216, -0.00141170606277925, 0.00329061062520663, -0.00955795154418086, 0.0306879428176165, -0.0806706520356873, 0.0287906924696322, 0.701153715497631).finished();
}
} // namespace mrcpp
} // namespace detail