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
auto get_L_G0_33() noexcept -> Eigen::Matrix<double, 34, 34> {
  return (Eigen::Matrix<double, 34, 34>() << 1.4737119465224e-261, -0.00232643782873685, -0.00901025496668477, -0.0211411518868607, -0.0388584183255136, -0.0605179512029141, -0.0815697383111159, -0.0937861413435018, -0.0861132662822986, -0.048878871018039, 0.0176734976934142, 0.0930771465535938, 0.133833774376033, 0.0928757697984479, -0.0324138298293331, -0.154057220148177, -0.128810482030977, 0.071155802030853, 0.204651937593558, 0.000917019193115771, -0.249614874103932, 0.0492637905594502, 0.278836145158064, -0.361105130868911, 0.243107144405384, -0.109071866772257, 0.035346750391624, -0.00856413234964062, 0.00157211513491868, -0.000218501632684761, 2.26839141862659e-05, -1.70781453290448e-06, 8.82056392174331e-08, -2.798511502623e-09, -0.0224811952175471, -0.0389385723316661, -0.0497884330594682, -0.0566337353708313, -0.0578355551606846, -0.0503138919507592, -0.0306728899129835, 0.00278968739309491, 0.0469486098780287, 0.0904779955930191, 0.11297774747345, 0.0911312065184359, 0.0153940868705545, -0.087440945666031, -0.146759245032523, -0.088037063579222, 0.0748694550445199, 0.180280640962876, 0.0518321274057499, -0.188681460743756, -0.119495353940108, 0.229403602657931, 0.0658079623280711, -0.332741395412873, 0.334697913032057, -0.198088265106876, 0.0812078561346212, -0.0245133493927182, 0.00559765643503988, -0.000976291473231472, 0.000129690704056448, -1.29282256992322e-05, 9.38087883931937e-07, -4.68398687555089e-08, 1.37795543047552e-259, 0.00207806285254703, 0.00804830282028694, 0.0189014745758805, 0.0348478692787147, 0.0546583983691998, 0.0747443013742971, 0.0884323005687808, 0.0863557852051556, 0.0592859037334796, 0.00439362123176255, -0.0662001073963658, -0.120294103912397, -0.114591417300028, -0.0265481567894786, 0.101993443726286, 0.157538593267011, 0.0457361676044914, -0.148628062064442, -0.155742235113205, 0.10977030469273, 0.206966956502187, -0.161362486106532, -0.171879875475703, 0.357002281444955, -0.296970494341223, 0.15716356653323, -0.0593527842665139, 0.0167706107460415, -0.00362151686052127, 0.000601624941919007, -7.65357433872049e-05, 7.33749012838913e-06, -5.13809584741641e-07, 0.0212816502681814, 0.036860899533402, 0.0471793262444042, 0.053892841780145, 0.0556915912862149, 0.0499582735431462, 0.0336631066209842, 0.00491156907340603, -0.0345857622916001, -0.0766380627718935, -0.105131198138017, -0.0993307865079918, -0.0452185883455094, 0.0463278736087203, 0.126520898685552, 0.124501302937115, 0.00876149374982843, -0.139009840017835, -0.145430724917569, 0.0523901068506446, 0.203641230091654, 0.00334229155239388, -0.244704412764047, 0.0630482839383701, 0.256722185146777, -0.355963783728126, 0.254118863941908, -0.121807850318855, 0.0426606710224045, -0.0113315026562801, 0.00232099260135701, -0.000368093455385394, 4.4924687434601e-05, -4.14816878940967e-06, -4.33581318438799e-258, 0.00186745723209211, 0.00723263075964733, 0.0169990960813687, 0.0314211564103275, 0.0495772040037451, 0.0686104779799866, 0.0830695156539416, 0.0850243645692683, 0.0659726096790969, 0.0214395641430645, -0.0421206521873227, -0.101605177090439, -0.120244548015097, -0.0676016392706643, 0.045176054487149, 0.141525300571004, 0.116379318977252, -0.0465345033377236, -0.179019170608672, -0.0659803259594284, 0.183093383810176, 0.116520274277478, -0.228916206814809, -0.0461698185800636, 0.314408655386713, -0.335841052094048, 0.210846353030215, -0.0924607554312768, 0.030201204484499, -0.00756926647356089, 0.0014745354282726, -0.00022371068015264, 2.62373116337809e-05, 0.0202036552273016, 0.0349937573522908, 0.0448278912970247, 0.051389992197595, 0.0536329394468589, 0.0493210453184591, 0.0357573145866441, 0.0109920598867813, -0.0242158482764456, -0.0639779763501005, -0.0956383738877778, -0.101335837224692, -0.0655768663489858, 0.0107490560866889, 0.0964823503872283, 0.132699615197468, 0.0694679340975662, -0.0701538332813592, -0.160636143167644, -0.0703429567145097, 0.135632305277974, 0.161147048035827, -0.105281856162795, -0.201029929124651, 0.167807972545957, 0.14944288322033, -0.344346547155459, 0.303190113832213, -0.170325227780179, 0.0688854684852297, -0.0210864033977172, 0.00500299350290947, -0.000929183622222745, 0.000135114242048321, 6.425701272652e-257, 0.00168733085322476, 0.00653500429408146, 0.0153696510518115, 0.0284714547199636, 0.0451493334746945, 0.0631105743423512, 0.0778709990412344, 0.0827090668244649, 0.0699448180619587, 0.0343276259741001, -0.0214721954831113, -0.0813637560162513, -0.115535202031395, -0.0923176751454225, -0.00450055832098765, 0.103351054790693, 0.140931630834727, 0.0438202710386291, -0.121190001551572, -0.156191953986204, 0.037139337561913, 0.201851554564015, 0.00336347353273041, -0.23976324821984, 0.0767012747084436, 0.234815865273723, -0.349678109901017, 0.263903342099926, -0.134391222988571, 0.050461913454763, -0.014536423065807, 0.00327456576300044, -0.000581100902545361, 0.0192296251470455, 0.0333066877651869, 0.0426980584584627, 0.0490978966474119, 0.0516707784850725, 0.0484977591679998, 0.0371792542477836, 0.0157911092699578, -0.0155457922488367, -0.0526380571744836, -0.0855808670491759, -0.0992729132724618, -0.0783841209874044, -0.0178836730174036, 0.0642234534744303, 0.122684040917751, 0.104571717936075, -0.00284395869861247, -0.126696040018947, -0.135325739829621, 0.0214883638909122, 0.175452219443895, 0.0762992073000397, -0.178710879453438, -0.111974263250069, 0.228614819842037, 0.0269517245032073, -0.295843127402172, 0.335612428925947, -0.222689588876672, 0.103840256458686, -0.0364020580985483, 0.00990425695927411, -0.00212385782023243, 5.10561502096409e-256, -0.00153207440263372, -0.00593369864655109, -0.0139634235313325, -0.0259150557421243, -0.0412721322246339, -0.0581812800956477, -0.0729297449837139, -0.0798067711831053, -0.0719541582272048, -0.0438682093780658, 0.00426141546425703, 0.0616094796387508, 0.104741729459198, 0.104112209926565, 0.0427409915899555, -0.0587323553983066, -0.132712903552338, -0.101403721354288, 0.0384930288856335, 0.157614069174764, 0.0893972590932024, -0.123930992040525, -0.164222594246134, 0.102844248475708, 0.194414395585673, -0.174251164735513, -0.127441387197711, 0.330973119477561, -0.308025605345973, 0.182925616297961, -0.0787387315847342, 0.0258929612129596, -0.00667539132230176, -0.0183455206927081, -0.0317753739310766, -0.0407608229618005, -0.0469935389672305, -0.0498100581880191, -0.0475559521147603, -0.038094908118701, -0.0195743077137512, 0.0083087248963232, 0.042612153929496, 0.0756041296757051, 0.094661882309909, 0.0854526664976449, 0.0397078199552085, -0.033900721234327, -0.102651076391568, -0.118301324533923, -0.0497659978041678, 0.072426463772619, 0.145708804513464, 0.0721568551384244, -0.102909997447715, -0.162807024843607, 0.025046333852965, 0.199719024770145, 0.00149289551260271, -0.234686870823016, 0.0900455203271376, 0.213093457720657, -0.342290451473635, 0.272473492342289, -0.146749731578036, 0.0586973956108654, -0.0181814796984525, -2.27823720537607e-255, -0.00139748685982007, -0.00541244333462681, -0.0127430966422278, -0.0236886101328074, -0.0378659285732339, -0.0537670850750917, -0.0682986768261897, -0.0765933500585828, -0.0725659352478938, -0.0507662014676241, -0.00979642339070772, 0.0434043369384736, 0.0908437501835255, 0.106539780321755, 0.0692607535480561, -0.0166798561397318, -0.105911735312641, -0.125858991371076, -0.0349012362073864, 0.106881981826221, 0.146988401021705, -7.25916947192739e-05, -0.170833478190394, -0.0836039572426262, 0.17546092707402, 0.10621249440788, -0.228312948191016, -0.00824364107076238, 0.277089343795231, -0.334119102630507, 0.233632877085949, -0.115288207938622, 0.0430886902627138, 0.0175520700700731, 0.0304010771393757, 0.0390194434806959, 0.0450884911247689, 0.0480851157835115, 0.0465761329013609, 0.0386557975243668, 0.0225663867682969, -0.00227203479715873, -0.0338423555212827, -0.0661196270307415, -0.08862127407751, -0.0883718608949044, -0.0555730731002041, 0.00746540854464688, 0.0784043239828531, 0.116739109516097, 0.0844474819303316, -0.0170098634374743, -0.120391995760974, -0.123077804826184, 0.00934262637388621, 0.151071618660112, 0.104028182212111, -0.113885384336068, -0.16578662080502, 0.102117556767987, 0.1874220180157, -0.180601857101156, -0.106104236728896, 0.317313037502747, -0.311878039253879, 0.195131188918934, -0.0889408646405878, 5.57163958229413e-255, -0.00128380142584573, -0.00497214154213785, -0.0117115156403809, -0.0218017760956601, -0.0349618735583907, -0.0499544932201715, -0.0641798666284935, -0.073463105419784, -0.0724078519660303, -0.0557746087460087, -0.021177733774995, 0.0272664979693805, 0.0759937008751801, 0.102922333899172, 0.0858279332236179, 0.0186841630963501, -0.0715615426254925, -0.125305962285525, -0.0855481546809991, 0.0394268855843248, 0.142803043192884, 0.0946847987573882, -0.0856275364372537, -0.16722517085179, 0.0154991019681913, 0.19824762018342, -0.00149732300988264, -0.23045334414706, 0.102891775662854, 0.193163470416633, -0.33596691498646, 0.281461049674618, -0.159693841172735, -0.016988986336666, -0.0294257875041989, -0.0377860468227206, -0.0437507361955835, -0.0469090954023443, -0.046003719255936, -0.0393158984717102, -0.0251786205233355, -0.0028277048813805, 0.0263969972790375, 0.0577756818648552, 0.0825681647834949, 0.0891611742760877, 0.0671870800030736, 0.0147387617092105, -0.0538929265812549, -0.106284775121074, -0.103857203679983, -0.0302129093767679, 0.0784787946429683, 0.135364107216484, 0.0673963249518451, -0.0856603407923177, -0.155243734211653, -0.0189603444292312, 0.167611407480361, 0.0908151252678547, -0.174728246001984, -0.102663158489376, 0.230758417442158, -0.00691305818364661, -0.265987712266927, 0.339480073523649, -0.249076594433047, -6.54911571044283e-255, -0.00120892001393232, -0.00468212708085671, -0.011032685847883, -0.0205640807744361, -0.0330715607134138, -0.0475158843763997, -0.0616580298664054, -0.0718334001443299, -0.0731670102568106, -0.0606164159119777, -0.0311384947460893, 0.0131840961416003, 0.0621855863209328, 0.0972340778115807, 0.0965337204257506, 0.0476748626440979, -0.0364269475133119, -0.110406826629173, -0.114779315409879, -0.0244852713460595, 0.102350360962483, 0.140681077330769, 0.019217972605942, -0.145606854353689, -0.121213363731749, 0.105485261575814, 0.174342803460852, -0.101014503270331, -0.191759713192741, 0.188490181451918, 0.103004023053906, -0.330575051261167, 0.338078947242608, 0.0170734268961571, 0.0295720428434572, 0.0379909346149481, 0.0440692338370612, 0.0474832060697478, 0.0470915816454873, 0.041290800883918, 0.0284556779613557, 0.00766780013576946, -0.0202352994486198, -0.0514830886510243, -0.0786105658686196, -0.091046163353599, -0.0781211012417015, -0.0349429222665334, 0.0303367020058008, 0.0923834696465758, 0.114585760015605, 0.069717264864946, -0.030759652032249, -0.122262635268708, -0.119161126428013, 0.00274755271729163, 0.139555026745866, 0.123388988276926, -0.0658261092525018, -0.182089999741035, -0.00412259021950588, 0.209837190868852, 0.0138122581291103, -0.249464958531277, 0.0957157247546869, 0.237434184541333, -0.402249088736535, 1.56525063658745e-255, -0.00118607660346162, -0.00459365493253311, -0.0108282713877422, -0.02020770161839, -0.0325879584875416, -0.0470696911937945, -0.0616587127084879, -0.0730271735686825, -0.076626494642336, -0.0674867543987697, -0.0419952848326156, -0.000625483212834493, 0.049146297251548, 0.0915664241254062, 0.105645076501964, 0.0745825548028129, 0.000133177237747365, -0.0861383576675974, -0.128738609864413, -0.0818572312077176, 0.040458980229754, 0.14281466708817, 0.110631707055383, -0.0553731618906176, -0.173993003819006, -0.0592697761164335, 0.168150436676269, 0.132809961920428, -0.17089516607253, -0.155402367275466, 0.244095126903594, 0.0789322445914243, -0.424766296801629, 0.0177856158974141, 0.030805590378226, 0.0395935709424297, 0.0460134582785305, 0.0498216618335304, 0.0499594006955815, 0.0448926890239106, 0.0329996467688949, 0.013205188930411, -0.0140873585758127, -0.0458979127824577, -0.0758188174078909, -0.0941680015888016, -0.0901027960769593, -0.056324428376638, 0.00430405189034143, 0.0732985360906538, 0.117836063624213, 0.10433435009226, 0.0237126533590703, -0.0855926446345754, -0.14356655828945, -0.0835388471470178, 0.0672875565131517, 0.166552771972772, 0.0781953015063327, -0.128791188482134, -0.175799447466873, 0.0598393872478845, 0.227237894366133, -0.032605232237125, -0.2786055147882, 0.0993086599367693, 0.404105701888409, -4.93983854916221e-255, 0.00118099163033287, 0.00457396091628954, 0.0107860244429798, 0.0201542147079618, 0.0325938452584435, 0.0473341532904222, 0.0626024634183503, 0.0753758228788466, 0.0814068881847628, 0.075810033315134, 0.0544872615622203, 0.0164621565343675, -0.03334546562455, -0.0822293102934708, -0.110871036039712, -0.099786535672981, -0.0412546601308474, 0.047784883720724, 0.122294643829647, 0.127276149193807, 0.0390495967322497, -0.094138535796009, -0.160198291082882, -0.0725804547805534, 0.109946271671378, 0.182657342752342, 0.0147118757000213, -0.203382530439689, -0.119652261403936, 0.201518578991914, 0.191960221505243, -0.249296203383269, -0.351281750627698, 0.0186937073442505, 0.0323784509020653, 0.0416347782903569, 0.0484790672585814, 0.0527583470058159, 0.0535045439290941, 0.0492627877501832, 0.0384276176802918, 0.0197848373931604, -0.00667912954795527, -0.0387773900934566, -0.0712305638933079, -0.0954670536835367, -0.100924592831532, -0.0785565683787168, -0.0264474756007854, 0.0442746624376711, 0.107278016014213, 0.127860732451706, 0.0814693483245231, -0.0218704433026906, -0.125148314134693, -0.147291000737393, -0.047057596512398, 0.112157179539316, 0.17770437222992, 0.0485453015260324, -0.162482126716197, -0.182940167889944, 0.0712537611278917, 0.260005571535035, 0.0285231612584462, -0.34041206587469, -0.282001479100733, 7.24084926319224e-255, 0.00116971399335856, 0.00453028281610348, 0.0106873466577248, 0.0199960541561494, 0.0324333572150896, 0.0473659017417781, 0.0632630895404616, 0.0774480877113004, 0.086050185792302, 0.0843927421969101, 0.0680687592004357, 0.0348341808398905, -0.0129112250034944, -0.0659223338693048, -0.107812060068224, -0.118669199450572, -0.083758229243242, -0.00558427290998868, 0.0870888220101377, 0.143537658722167, 0.116545633740443, 0.00297370481836367, -0.12919539989564, -0.16807624919209, -0.0515822402903076, 0.136886183313018, 0.197420635434355, 0.0198873222380585, -0.217818050164555, -0.185679517032225, 0.145696096631018, 0.365519200985042, 0.210445260327881, 0.0197004234706035, 0.0341221343817076, 0.0438985317333165, 0.0512175311917241, 0.0560314509349062, 0.0574813885094697, 0.0542158868395592, 0.0446765653601019, 0.0275449808671885, 0.00242006765495847, -0.0293075455893228, -0.063580617453943, -0.0932198262277512, -0.108522570410258, -0.09958710439839, -0.0606303284131545, 0.00451312492753639, 0.078224409409184, 0.130356366208314, 0.128787251566322, 0.0590906291539115, -0.055296392061937, -0.149889488028331, -0.149858211094069, -0.0307392460901031, 0.132693406655218, 0.194353026300853, 0.064001411157616, -0.160582701067574, -0.233673770629764, -0.0234925517852963, 0.274999032462635, 0.336389944872068, 0.146468167088152, 5.43389358500484e-255, -0.0011497871362461, -0.00445310643036468, -0.0105096975113353, -0.0196904662967667, -0.0320350529679937, -0.0470548777358107, -0.0634806801821011, -0.0790232674177923, -0.09026976737328, -0.0928968894950597, -0.0824134731586455, -0.0555889769428665, -0.0125090993223837, 0.0412268189362414, 0.0932412385378789, 0.125621578306804, 0.120139551495529, 0.0675394400672791, -0.0219910441377543, -0.113798385502428, -0.157566353935216, -0.113877393173308, 0.0106172597695232, 0.145331566142607, 0.185572742839407, 0.0733316554445305, -0.124600583786828, -0.233308724617009, -0.118313381578538, 0.150841109658697, 0.33258053326151, 0.274455550969624, 0.0951662382454216, 0.0208685390355986, 0.0361453698893912, 0.0465251888437523, 0.0543948710696644, 0.059829137690055, 0.0620981806125991, 0.0599804328442865, 0.0520003016584872, 0.0367812713307341, 0.0135864631146769, -0.0169549760551772, -0.0520481415672667, -0.086132632143416, -0.110935420942817, -0.116733172126937, -0.095247160102916, -0.0440312824453235, 0.0288672406995241, 0.102553955770248, 0.146654927229542, 0.132791544586718, 0.0524374238147832, -0.0673369902920338, -0.164348690529816, -0.169443277063693, -0.0567674319883491, 0.115907175606112, 0.222655624081953, 0.157627810558484, -0.0598445349650994, -0.273324361227866, -0.321921763445542, -0.201681006740097, -0.0576847473992658, -2.65914962109978e-255, -0.00112033887418864, -0.00433905380184137, -0.0102449868342332, -0.0192215787882805, -0.0313705221565617, -0.0463522353936076, -0.0631730636267316, -0.0799668104369088, -0.0938557180487521, -0.10102145782457, -0.0971504357360413, -0.0784050256927333, -0.0429649539861222, 0.00706457684560154, 0.0639737652197399, 0.114034372433617, 0.139620994592106, 0.124754614762723, 0.0635538046779632, -0.0313529594525774, -0.125951686472302, -0.173560546860271, -0.137140677672036, -0.0176468313838942, 0.130135195206521, 0.215149328771862, 0.164910200573329, -0.0126737496663654, -0.215833536264569, -0.31651221091162, -0.265928594064033, -0.134488022951979, -0.0325533686724626, -0.0222926036415305, -0.0386119221401258, -0.0497263320055083, -0.0582622062189968, -0.0644383938779307, -0.0676775328715176, -0.0669187860097694, -0.0608125685462679, -0.047984566696976, -0.0274396004665862, 0.000875880458502231, 0.0354025134868362, 0.0723409638054937, 0.105351190082305, 0.125973076592605, 0.125175452620255, 0.0962320107352539, 0.0385863997316158, -0.038488468761362, -0.114548802190088, -0.161431210556718, -0.152926010625844, -0.0790482854410232, 0.0412228189494157, 0.158301208831008, 0.209254778277152, 0.151817301291602, -0.00238599075482088, -0.182318479842043, -0.295321321423931, -0.289765182676551, -0.192459108545823, -0.0816028464392796, -0.0170465904303397, 8.89222933754759e-256, -0.0010785816482637, -0.00417732876125025, -0.0098675840031103, -0.0185404570628757, -0.0303568331585219, -0.045126954821515, -0.0621420550597336, -0.0799881660987314, -0.0963954506022832, -0.108207384516814, -0.11158298258763, -0.102554193927004, -0.0780228061717612, -0.0371660133926395, 0.0169921987709755, 0.0763765227519522, 0.127831519265008, 0.155154387862581, 0.143700637599464, 0.0870486718107104, -0.00638619195150672, -0.110446767172589, -0.185983409927293, -0.194868467575783, -0.119578601547264, 0.0215614839358357, 0.175678460337154, 0.278758733454499, 0.291399566540139, 0.223035779133256, 0.123417065140767, 0.0450210757200682, 0.00824313171295403, -0.0241373927090846, -0.0418071905343772, -0.0538707862497714, -0.0632577158089873, -0.0703611712902651, -0.0747860483364597, -0.075670675681643, -0.0718461346194088, -0.0620198742051785, -0.0450494128653186, -0.0203342306331664, 0.0116837496139835, 0.0489768376647865, 0.0874877982318575, 0.121011953260873, 0.141689016672575, 0.141363606820619, 0.113898449709627, 0.0581522879597551, -0.0192047118685285, -0.102399949723234, -0.168341815220163, -0.192438263792503, -0.157778813284806, -0.0646270004004264, 0.0647974200505101, 0.190999582833634, 0.27222306475436, 0.283980418922293, 0.23185963985292, 0.147795586818942, 0.0703496443214295, 0.0224994704949566, 0.00365638522980911, -1.98998975867402e-256, -0.00101897905994508, -0.00394648892930137, -0.00932664418938427, -0.0175503911581326, -0.0288313705192461, -0.0431254389820692, -0.060010723236152, -0.0785450529092397, -0.0971291651757937, -0.113421589857311, -0.124370364618034, -0.126440450821385, -0.116112301109272, -0.0906912581974776, -0.0493847277396137, 0.00553072956324607, 0.0677992527929633, 0.127027809236435, 0.169807348986498, 0.182435390220358, 0.155039251389698, 0.0861046138867455, -0.0143795014475946, -0.125235211285624, -0.219169547396863, -0.271873731322977, -0.271768537341652, -0.225361927258612, -0.154343846521432, -0.0849581998874066, -0.0355482320942711, -0.0101128456210518, -0.00147394489873385, 0.0267665710769287, 0.0463610610496441, 0.0597724117272256, 0.0703475945285951, 0.0787022364081061, 0.0846659097151618, 0.0876279602685137, 0.0866730670752685, 0.0806985182492933, 0.0685729740480913, 0.0493649285165278, 0.0226501589845632, -0.0111165582270127, -0.0502142550627331, -0.091344682406609, -0.129531839862366, -0.158392177271467, -0.170917766056339, -0.16082547551725, -0.124347811852244, -0.0620918932738396, 0.0196571297800515, 0.108931789776349, 0.189950536531008, 0.246868064707611, 0.268535098754328, 0.252539934974789, 0.206538122064416, 0.145688622258108, 0.0868595108382069, 0.0422529576120822, 0.0157878678087645, 0.00404110932355034, 0.000532906231080504, -2.76536617978736e-257, 0.000929462251594309, 0.00359979182135321, 0.00851139530991954, 0.0160410789093071, 0.0264419079260026, 0.0398020234772057, 0.0559754648741611, 0.0744931654800797, 0.094465601640512, 0.114495509431977, 0.132627901146329, 0.146373179529724, 0.152844012213464, 0.149042839805101, 0.132318625705137, 0.100973835982674, 0.054944967399265, -0.0035900046498609, -0.0698860237721507, -0.136817459202251, -0.19574918795941, -0.238100417649289, -0.257348837818825, -0.250937770287523, -0.221375523568003, -0.175910855868981, -0.124614639137256, -0.0773950715468088, -0.0410967391927406, -0.0179551606466629, -0.00606365707305607, -0.00140957592285172, -0.000169449705056967, 0.0312733070096984, 0.0541669566614975, 0.0698770653658281, 0.0824327216241663, 0.0927705357613027, 0.101019375224689, 0.106901736524128, 0.109865334860347, 0.109156675231493, 0.103893151362795, 0.0931569047437281, 0.0761220096914253, 0.052218233351826, 0.0213246704987324, -0.0160264307043508, -0.0584706816809212, -0.10370728501426, -0.148528447187659, -0.189037489995674, -0.221086195238044, -0.240912587437806, -0.245889892737462, -0.235222059562141, -0.210370777436831, -0.175010194694533, -0.134405982816578, -0.0943000887044449, -0.0595960105276389, -0.0332809265163921, -0.0159868887638049, -0.00634896904029747, -0.00195644378141253, -0.000416267942857787, -4.591411353042e-05, 2.38720369474849e-258, 0.000773507630113967, 0.00299578216959576, 0.00708678009876696, 0.0133774287198307, 0.0221284012561496, 0.0335242814007712, 0.0476535425156417, 0.0644783743463995, 0.0837976224459001, 0.10520716381753, 0.128063978155771, 0.151462490436527, 0.174233871858683, 0.194980056289907, 0.212153168185108, 0.224186681421041, 0.229676027674979, 0.227593499390753, 0.217506664934283, 0.199754785536689, 0.175529665473882, 0.146812736504616, 0.116144145658911, 0.0862420596268631, 0.0595424627280034, 0.0377731355056351, 0.0216873001375922, 0.0110458551161558, 0.00485508027444893, 0.00176906379417671, 0.000501302139730205, 9.82685884771036e-05, 1.0001624968227e-05, -0.04473183342645, -0.0774778082103191, -0.100008764853542, -0.11826260414539, -0.133900658344552, -0.147598821408043, -0.159633775166292, -0.170067091636111, -0.178822362959854, -0.185726920975767, -0.190542117837367, -0.192992190013559, -0.192796438444458, -0.189706663831108, -0.183549602254927, -0.174271886655358, -0.161982725349178, -0.146987304229567, -0.129802443707769, -0.11114604439565, -0.0918941285425757, -0.0730043165295902, -0.0554121330966666, -0.039915272143338, -0.0270683108855125, -0.0171130623404602, -0.00996493943421404, -0.00526265138582915, -0.00247011809601739, -0.00100218794427347, -0.000337563977004435, -8.85347148443646e-05, -1.60802450668156e-05, -1.51774772272302e-06).finished();
}
} // namespace mrcpp
} // namespace detail
