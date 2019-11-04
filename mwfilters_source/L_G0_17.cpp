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
auto get_L_G0_17() noexcept -> Eigen::Matrix<double, 18, 18> {
  return (Eigen::Matrix<double, 18, 18>() << 1.06880847906552e-58, -0.00812779240760019, -0.0314788046360666, -0.0722351009759326, -0.122860358429115, -0.156506062960688, -0.124232982943366, 0.014234413909125, 0.201327606219732, 0.205689264122021, -0.147671631503053, -0.317271004572227, 0.420035413432872, -0.227379255430801, 0.0698910274062342, -0.0131549524089644, 0.00150807484139352, -9.70688678748478e-05, -0.0409507955979091, -0.0709288585859465, -0.0886307275231119, -0.0909639706916687, -0.0652584871025503, 0.00145260346379468, 0.103223851240543, 0.186198845202262, 0.144326934986166, -0.0800351352690559, -0.275687718643416, -0.00888656635444291, 0.396916133803263, -0.368867994517823, 0.168683485604885, -0.0461917553793051, 0.00795115141188242, -0.000847091517267954, 2.34342493814717e-57, 0.0066113478176922, 0.0256056399939066, 0.0591088564935602, 0.102723913234016, 0.13897101959151, 0.133391528047897, 0.0478956154379315, -0.110238303471198, -0.219985530937591, -0.0834233001541279, 0.247772860185538, 0.165701143668207, -0.424278012880484, 0.306332992134317, -0.121360486265594, 0.0299640848990916, -0.0047514272167754, 0.0371362896101055, 0.064321940409295, 0.0808540242581121, 0.0853253105996191, 0.0683603150308757, 0.0189634632793902, -0.0635842276308632, -0.149959507247531, -0.168395722443553, -0.0429452364888722, 0.178417286237766, 0.215435007292515, -0.142997640533805, -0.291390537676749, 0.410471974143304, -0.243328200326233, 0.0850736188525398, -0.0191237995393348, 1.48502561296701e-56, -0.00548409161461312, -0.0212397954924724, -0.0492450726811089, -0.0869114369126287, -0.122481172159332, -0.131340557035283, -0.0816225257293253, 0.0385013053163519, 0.1720891663228, 0.17551369409823, -0.0501412140345518, -0.27072111572405, -0.000808763001757666, 0.371529040857277, -0.369797481851288, 0.18636858891295, -0.0583253072290181, 0.0340178468756308, 0.0589206391526907, 0.0743945102468369, 0.0801128061617303, 0.0690012552957103, 0.0319126869471518, -0.0346668213503308, -0.115052896913342, -0.161836779888384, -0.108026630457725, 0.0640680522822293, 0.218249881773404, 0.102326817170125, -0.240507463209703, -0.14656370070875, 0.406013558623567, -0.315826242766083, 0.138609543413956, 3.25419704439404e-56, 0.00465865385536051, 0.0180428887975562, 0.0419714906341644, 0.0749295736024737, 0.108736954558723, 0.12537837330018, 0.0990562572740575, 0.0117402369461029, -0.113927633036531, -0.185980843976655, -0.0856612590359817, 0.158513671381933, 0.221227061464706, -0.14328121719462, -0.27015793863039, 0.405647034189952, -0.26027812767807, 0.0323069182031034, 0.0559572237637468, 0.0708981479613886, 0.0775348150443078, 0.0703060318047315, 0.0414346057430627, -0.013762950107806, -0.0871950041019804, -0.147087711054232, -0.139268082963799, -0.0233951625213075, 0.150537502456398, 0.200034813769854, -0.0262613965870861, -0.275319468075516, 0.00291994418595805, 0.370406370561131, -0.390360904126162, 1.48029468156577e-56, -0.00425852169768549, -0.0164931836145988, -0.0384709926918559, -0.0693228078004782, -0.102955044578591, -0.125270884381671, -0.114500762350299, -0.0504377191397839, 0.062792983507563, 0.168726094560172, 0.162532115098578, -0.0171102522495363, -0.22771251832737, -0.140642597666206, 0.247712462853474, 0.184125535208905, -0.474825584793446, -0.033829062952242, -0.0585936558057292, -0.0744706878226608, -0.0825613800292431, -0.0781623133826989, -0.0541615630566801, -0.00498862390976464, 0.0660324158583947, 0.137163472981015, 0.164341311654565, 0.0986483915915151, -0.0619789750555205, -0.211251897297509, -0.162037378807139, 0.12791013994191, 0.296813154362826, -0.0809872061372121, -0.477845042739844, 2.44733283653942e-56, -0.00417890226242131, -0.0161848188677862, -0.0378543652351534, -0.0688414361231713, -0.104545234309198, -0.133629535425829, -0.13727474404292, -0.0941712366681136, 0.00439639236854121, 0.130770157719331, 0.20625744451115, 0.134028327709017, -0.0926641275679943, -0.277383534394832, -0.126250863215847, 0.304597452875772, 0.406418888935662, -0.0373262401055887, -0.0646509443183948, -0.0824417426801556, -0.092708132367677, -0.0916029732014229, -0.072687788984029, -0.0297526090409194, 0.0379403701417137, 0.11802779889933, 0.178731111862988, 0.173031683588892, 0.0652841989760784, -0.119070620394329, -0.256414827833962, -0.179240428956922, 0.134756884553208, 0.405311557335357, 0.297436570454593, 3.04405767154065e-56, 0.00405235468434214, 0.0156947022053827, 0.0368158884225152, 0.0676127606713812, 0.105093386444443, 0.141074730091543, 0.160845053186829, 0.14480746060313, 0.0762163222294672, -0.0433977913990096, -0.176083711031963, -0.243534282740055, -0.162580970931874, 0.0733620530942944, 0.325687011164816, 0.37998814777474, 0.189047686326441, 0.042029356777626, 0.0727969813482875, 0.0931606690724404, 0.106349047689077, 0.109700083238993, 0.0979375943321213, 0.0649552560058246, 0.00691203530381847, -0.0728316131607496, -0.157978157244335, -0.216392407233038, -0.206408585877852, -0.0981679142649798, 0.0935217819593191, 0.288175900662183, 0.369576475259823, 0.280154871943764, 0.104203665387296, -1.33229717690073e-56, 0.00377469401590581, 0.014619327060632, 0.03440112197003, 0.0638356624684975, 0.101627328524413, 0.143163500299065, 0.179228429706282, 0.195682093655344, 0.175569589761259, 0.105136321630716, -0.0162066518686527, -0.165593852290851, -0.294769142733368, -0.346964068936834, -0.293487846461671, -0.166988064090952, -0.0491938592282781, 0.0497149355346475, 0.0861087942410209, 0.110614831235796, 0.128272743303929, 0.138094842222224, 0.136687913530436, 0.119281346398577, 0.0809912469249701, 0.0188720524204026, -0.0652415897435828, -0.161824198074475, -0.252389775695581, -0.312314808799818, -0.319529550533561, -0.26743316558985, -0.174558351521188, -0.0798549314693714, -0.0193618518828249, 2.31061748620053e-57, 0.00320005016599179, 0.0123937409999145, 0.029261366014123, 0.0548901093096764, 0.0895497316668523, 0.132241272382194, 0.180139234624896, 0.228133249997746, 0.268810762488097, 0.293320894157064, 0.293472454245976, 0.264958018221026, 0.210682926072381, 0.1421342580118, 0.0765185019533615, 0.029313561998052, 0.00601303224586266, -0.0718815020393739, -0.124502413656562, -0.160578114430395, -0.189270623342052, -0.212555181997584, -0.230479361930558, -0.24213799681285, -0.246105019065562, -0.240840069140233, -0.225206863750758, -0.199102469151662, -0.164066944498319, -0.123605730140354, -0.0828817925060057, -0.0475493640033228, -0.0219137325418307, -0.007223680384303, -0.00127992152246078).finished();
}
} // namespace mrcpp
} // namespace detail