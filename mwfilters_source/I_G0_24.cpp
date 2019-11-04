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
auto get_I_G0_24() noexcept -> Eigen::Matrix<double, 25, 25> {
  return (Eigen::Matrix<double, 25, 25>() << -0.151712071911851, 0.233392567796777, -0.1295106202824, -0.0809553072302679, 0.22491582413675, -0.174013865483044, -0.0354930461672345, 0.211973228131079, -0.173381237527358, -0.053811843139895, 0.217542982558054, -0.104647460467009, -0.150860868560811, 0.173581265849225, 0.090642044858499, -0.177861409192413, -0.0936303453436148, 0.136695698279843, 0.147774757361974, -0.0102662109255827, -0.125227540895586, -0.128762300574142, -0.0759056765668876, -0.0268553784150637, -0.00341003615287681, -0.139644850821613, 0.232793104099518, -0.172177636608644, -0.0065223180010605, 0.18230866569185, -0.225704601758516, 0.0947681974405876, 0.115345598817152, -0.225683395290702, 0.122226675070479, 0.107948100303947, -0.215892360792334, 0.0545047142114005, 0.179200712450123, -0.133530139935452, -0.135738776429995, 0.133946755912471, 0.144712379405052, -0.0614743739479499, -0.160030351433163, -0.0879175428330836, 0.023493436937556, 0.0830807809729742, 0.0872416425247073, 0.0601129410460675, -0.126907363498189, 0.226679131679819, -0.204967066025296, 0.0685988092213879, 0.109276269569072, -0.222988564725318, 0.194067137581706, -0.0300307465753838, -0.158991749761389, 0.220155673680596, -0.0832959408866892, -0.137727395005489, 0.205358188315546, -0.0164272062954438, -0.191592585066133, 0.0911650529780476, 0.164209006576297, -0.0755905522994104, -0.167840663329008, -0.0282528193366214, 0.110588378875605, 0.131230642263611, 0.0806435765708199, 0.0288912847540085, 0.00367711260363345, -0.113564053682002, 0.215201321316419, -0.226002913746837, 0.136496299361628, 0.0180084255063096, -0.166524193379179, 0.229962388477347, -0.162717031202944, -0.00847268843740851, 0.177394788645184, -0.211542888883459, 0.0612713580509931, 0.150819097454723, -0.193608485320167, -0.0113155992131953, 0.19397079544931, -0.0474253289464777, -0.176632926044252, 0.00669429075763439, 0.15323239314315, 0.106334434100258, -0.00971521373542152, -0.0784841047733556, -0.0865683810533616, -0.0600974216284642, 0.0996818922558011, -0.198637639444462, 0.23408608532903, -0.19002503234046, 0.0762694285933745, 0.069919445639788, -0.190724914000948, 0.226636814146879, -0.146507911404158, -0.0212784836612588, 0.179803116854999, -0.206526164796315, 0.0545718349297653, 0.153360191829004, -0.183031995228485, -0.0327370155869771, 0.189207244222396, -0.001010437174934, -0.170021427965803, -0.0651421996167062, 0.092885910017267, 0.132248486956689, 0.0851220789798865, 0.0309097273941473, 0.00394489046618877, -0.0853329556303774, 0.177392916441356, -0.22877196705813, 0.223570751005487, -0.157852324898944, 0.0435685009293287, 0.0891458251887887, -0.19474869664725, 0.224206715093242, -0.148391489017197, -0.0121227517458745, 0.170645914038234, -0.205434412406279, 0.0591602475520712, 0.149645854421363, -0.173016972578595, -0.0523154254684143, 0.177101833121452, 0.0487625149696367, -0.137522107525018, -0.121831578312798, -0.00414803915783638, 0.0736152789218438, 0.0858587696578552, 0.0600760169024229, 0.070606327168457, -0.152016625886701, 0.210437049740521, -0.233694782148939, 0.213240890529317, -0.146713789027962, 0.0417262387732412, 0.0803841382690706, -0.183508831486004, 0.223032013037278, -0.164509765406527, 0.014712000368675, 0.151071663802759, -0.205482542315886, 0.0701220501111901, 0.143041196002929, -0.161444914246241, -0.0739674641143243, 0.154283130918838, 0.0980991059211282, -0.0724725234290735, -0.13192165457995, -0.0892466345022244, -0.032964038639072, -0.00419024647581069, 0.0556515848439864, -0.123289179867018, 0.180408810699694, -0.219694430153883, 0.233631448980143, -0.215151738032314, 0.159668602655458, -0.0686782087092451, -0.0453206198053286, 0.15440041069995, -0.215956588883857, 0.186361078559442, -0.0535244865648173, -0.121963289368598, 0.203575761457906, -0.0824883821801952, -0.136665154392298, 0.145202587147599, 0.0997983643375929, -0.114513752263351, -0.133463877584678, -0.0183945519627429, 0.0688396849076243, 0.08493066741271, 0.0601595805914938, 0.0407996808119762, -0.0924817846070092, 0.141323101265014, -0.184260294399392, 0.217107043945079, -0.234092300412724, 0.228005896950542, -0.191367206422855, 0.119387157938653, -0.0154044385012854, -0.101726794395168, 0.192282412432456, -0.202310763927452, 0.0959945708125187, 0.086642615360487, -0.198686165149108, 0.0919921825071051, 0.133361182540907, -0.119941383128137, -0.127700525632924, 0.0518458152020541, 0.129044515381255, 0.0942700425612528, 0.0344342481272725, 0.0047228275454338, -0.0267694462358794, 0.0618118072646866, -0.0977552859012653, 0.134298046029918, -0.170414424415903, 0.203718222386062, -0.22980723919723, 0.241689764609843, -0.229803166010962, 0.183689434471026, -0.0969618170137333, -0.0231060135024154, 0.143372566924392, -0.201120623430924, 0.132287390342224, 0.0517164163407353, -0.193181730143487, 0.0953895545440176, 0.135006434977477, -0.0798271871034101, -0.147327330408097, -0.029078747710484, 0.0616505257817176, 0.0864098567366522, 0.0600064990363786, 0.0147442220103157, -0.0345948355938822, 0.0563387888919711, -0.080843913405016, 0.108867226952828, -0.140722640654261, 0.175757886653676, -0.211492823177744, 0.242392841983701, -0.258565270422227, 0.245438757913454, -0.186862520620176, 0.0753813343189764, 0.0684068621710424, -0.177301853261553, 0.154988244552464, 0.0252158786250665, -0.191934361352337, 0.089379692968963, 0.140702409729724, -0.0189431852668694, -0.136572250841463, -0.0951588433616929, -0.040916350468745, -0.00361771238445416, -0.00594695954942221, 0.0142121656571241, -0.0239172940985375, 0.03597421724249, -0.0515051611039499, 0.0718284808866023, -0.0983522601819646, 0.132223931515882, -0.173508763651568, 0.219598655769885, -0.26267520043904, 0.286813173001713, -0.267455062017341, 0.17976228952801, -0.0243237400607135, -0.133919844509623, 0.162393951940881, 0.013797190775569, -0.198807533128046, 0.0682497973598885, 0.142038153739173, 0.0608123121848262, -0.0700375015348857, -0.083705603021489, -0.0666090030803598, 0.000847315721347746, -0.00218753662535194, 0.00416085983401581, -0.00726324335943908, 0.0122083843350868, -0.0200411607356604, 0.0322742063700947, -0.0510058446395094, 0.0788980575909078, -0.118725483719269, 0.171929912182933, -0.235344254785842, 0.295568418435687, -0.32296533263415, 0.274196210992034, -0.121704493831872, -0.0803459461375998, 0.157603978509979, 0.022188954386174, -0.21199982882443, 0.02421632694039, 0.116739604401793, 0.128605816392505, 0.0349288945992741, 0.00976756613600895, 0.00120142878640261, -0.00273228053904387, 0.00419224909959271, -0.0054670644514616, 0.00634382683563783, -0.00642075894319744, 0.00496492624390196, -0.000686590609160026, -0.00858844569034267, 0.026307395474848, -0.0574072192582867, 0.10766146015436, -0.180617135872882, 0.269821421930755, -0.345812718873519, 0.347670353653016, -0.211430472410823, -0.0283448700565419, 0.145065501230381, 0.0544026813560439, -0.219466431415121, -0.0423611591255099, 0.0370917558004388, 0.114349054094464, 0.0661508926879304, 0.0014648999539075, -0.00341752418225105, 0.00551254845135433, -0.00781392931792129, 0.0103813342100693, -0.0132401495371244, 0.0163253105777407, -0.0193629097774995, 0.0216329805322216, -0.021525787131884, 0.0157942722143594, 0.00147613847925809, -0.0396272377736898, 0.109898731928999, -0.216987006792999, 0.338196292860466, -0.397474765268633, 0.285475323163434, -0.0105828094924398, -0.126678185568656, -0.112754535735115, 0.195583368829791, 0.100406922694495, 0.0773412268108006, -0.00277997558925728, 0.0010566850233496, -0.00248088075752033, 0.0040508649858898, -0.00585532616014465, 0.00801066651014666, -0.0106655150716986, 0.014005451346534, -0.0182437802878916, 0.0235699076218743, -0.0299890991628848, 0.0369128975337558, -0.0422430622854702, 0.0406120586223817, -0.0207875297685764, -0.0358576814106073, 0.148684842032942, -0.309099390278412, 0.428446044189576, -0.340029872596824, 0.0265859158136269, 0.0969105930362586, 0.189521488175704, -0.110449873182991, -0.0797183656682413, -0.0992922960765728, -0.000592805810302385, 0.001393313197737, -0.00228042045005625, 0.00331059646645654, -0.00456345499571686, 0.00615254721015925, -0.00824476512214103, 0.0110889108694268, -0.0150531542033821, 0.0206599495019429, -0.0285703251600795, 0.0393692527899872, -0.0527729800841134, 0.0654789844723553, -0.0666448557111692, 0.0317188556582762, 0.0761961013251705, -0.270532829155912, 0.45017558175755, -0.372349005688632, 0.0133469578407285, 0.0386549187594725, 0.246703936648302, 0.0204484583487583, 0.0307112048950807, -0.000277567867925541, 0.000651004026907325, -0.00106159712039575, 0.00153368157154414, -0.00210256652816501, 0.00282067772629223, -0.00376985928237356, 0.00508327461966133, -0.00698431440585799, 0.00985431268286439, -0.0143429684502664, 0.0215195164306772, -0.0329752872456394, 0.0504842529799575, -0.0740348818385247, 0.0957193836640417, -0.0873654448693584, -0.00828880151378256, 0.235572300190343, -0.474054415218625, 0.375603753260115, 0.0251021665502587, 0.0683184339994431, -0.203948928190042, -0.0703939282511132, -0.00011131930058064, 0.000259841602444644, -0.00042004336479164, 0.000599081168324914, -0.000807340569875561, 0.00106018772160997, -0.00138201075317633, 0.00181425632450973, -0.00243184728747053, 0.00337748195202182, -0.00493370961151729, 0.00767134583297851, -0.01273535530084, 0.0223082857705199, -0.0400175294156718, 0.0699020147641374, -0.109530629229606, 0.129827491573185, -0.0490303288564217, -0.218444867688738, 0.509203027096614, -0.333510581981047, -0.0578019123580374, -0.197216272970659, 0.0319019088703133, 3.85540381171908e-05, -8.93416603729718e-05, 0.000142471614376986, -0.000198984582613024, 0.000260270466972286, -0.000328064378514954, 0.000404789814651948, -0.000494495219515513, 0.000605386667292886, -0.000756749864487125, 0.000997898369212228, -0.00145957915607197, 0.00249001077884777, -0.00499627689160273, 0.0112122130799548, -0.0260390898496565, 0.0578132470602726, -0.111995237861945, 0.161181524470789, -0.0910797755146515, -0.236245334601944, 0.553431640365766, -0.223452412834503, -0.0162678555331431, -0.191588083957341, 1.1501881715166e-05, -2.63958651200714e-05, 4.13160974941493e-05, -5.60064961932126e-05, 7.00085102045784e-05, -8.24006953005776e-05, 9.14208611141073e-05, -9.38160033636618e-05, 8.3743955059743e-05, -5.10773996017848e-05, -2.0543660417627e-05, 0.000153066885552474, -0.000358054924110339, 0.000558254529253924, -0.000294626314219123, -0.0021914731710069, 0.0122571838435069, -0.0423439542391673, 0.108148361952674, -0.185472596464971, 0.110781083122134, 0.310313816372991, -0.572972113268639, 0.054635337490273, -0.110027386808568, 2.91898897289382e-06, -6.61766005978421e-06, 1.01128280212937e-05, -1.31679821855634e-05, 1.54095765820392e-05, -1.61896130440267e-05, 1.43562399258528e-05, -7.82210247835366e-06, -7.27843389797269e-06, 3.82765495548349e-05, -9.93900782278124e-05, 0.000218578749955195, -0.000450382676474657, 0.00089492106995597, -0.00170056816590661, 0.00291605794664869, -0.00364856739126849, -0.00102225587886746, 0.0271682795128633, -0.103197966388953, 0.206633016089912, -0.0911395069763056, -0.458135595644677, 0.474869007141363, 0.0468277368417069, 6.1368140062967e-07, -1.37091284074978e-06, 2.03339377668985e-06, -2.51142708481944e-06, 2.67013365403032e-06, -2.28845458080939e-06, 9.89586156502236e-07, 1.8909306691464e-06, -7.56964688803453e-06, 1.83740504691991e-05, -3.89868389199443e-05, 7.93507216484872e-05, -0.000161686788195654, 0.00033757241603014, -0.00072750986139333, 0.00159663472275009, -0.00340590166931072, 0.00629090989688084, -0.00656974121529673, -0.0148627989028931, 0.101811926893216, -0.224242946364902, -0.00729299446176054, 0.643807089128214, -0.156493482010319, -1.01211376856451e-07, 2.22195929550567e-07, -3.17800857250822e-07, 3.66383549769647e-07, -3.37073980658994e-07, 1.82274048014772e-07, 1.74459646948348e-07, -8.603286382092e-07, 2.09575953062436e-06, -4.28322545288962e-06, 8.20999907928938e-06, -1.55566342124978e-05, 3.02928027438656e-05, -6.28017004519745e-05, 0.000142603889065941, -0.000357430186046737, 0.00096309457642863, -0.00261210924740873, 0.00633059372365773, -0.010210336023331, -0.00706652821440596, 0.106424435349858, -0.223823499268934, -0.255256033210504, 0.610916582760971, -1.13796517480487e-08, 2.44830133961616e-08, -3.35169456847618e-08, 3.53007043330242e-08, -2.5602564106263e-08, -1.55716502485492e-09, 5.48308291429277e-08, -1.46857900957217e-07, 2.96141394433351e-07, -5.29786511440946e-07, 8.88115863361101e-07, -1.43621532046952e-06, 2.30884750663065e-06, -3.92251814749068e-06, 8.00566841903322e-06, -2.24740415043907e-05, 8.32475443801024e-05, -0.000342113205186084, 0.00134883955457497, -0.00447875365463512, 0.00959912380957561, 0.00424854172485818, -0.10891091236002, 0.163719140823236, 0.679118737515856).finished();
}
} // namespace mrcpp
} // namespace detail
