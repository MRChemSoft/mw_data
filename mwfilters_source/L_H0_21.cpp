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
auto get_L_H0_21() noexcept -> Eigen::Matrix<double, 22, 22> {
  return (Eigen::Matrix<double, 22, 22>() << 0.707106781186548, -8.58753752171809e-79, -4.44643609457848e-77, -9.54170835746455e-79, -2.70984517351993e-77, 7.63336668597164e-79, -2.46176075622585e-77, 5.72502501447873e-79, 1.48468982042148e-76, -7.63336668597164e-79, 4.02278424350705e-76, 1.90834167149291e-79, 6.41775304123065e-76, 0, 2.68938775080153e-74, -1.90834167149291e-79, 3.10424214676737e-74, 0, -1.20396321883652e-73, -9.54170835746455e-80, -2.45690450375732e-73, 9.54170835746455e-80, -0.612372435695794, 0.353553390593274, 3.72469531085214e-77, -2.34703662214665e-77, 2.20040740074718e-77, 2.27234293641087e-77, 2.19802197365781e-77, -2.45125742257299e-76, -1.27915545883397e-76, 3.13205085941843e-76, -3.47666307477564e-76, 1.98845549484331e-75, -5.5616307133168e-76, -8.73102990649505e-75, -2.3291611260741e-74, 7.89580108718938e-74, -2.68827234000346e-74, 1.38495978776129e-73, 1.04267611451182e-73, -1.09550713771249e-72, 2.12774042232051e-73, -3.96990451016476e-72, -1.46942308704954e-77, -0.684653196881458, 0.176776695296637, 4.77085417873227e-77, -1.35492258675997e-77, -4.77085417873227e-77, -2.38542708936614e-77, 4.75749578703182e-76, 4.29376876085905e-77, -6.11814339880627e-76, 2.46176075622585e-76, -3.85141516140699e-75, 5.4902989888851e-76, 1.69069530385914e-74, 1.32803405260863e-74, -1.52899769735021e-73, 1.30702321080549e-74, -2.68196048501608e-73, -2.61224303873143e-74, 2.12143893425017e-72, -3.74534476045124e-74, 7.68768887207277e-72, 0.233853586673371, 0.405046293650491, -0.522912516583797, 0.0883883476483184, 3.49345797237671e-77, 2.01031867956331e-77, 6.88314986636599e-77, -3.20762417139341e-76, -8.22525078252061e-77, 3.84870770166056e-76, -5.96097357145566e-76, 2.82295019896223e-75, -1.41727168730827e-75, -1.22141172346007e-74, -3.03859593871398e-74, 1.10507632283552e-73, -2.83999601367526e-74, 1.86998115629231e-73, 3.74489041113531e-74, -1.51823400327589e-72, 2.95278407549305e-74, -6.03339171741e-72, -3.81668334298582e-77, 0.153093108923949, 0.592927061281571, -0.350780380010057, 0.0441941738241592, 3.20601400810809e-77, -9.29362394017047e-77, 5.40060693032493e-77, 1.45606469534909e-76, 3.70218284269624e-77, 9.016914397804e-76, -1.29671816577943e-75, 2.0736040602442e-75, 4.9924126467926e-75, 4.80571958107045e-74, -4.53763574305912e-74, 4.59187081336295e-74, -5.2450007504314e-74, -7.80782728157952e-74, 5.70079480027578e-73, -8.31048447785075e-74, 4.17555073943059e-72, -0.146575492494482, -0.253876200144874, -0.163876382526586, 0.581703452155821, -0.219863238741723, 0.0220970869120796, 5.6334842499243e-77, -9.09354624304988e-77, -6.19584868624237e-77, -5.86546703436516e-77, -7.06119218074855e-76, 2.19704096676731e-75, -1.76209411842773e-75, -8.53789082042066e-75, -3.53395149175386e-74, 7.82339100062409e-74, -2.8882065387757e-74, 8.6072402549411e-74, 1.7240301565411e-75, -9.69710467940989e-73, -1.25818856852496e-73, -7.36410731545424e-72, -2.12780096371459e-77, -0.0689981317681863, -0.26722861525761, -0.421585548851001, 0.478033079399324, -0.132121363478811, 0.0110485434560398, 2.91976275738415e-76, -1.13355495286679e-76, -1.40453947021878e-76, 5.25557296329147e-76, -3.28940853915233e-75, 1.7220875243552e-75, 1.36753672520853e-74, 1.86418264521456e-74, -1.28986149415376e-73, 2.92796862657157e-75, -1.56806717639068e-73, 1.47228273704427e-73, 1.61458653506541e-72, 5.4296156320733e-73, 1.04883326322168e-71, 0.106977062012728, 0.185289706650491, 0.181798066847189, -0.0566069404148025, -0.534885310063639, 0.3548027758708, -0.0771422564770762, 0.0055242717280199, 1.01368724162614e-76, 2.07233978388683e-77, -7.1726810793378e-76, 1.2703234150356e-75, -2.38951213325668e-75, -7.07759795555567e-75, -3.00369043138286e-74, 7.72000092518162e-74, -8.40472137137293e-75, 3.74936062695618e-74, -1.92395584232042e-73, -7.91580381768671e-73, -7.75592612804885e-73, -8.30246133386927e-72, 1.66407393754182e-76, 0.0394511911654769, 0.152793806371937, 0.301313449619951, 0.204994402553155, -0.528802957971469, 0.246372609862836, -0.0441077726196727, 0.00276213586400995, 1.33393082837354e-76, 1.00645939754536e-75, 1.26694803570414e-75, 2.81365896044915e-75, -2.98941722839364e-75, 4.50378176180684e-74, 2.18734122386517e-75, 2.50261835141252e-74, 1.5493320320308e-73, 1.23835248992766e-73, -4.75373826228065e-73, 7.66655704140766e-73, 5.9157020058371e-72, -0.0842790976968415, -0.145975679226991, -0.161531821313557, -0.0637090094933597, 0.216717679791878, 0.39931734961447, -0.455808912293701, 0.163205770906627, -0.0248208301311305, 0.00138106793200498, -7.52029744193568e-76, -7.70439277755751e-76, -2.26970405769326e-75, 1.6149162487977e-75, -3.1042630192544e-74, 1.83666853280904e-74, -1.33516111239488e-74, -1.74402221225221e-73, -1.0840488128606e-73, 3.46941462656838e-73, -9.08846110885213e-73, -8.58658778032227e-72, 6.61240389172293e-76, -0.0255777360424, -0.0990621457259044, -0.210503024770429, -0.253153933531557, 0.0104952076465843, 0.490608224764219, -0.359502355151361, 0.10437804074912, -0.0137934051677984, 0.000690533966002488, 1.03126783927477e-75, 7.97686818684036e-77, 6.04448141028664e-75, 1.08418615382527e-74, -7.72952802279817e-74, -7.7249670862033e-75, 1.07286873354248e-73, 1.85634031511556e-73, 3.58037625631736e-73, 1.31447289960558e-72, 1.11817565357592e-71, 0.0695453758035306, 0.120456124323186, 0.1406978842158, 0.0963808314913037, -0.0645778489604212, -0.291065800584817, -0.208957848692535, 0.493804817536819, -0.266261292339, 0.0649588425253176, -0.00758802259175784, 0.000345266983001244, -4.7701981862827e-76, -1.38869427077767e-75, -2.09005575452278e-74, 4.99136246251651e-74, -5.14408406470222e-75, -1.99165253368199e-73, -1.94091148788947e-73, 2.01548721425568e-73, -1.55217544919419e-72, -8.37272104289433e-72, -4.68516963768224e-75, 0.0179405987020252, 0.0694836399939341, 0.153009670967929, 0.220107701663293, 0.143140129389143, -0.180507282585682, -0.371745290494229, 0.441307394385264, -0.18812298593045, 0.0395553021143058, -0.00413960570259111, 0.000172633491500622, -4.59318756911628e-75, 2.95083055979606e-74, 2.27938054268128e-74, 2.83579572383846e-74, 3.84671300752843e-73, 6.17109033848184e-74, -1.31296053883093e-72, 1.40389359198006e-72, 5.25975910158206e-72, -0.0592039757166833, -0.102544293951369, -0.123357924633427, -0.103239338518338, -0.00642871453489237, 0.168093812205297, 0.274914431263867, 0.00810642466595898, -0.454921548126905, 0.363635843788664, -0.128117052855236, 0.0236610244206259, -0.00224257483775315, 8.6316745750311e-05, -2.18623915654989e-74, 1.91060782722781e-75, -2.70957860204269e-74, -4.04427264781348e-73, 5.13409091426809e-74, 1.07023496262062e-72, -1.29191067144061e-72, -7.18683673295274e-72, 2.49529986110234e-74, -0.013284298602997, -0.0514498672554539, -0.115603486198934, -0.181283661577571, -0.176520799885996, -0.00586588815455456, 0.273642327022754, 0.199320449302147, -0.467026783576276, 0.282240662668031, -0.0847113439910263, 0.0139448970444285, -0.00120766350936337, 4.31583728751555e-05, -9.35999606350499e-74, 4.521109504184e-74, 2.5806781133141e-73, 9.35459545657467e-75, -3.77493836892191e-74, 1.49813594813028e-72, 9.0657940173123e-72, 0.0515434170219584, 0.0892758170777425, 0.109344092753528, 0.101404123890135, 0.0407301127516175, -0.0856743299651528, -0.220498364544324, -0.184736218894801, 0.159017677884524, 0.344078934089262, -0.430008059376046, 0.209163768146521, -0.0546672604778347, 0.00811598337070386, -0.000647015840060858, 2.15791864375777e-05, -7.37842416579563e-76, -3.14918961633443e-73, -4.28033820998914e-74, 1.16824192525868e-73, -1.59690958703486e-72, -5.54001914791886e-72, 7.67149535256807e-74, 0.0102345192513237, 0.0396381226168159, 0.090193190712834, 0.148631623034035, 0.172042866302963, 0.0907318468848569, -0.119866611828528, -0.278556309580142, -0.0124278691962095, 0.424348123789452, -0.366809959680973, 0.149375400964147, -0.034568341247478, 0.00467292785582249, -0.000345098354428059, 1.07895932187889e-05, 3.62020048448891e-73, 7.7397949009908e-74, -1.03301597566294e-72, 1.27262907344309e-72, 1.77448445610678e-72, -0.0456399474313251, -0.0790507078058277, -0.0979718639481214, -0.0966015606026778, -0.057448884878591, 0.0338731370251748, 0.156041624778151, 0.210533095503393, 0.0531636663628142, -0.258761013058376, -0.183866825334376, 0.444497812568922, -0.295414932464577, 0.103484562945811, -0.021484146740091, 0.0026655154492612, -0.000183343732310454, 5.39479660939444e-06, 9.48694133691979e-74, 6.14591975910243e-73, -7.89311754134952e-73, -3.33988846118672e-72, -2.84826005746582e-73, -0.00812779240754105, -0.0314788046358376, -0.072235100975407, -0.122860358428221, -0.156506062959549, -0.124232982942462, 0.0142344139090215, 0.201327606218267, 0.205689264120524, -0.147671631501979, -0.317271004569918, 0.420035413429816, -0.227379255429147, 0.0698910274057256, -0.0131549524088687, 0.00150807484138255, -9.70688678741415e-05, 2.69739830469722e-06, 1.1432131654833e-72, 2.56085903088481e-73, 5.42535991087451e-72, 0.0409507954903469, 0.0709288583996433, 0.0886307272903126, 0.0909639704527409, 0.065258486931141, -0.00145260345997924, -0.103223850969413, -0.186198844713189, -0.144326934607074, 0.080035135058834, 0.275687717919289, 0.00888656633110127, -0.396916132760715, 0.368867993548947, -0.168683485161818, 0.0461917552579768, -0.00795115139099776, 0.000847091515042966, -5.1232818674329e-05, 1.34869915234861e-06, -6.6454699664076e-73, -1.84580146692601e-72, -2.21223239220604e-72, 0.00661134635589627, 0.0256056343323954, 0.0591088434232506, 0.102723890512604, 0.138970988827876, 0.133391498453093, 0.0478956046615338, -0.110238279264893, -0.219985482132738, -0.0834232810706853, 0.247772805434256, 0.165701105440151, -0.424277917160628, 0.306332923264078, -0.121360459018218, 0.0299640781761113, -0.00475142615106978, 0.000472770516148696, -2.69655523597692e-05, 6.74349576174305e-07, -2.41380405845842e-72, -0.0371360054612984, -0.0643214482491242, -0.0808534054499439, -0.085324656829441, -0.068359789048132, -0.0189633117232361, 0.0635837506744712, 0.149958365846225, 0.168394422018244, 0.0429448711120381, -0.178415943868476, -0.215433292864517, 0.142996615456625, 0.291388108825173, -0.410468654023286, 0.243326247690153, -0.0850729385293069, 0.0191236468801429, -0.00281084222623789, 0.000262346470332942, -1.41573265450511e-05, 3.37174788087152e-07).finished();
}
} // namespace mrcpp
} // namespace detail