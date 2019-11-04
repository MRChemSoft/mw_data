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
auto get_I_G0_30() noexcept -> Eigen::Matrix<double, 31, 31> {
  return (Eigen::Matrix<double, 31, 31>() << -0.136499658998979, 0.210119795599535, -0.117573303203082, -0.0704348667307839, 0.20165584236044, -0.163920955089417, -0.0159668792423878, 0.182316252622535, -0.179177946129859, 0.00112455783576422, 0.17852914, -0.165003876825154, -0.0380276172100404, 0.193771801908853, -0.0950638757093137, -0.135672751130526, 0.157738100188554, 0.0768919497325412, -0.168595925590792, -0.0627651388180742, 0.152124605656826, 0.0995195025979618, -0.0919391425182976, -0.146016121734506, -0.0421547415542989, 0.0760805169636967, 0.11875443085761, 0.0955483090310206, 0.0516395737322289, 0.0177366324315781, 0.00223632079101439, -0.127755727980844, 0.210032212525149, -0.149207933819841, -0.0161162202794404, 0.171100642479363, -0.201971822734244, 0.0803333756977907, 0.105314267781825, -0.205637098117613, 0.128783353364637, 0.0662696595042888, -0.197863446449053, 0.124642116338959, 0.0871787517244135, -0.193943062673798, 0.049136180096017, 0.162444275730633, -0.122594140059106, -0.11851894952161, 0.136609985073188, 0.112766741123361, -0.105386594085709, -0.141876878655923, 0.0115875268827005, 0.129244989688827, 0.112920680763373, 0.0264821522613681, -0.0463896799095667, -0.0760318550401385, -0.0719565258890691, -0.0487076729804979, -0.118609423742844, 0.20667879577292, -0.175213382902659, 0.0393224473396258, 0.121644726291903, -0.207647252659564, 0.159083202874842, -0.00164254685673937, -0.158583416127684, 0.200172794479195, -0.0805822884805917, -0.109674204647125, 0.199385768861401, -0.0893344921970331, -0.118162078351208, 0.18480428093655, -0.0114839566181706, -0.175186866225763, 0.0850174748427182, 0.146308599247954, -0.0932900833527882, -0.145542626574537, 0.0412539755601528, 0.149310252898524, 0.0703617066903129, -0.0580068392756447, -0.115836240376079, -0.0987607968654804, -0.0544905193094883, -0.0188385837063616, -0.00237818288886283, -0.109091204022215, 0.200114530189418, -0.194610846884411, 0.0920302155201217, 0.058752692507265, -0.180039907212234, 0.203079241781631, -0.108132892988775, -0.0548394229160939, 0.184101921716639, -0.185373475683301, 0.0456111289054796, 0.133477476673662, -0.194201285970678, 0.0640326413098735, 0.135647810521042, -0.172784926973525, -0.0178684668967444, 0.178474522904116, -0.0471361494493708, -0.161441591354131, 0.0418283222449708, 0.156615980937127, 0.0308452616977274, -0.11388989528037, -0.122206132956286, -0.0392507407920207, 0.0395522416649872, 0.0739893956580484, 0.0716685437697208, 0.0487010697476132, -0.0992323158221554, 0.190443942014806, -0.20667118509296, 0.13834724207786, -0.0106284056105223, -0.123576645665236, 0.2027117870803, -0.183870267574091, 0.0685083215204755, 0.0875939700380796, -0.19340736626855, 0.172994457238468, -0.0265891232745221, -0.143317686655965, 0.188562830253547, -0.0491712234227399, -0.144083580498882, 0.160861261708823, 0.0408438125979213, -0.175135483979961, 0.00905783300175005, 0.163810381596254, 0.0146977350977799, -0.140544967446248, -0.0952181216833074, 0.038446587075597, 0.111510288931883, 0.101499913672022, 0.057264821726716, 0.0199361625351904, 0.00252000924553192, 0.0890648113837914, -0.177819586843316, 0.210942398377208, -0.175059007560168, 0.0788369636088253, 0.0473074528385384, -0.158062081082539, 0.207315273013801, -0.167366708122594, 0.047183613144429, 0.100492909072761, -0.194550016546506, 0.167901878106007, -0.0225085721873875, -0.14328064403846, 0.184813421973892, -0.0430574921180038, -0.146848957737805, 0.149673453515485, 0.0599670858467175, -0.166167042291971, -0.029710210489113, 0.151367209794964, 0.0707865867779796, -0.0931085619469176, -0.128361624573078, -0.0515419223854135, 0.0325243866689269, 0.0718432526258544, 0.0713633862144703, 0.0486941276721875, 0.0786218980005878, -0.162440584389605, 0.207267879260909, -0.199621139268904, 0.138345297561269, -0.0365485225761269, -0.0788799023109529, 0.171796329107924, -0.206393278762655, 0.161339483302121, -0.0448654693484608, -0.0970993869780098, 0.190785724376433, -0.170293431407886, 0.0310427898618096, 0.135615446318802, -0.182842101220586, 0.0431083299727621, 0.146405598432876, -0.138471921146103, -0.0776327413118248, 0.150828502175959, 0.0687827544136854, -0.120435084652477, -0.115533270634061, 0.0178953429167441, 0.105833815668262, 0.103748804222759, 0.0599613334695041, 0.0210273524178037, 0.002662567470163, 0.0679396675892269, -0.14455360022323, 0.195798420011815, -0.210344117521502, 0.182600997207029, -0.114573627187587, 0.0175610022589606, 0.0873901970562338, -0.171611621466383, 0.204970257900553, -0.166767116539107, 0.0597085665212573, 0.0791341589558895, -0.181551662512283, 0.177458132436331, -0.0492570497543004, -0.121521366941645, 0.181369231146853, -0.0463816504087119, -0.144694445936774, 0.12570306317916, 0.0955410044527755, -0.126759164459423, -0.105047001693709, 0.067923154308028, 0.131201762070451, 0.0632295660568091, -0.0253582892476267, -0.0695830329405842, -0.0710499638422169, -0.0486831651000991, 0.0570636892046498, -0.124464168818171, 0.177009663864669, -0.206541074638894, 0.206787686075221, -0.174345345010473, 0.110285055531418, -0.0219973438892049, -0.0753499781414152, 0.158903575840843, -0.201469900587663, 0.179824489368951, -0.0881628603087354, -0.0473923009587458, 0.164254859013362, -0.185058992089049, 0.0736149275820278, 0.102136089172057, -0.178942205133047, 0.0498124248481683, 0.143386758847813, -0.10926082365195, -0.113929815916437, 0.0904535039003017, 0.130476687762964, 0.00300487583027673, -0.0987818173980945, -0.105575260462649, -0.0625214707732984, -0.0221482978750667, -0.00279025292313705, 0.0460704704923577, -0.102581015274397, 0.151759602224571, -0.188675333453869, 0.208478462150261, -0.206567057518202, 0.179350942492997, -0.125593779685553, 0.0483337664361153, 0.0429064334446295, -0.13049555900663, 0.189395164738764, -0.192706071028436, 0.124178670386317, 0.00376543912120332, -0.136445460366311, 0.188465029857131, -0.100109793065071, -0.0792272616825737, 0.17460960401815, -0.0503433126253423, -0.143804813304378, 0.0865540355251019, 0.130337996365668, -0.0390602701482096, -0.131086743576105, -0.0738443679989846, 0.0178211893969674, 0.067422141443415, 0.0706137946195694, 0.0487319941743931, -0.0351249073281651, 0.0795416634650624, -0.121461602500354, 0.158604637889467, -0.188247063322665, 0.206960939747956, -0.210659940788018, 0.194997858061043, -0.15632698096011, 0.0934416906849282, -0.0101800068229927, -0.081546657065139, 0.159776240953442, -0.194597621150906, 0.158460962122244, -0.0468207154818017, -0.0980284885737285, 0.184410276857181, -0.124942949029693, -0.055361033212291, 0.16822751574035, -0.0449821585706712, -0.146415852232082, 0.0547421642266015, 0.138006164648871, 0.0250117127706446, -0.091573203647103, -0.106251557818456, -0.0656159049320817, -0.022934581289293, -0.00307515886053357, -0.0245888195341607, 0.0564549400233425, -0.0884323831225141, 0.12000889328724, -0.150323592597973, 0.177839824941607, -0.200088561492813, 0.213465074386228, -0.213209112204553, 0.193822178661026, -0.150310918344494, 0.0807016183456949, 0.00999155763285977, -0.105166633762114, 0.174399388169928, -0.179545860399467, 0.0959818945068005, 0.0526547167871631, -0.172617435911207, 0.145619096266003, 0.0336421237885116, -0.160403250991453, 0.0308066635144222, 0.149804454482567, -0.0118283428949882, -0.125152735182585, -0.08644062433787, 0.0121928641458218, 0.0640030096503044, 0.07138797313198, 0.048593164910033, -0.0151132976228751, 0.0351061073252124, -0.0561754081517339, 0.0786840399918837, -0.102897307387375, 0.128780038067451, -0.15576842755601, 0.182449781545142, -0.206151080121343, 0.222508069908979, -0.225227707976646, 0.206497335757731, -0.158801632479925, 0.0790645292429798, 0.0245665961929419, -0.125402064501399, 0.177508127710158, -0.134116688461665, -0.00709266603187358, 0.156387563004907, -0.161741559872585, -0.0173861184115803, 0.151980028224082, -0.00500986419502562, -0.149003366936242, -0.0402795862130753, 0.0785414788820637, 0.112384424620525, 0.0662562357178956, 0.0261591302526342, 0.00248751239322325, -0.00752196812439476, 0.0176735926982025, -0.0288714018746402, 0.0416755641327582, -0.0567182911023194, 0.0746486163221525, -0.0960527123370582, 0.121288910164336, -0.150182763541727, 0.181522406671894, -0.212321102562964, 0.236926612527138, -0.246342703999586, 0.228672596384591, -0.172324655963111, 0.0739079936462717, 0.0491784680699827, -0.148349444938079, 0.154397458319412, -0.0315230805181055, -0.141336990855679, 0.174520270126508, 0.0100384091115133, -0.142544235511745, -0.0345081815117595, 0.1335416538649, 0.089428161760461, 0.00289956674741383, -0.0690226348084209, -0.069946589006713, -0.0517906519369535, -0.00240112650668491, 0.00575241067984006, -0.00972192855577663, 0.0147103491643412, -0.0212285864372552, 0.0299261359599763, -0.041621338368733, 0.0573081659364405, -0.0781012831376759, 0.105049705734566, -0.138705343003381, 0.178292371619541, -0.22034362506098, 0.256889686045193, -0.273952877302208, 0.25245489388602, -0.175366046542059, 0.0447363131162498, 0.0954595202379598, -0.155330127875032, 0.0583776185812004, 0.133139009042474, -0.184849584776921, -0.0150908872869651, 0.127692287951414, 0.086043980360092, -0.0887018132233145, -0.106131084224527, -0.0829594424824468, -0.0227682095118005, -0.00553243354233203, 0.000295263887074137, -0.000597662982441139, 0.000695314725238983, -0.000420528082180228, -0.000464834997401331, 0.00231276737460473, -0.00564666475657854, 0.0112363590561554, -0.0201865223686594, 0.0340170383702916, -0.0546759565258965, 0.0843530015678545, -0.124845475229312, 0.176097555889205, -0.233536460793403, 0.284371492847568, -0.304841359905472, 0.264006622616663, -0.143004693615255, -0.0275177360873685, 0.14039700190073, -0.0715402914749639, -0.136171179491558, 0.191195813441247, 0.0348728879782657, -0.0968675232001646, -0.136168720541812, 0.00943505805743476, 0.0554284986649519, 0.0860406175601345, 0.0519010300984768, -0.00121270435584707, 0.00279382205816799, -0.0044037083731316, 0.00603109345888034, -0.00764473832109141, 0.00916750446007696, -0.0104406665864987, 0.0111660097417192, -0.0108134823438707, 0.00848083389574782, -0.00269737646750368, -0.00880913886135257, 0.0292873272453441, -0.0628126023228176, 0.113241923261802, -0.181334264016037, 0.259142469976721, -0.322577057609773, 0.328701591916324, -0.233433197377067, 0.0448486192040992, 0.116288036968421, -0.0709309406624295, -0.153173170670467, 0.188115281399684, 0.0668351269049997, -0.0364741653030167, -0.15193645124488, -0.0698936122879267, -0.0429772412818214, 0.000657779226827297, -0.00117880546326533, 0.00274290757125209, -0.00440570799569175, 0.00621451526334785, -0.00822491626083902, 0.0104934407436229, -0.0130690314307423, 0.0159742397537748, -0.0191658842018134, 0.0224577396645805, -0.02537693121259, 0.0269135502468035, -0.0251209892517488, 0.0165672292890342, 0.00419366226823695, -0.0445213859373622, 0.11151771474416, -0.205427231374767, 0.307126989328129, -0.365512082936487, 0.308274032449356, -0.111840449973278, -0.0908859279370943, 0.0566276164821165, 0.184342806901643, -0.165519739704561, -0.0968450220791257, -0.0548725228888567, 0.0950333111673154, 0.0715488844114435, 0.0685107996806903, -0.000824185158472563, 0.00192350836421218, -0.00310724400484945, 0.00442252995419291, -0.00593091662836533, 0.00770980475390985, -0.00985731023325109, 0.0124969766125455, -0.015779150931063, 0.0198717468606276, -0.0249241811537032, 0.0309709254097535, -0.0377110860639045, 0.0440583326025342, -0.0473260048577535, 0.041993068054561, -0.0184459898339566, -0.0366301361592317, 0.134199917254724, -0.265717163370591, 0.377007512067736, -0.365029061410503, 0.165808491296085, 0.0712205936197827, -0.0267881689825113, -0.224393215574022, 0.111427920091279, 0.0936614447335169, 0.138043966867292, 0.0159892474340761, 0.0146429778350325, -0.000476105591537171, 0.00111128353996823, -0.00179586466825754, 0.00255851071960437, -0.00343815822484295, 0.00448675320970251, -0.00577566922467562, 0.00740525252373013, -0.00951839612495865, 0.0123187355839696, -0.0160919425597753, 0.021221927491529, -0.0281763460933018, 0.0373957242137477, -0.0489402928849361, 0.0616204895754738, -0.0712299665301093, 0.067746396353103, -0.032873562836771, -0.0565677476086878, 0.208159571462525, -0.370267053154027, 0.405480408193684, -0.201031498485017, -0.0612720097047549, -0.0237242638492716, 0.256774279815592, -0.0251142153402223, -0.0231342590965268, -0.12934149414432, -0.0564544678366872, -0.000238219768963502, 0.000555001467376308, -0.00089396224799592, 0.00126777662147833, -0.00169403666071683, 0.00219671500040821, -0.0028098192867606, 0.00358343203618134, -0.00459362729542183, 0.00595878891225603, -0.00786619268434723, 0.0106139374670069, -0.0146723857119849, 0.0207597244150671, -0.029890882769889, 0.0432596961663826, -0.0615881453806813, 0.0831940227237522, -0.0997776199971877, 0.0901865064862481, -0.0184839733295727, -0.144527603845719, 0.355020717518915, -0.433836403543405, 0.212525962756108, 0.0588691249599256, 0.100827653445042, -0.248496144089451, -0.0566044213157879, -0.0901553923960472, 0.0125672858705808, 0.00010540037216006, -0.000244694042211501, 0.000391607260320968, -0.000550119200540055, 0.000725824997451844, -0.000926263946414213, 0.0011621122356011, -0.0014493279194077, 0.00181301385763149, -0.00229452860361299, 0.00296479074923416, -0.00394933126970862, 0.00547512014296199, -0.00795564093590622, 0.0121357364826211, -0.0193052152812551, 0.031507482291004, -0.0513858751180288, 0.0806106177924167, -0.114729604687844, 0.132459121836122, -0.085144080249041, -0.0838980156326215, 0.342343159454831, -0.454114238015533, 0.194987632871487, 0.0510130968882242, 0.198692079713142, -0.162571184910898, -0.053977049631844, -0.106573542728218, -4.16286536219865e-05, 9.61513824158571e-05, -0.000152429956598308, 0.000211081063832389, -0.000272988327998539, 0.000339183506676012, -0.000410929904201108, 0.000489950345545277, -0.000578960677382668, 0.00068291577850993, -0.000811925405744025, 0.000988064404227502, -0.00126116992015137, 0.00174497114925231, -0.00269759279733016, 0.00469275067359034, -0.00895417622454251, 0.0179067959147925, -0.035744597796061, 0.0678398123122778, -0.115497773111176, 0.160327526628583, -0.140885583908811, -0.0342184787098051, 0.343817380552867, -0.466304857488173, 0.144374768171176, 0.010599496624975, 0.273759868475846, -0.0170918651820887, 0.0421220738693148, 1.47233584068014e-05, -3.37818182912697e-05, 5.28884311548112e-05, -7.18268859227669e-05, 9.03069626517457e-05, -0.000107805240240441, 0.000123403679649357, -0.000135546426261024, 0.000141663588512512, -0.000137606709926351, 0.000116871071917594, -6.97526535628472e-05, -1.67813676012235e-05, 0.000155749843046569, -0.000344902895807462, 0.000516063559276568, -0.000389573223890399, -0.00089789434730197, 0.00561673855924492, -0.0188548404638571, 0.0495672927369234, -0.106434566922572, 0.177026024452493, -0.185776891367289, -0.0034591461400173, 0.370486245215063, -0.460924790533576, 0.0671207169004628, -0.0902249719698797, 0.23448409602411, 0.0512127461248563, 4.65718080734243e-06, -1.0598422296694e-05, 1.63345698828816e-05, -2.16341318758621e-05, 2.61842625868811e-05, -2.950061366537e-05, 3.08114456432515e-05, -2.88691634799908e-05, 2.16308427858033e-05, -5.70500997977999e-06, -2.46196131663681e-05, 7.90873201642956e-05, -0.000174464025199052, 0.000339534675651622, -0.000622545626192367, 0.00109877172915607, -0.00186408722209727, 0.00296064291652693, -0.00406942370691732, 0.00356463572657907, 0.00372496103085744, -0.0298506852272048, 0.092274901155243, -0.187416462198631, 0.221001548958978, 0.00218151914972084, -0.429433778157389, 0.413973136470649, -0.00047157399508765, 0.219566331141338, -0.0506857671351814, -1.31033241233546e-06, 2.95297148870299e-06, -4.46541183797922e-06, 5.73109077866905e-06, -6.59540503787254e-06, 6.83082603054987e-06, -6.08950956802704e-06, 3.82570353686903e-06, 8.37626330676711e-07, -9.34651575823688e-06, 2.41544273474531e-05, -4.95576607452487e-05, 9.33341820845119e-05, -0.000170028823511696, 0.00030759002263484, -0.0005605441066279, 0.00103443636181223, -0.00192313188247076, 0.00353150335557161, -0.00612971538374929, 0.00909247547312299, -0.00799242590293061, -0.0116301677067235, 0.0774627966320691, -0.197138431090646, 0.246210031627013, 0.0471262446583964, -0.513162483438142, 0.29364213569554, -0.0201399130867269, 0.204918425655101, 3.24565446840327e-07, -7.23168924878165e-07, 1.06910101433264e-06, -1.31986917090593e-06, 1.42082950536407e-06, -1.29529019647646e-06, 8.31296416414922e-07, 1.39333454255398e-07, -1.87614717563658e-06, 4.79181878991967e-06, -9.56627543214285e-06, 1.73693056491587e-05, -3.03198685823465e-05, 5.24869210296469e-05, -9.21766755463599e-05, 0.000167343692719297, -0.000318569945940734, 0.000639617863112626, -0.00134408802720662, 0.00288327100335876, -0.00602882204503122, 0.0113264439396578, -0.0158176770762139, 0.00331539685966364, 0.0659670913082986, -0.211746985292543, 0.254555263640883, 0.16279369518119, -0.575551866918955, 0.106883142393676, -0.128027079899629, 6.95551251975875e-08, -1.52969170420776e-07, 2.20224640171889e-07, -2.59231075010684e-07, 2.55106640892888e-07, -1.88176823175002e-07, 3.15736377164833e-08, 2.52166374359075e-07, -7.1615712292345e-07, 1.43702486704656e-06, -2.52794330461226e-06, 4.16237233750229e-06, -6.62301527742855e-06, 1.0417576726277e-05, -1.65874576781931e-05, 2.7604157224778e-05, -5.00998223629951e-05, 0.000103308437357735, -0.000244701662725594, 0.000643321131368195, -0.00176311559125394, 0.00469009195589398, -0.0111087736674844, 0.0200552617942565, -0.0140561662262453, -0.0614991741278645, 0.234941229311462, -0.223476692791929, -0.368825812561244, 0.503998247441615, 0.016826670152547, 1.25175669625314e-08, -2.71258227864653e-08, 3.78674805510175e-08, -4.20431346559358e-08, 3.65231247516443e-08, -1.75035701607768e-08, -1.96736205883773e-08, 8.0607217316717e-08, -1.71661771045174e-07, 2.99134200406134e-07, -4.66868922822559e-07, 6.70358372463953e-07, -8.83123969567424e-07, 1.02681883756428e-06, -9.09692447727456e-07, 1.15771094590343e-07, 2.12260769118077e-06, -6.69565784013914e-06, 1.20116845669269e-05, -2.37152592064193e-07, -0.000120195639701491, 0.000713702779209825, -0.00294131867441044, 0.00939046083449922, -0.0213166388904036, 0.0199501544165601, 0.0676407204138459, -0.263402643527548, 0.101263860991795, 0.617364584577921, -0.183577276942728, 1.78729362442274e-09, -3.8094942344372e-09, 5.13218537681617e-09, -5.30112529319378e-09, 3.83099917959837e-09, -2.03247668856356e-10, -6.09604072463817e-09, 1.54650080674991e-08, -2.79195368666342e-08, 4.24935089836579e-08, -5.59153916619373e-08, 5.96833894329362e-08, -3.35108143673565e-08, -6.96763620663082e-08, 3.5890135703535e-07, -1.089240432235e-06, 2.86451353322733e-06, -7.11465869631736e-06, 1.71159585165729e-05, -3.95207907713209e-05, 8.28037879782718e-05, -0.000128913383117005, -2.69985965533394e-05, 0.00137889335499955, -0.00695629986112674, 0.0199776875594369, -0.0200211654155142, -0.0859729546955451, 0.274038990806239, 0.194492510032504, -0.615494657557282, 1.7565155414564e-10, -3.67550616233175e-10, 4.75306275303048e-10, -4.48524377582393e-10, 2.39176113195456e-10, 1.9373614778229e-10, -8.71676916479537e-10, 1.76977305144654e-09, -2.76162931016743e-09, 3.50662893639011e-09, -3.21768696528295e-09, 1.72204689329643e-10, 9.35167886085871e-09, -3.34891581052456e-08, 9.05542032842813e-08, -2.23613862324329e-07, 5.3950151739646e-07, -1.3185417664129e-06, 3.3324460174033e-06, -8.75731190145418e-06, 2.35781203951837e-05, -6.22304931844238e-05, 0.00014556636337282, -0.000217751151072845, -0.0003457957311119, 0.00421674498125425, -0.0154062595804059, 0.0130578793806645, 0.104967724254708, -0.208483933947883, -0.667150951034114).finished();
}
} // namespace mrcpp
} // namespace detail
