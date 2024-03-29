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
auto get_I_H0_39() noexcept -> Eigen::Matrix<double, 40, 40> {
  return (Eigen::Matrix<double, 40, 40>() << 0.900801512197024, 0.425242507157387, -0.0716343801167479, -0.0206978751615574, 0.0367227946675371, -0.020846677112098, -0.00035137163006523, 0.0117919442797998, -0.0102827549257888, 0.00165739726265418, 0.005454116571744, -0.00598242536753525, 0.0012128204400984, 0.00345979145291011, -0.00374114538026537, 0.000186860887955455, 0.00285103033312063, -0.0020915173271221, -0.00104311901568698, 0.00232003148332883, -0.000242612177049948, -0.00186749223120355, 0.000784025930687082, 0.00143453564967093, -0.000818392862630301, -0.00124591534764469, 0.000527572893770379, 0.00121073268131502, 4.89153284517842e-05, -0.000995066041545424, -0.000736270492955944, 0.000196595785376934, 0.000784619273639436, 0.000717485357631993, 0.000287632460759407, -0.000134333454262774, -0.000373771526531751, -0.000432716155334122, -0.000376854043245954, -0.000250629314274152, -0.21654622942086, 0.603612389002916, 0.751740627989158, 0.0776411755116462, -0.110052772370787, 0.0567682665173815, 0.000909171957754257, -0.0295857235357272, 0.0252851445907751, -0.00401921128390311, -0.013094257226579, 0.0142555570288404, -0.00287352179748765, -0.00816054532303908, 0.00879264952393911, -0.000437899863311993, -0.00666538175341605, 0.00488007901630923, 0.00242985311209573, -0.00539674420731117, 0.000563679755718869, 0.00433445484407165, -0.00181812312410383, -0.00332409015060643, 0.00189511396216631, 0.00288344164325627, -0.00122035488557729, -0.00279937228352678, -0.000113055138117304, 0.00229906648859078, 0.00170063185368623, -0.000453980750919535, -0.00181145663855573, -0.00165615820643434, -0.000663833944569709, 0.000309992081770832, 0.000862439929629246, 0.000998372896442161, 0.00086944132808656, 0.000578211212778755, 0.12975181820817, -0.241281105329699, 0.216294951932377, 0.839512357238024, 0.384843206332065, -0.134109778720195, -0.00185035862825764, 0.055744084349331, -0.0454912977224991, 0.0070159483556077, 0.0223827714165827, -0.0239994952874675, 0.00478261884606057, 0.0134629599013519, -0.0144053236490099, 0.000713438546390207, 0.0108102179175741, -0.00788513432278289, -0.00391385825485218, 0.00866990396724719, -0.000903535339369638, -0.00693455329031337, 0.00290398924856716, 0.00530187273972919, -0.00301896724727137, -0.00458849558943831, 0.00194017545578814, 0.00444695585629761, 0.00017946707123773, -0.00364735403975836, -0.00269652077752124, 0.000719497751888794, 0.00286976881244925, 0.00262285131920331, 0.00105101290591387, -0.00049067973662548, -0.00136488532139422, -0.00157979121738384, -0.00137564334468177, -0.000914806552075301, -0.0931852090341715, 0.157903886408007, -0.108394479902823, -0.0917334152891675, 0.666028505508863, 0.692894299157935, 0.00444778606226582, -0.1074634087135, 0.0789045535390825, -0.0114465567062571, -0.0351060952213357, 0.0366324059485374, -0.00715789652726494, -0.019854073228796, 0.021003180918138, -0.00103089466529715, -0.0155079231338854, 0.0112451842482834, 0.00555449669736538, -0.012254170426888, 0.0012726876789102, 0.00973926266892496, -0.00406833433929129, -0.00741167894569614, 0.00421248385334565, 0.006392194259778, -0.00269905649960967, -0.00617879714058528, -0.000249094731508067, 0.0050577387265396, 0.00373623397324997, -0.000996228529755994, -0.00397116926740091, -0.00362765488665709, -0.00145303754139717, 0.000678135584967156, 0.00188579851650772, 0.0021822728373346, 0.00190000073498285, 0.00126340702638048, 0.0726941172777212, -0.118674935321172, 0.074877367098012, 0.0525124836978703, -0.211304879203415, 0.327569390923029, 0.834078547503805, 0.300067184559261, -0.156014995863376, 0.0195867828232142, 0.055498350472506, -0.0551127358977774, 0.0104131729409761, 0.0281963770125215, -0.029297582550523, 0.00141829223874042, 0.0211048975059038, -0.0151706683716448, -0.00744028825057126, 0.0163181965069234, -0.00168644879585358, -0.0128521212009466, 0.0053497439203129, 0.00971676939195773, -0.00550827946885234, -0.0083397671996717, 0.00351457250294911, 0.00803216375188065, 0.000323338630679702, -0.00655689025312173, -0.00483835853683956, 0.00128887612182727, 0.00513355053677737, 0.00468625747828723, 0.00187597375353161, -0.00087510782309056, -0.00243264038240097, -0.00281429427636471, -0.00244980020241389, -0.00162882374360374, -0.0594926485626116, 0.0953115147528498, -0.0578386534604576, -0.0377543607563182, 0.132183157796152, -0.146137431416383, -0.00539955322775645, 0.721897068849523, 0.630067842746321, -0.0421959761702359, -0.0973299559558313, 0.0871512025480115, -0.0154767365371844, -0.0402238730810899, 0.0406036170985496, -0.00192411332558478, -0.0281690781731012, 0.0199916775849962, 0.00970504944842013, -0.021109123566484, 0.00216667125084711, 0.0164175934480093, -0.00680102221670957, -0.0123022842512863, 0.00694962361152079, 0.0104904779400379, -0.00440950569091437, -0.0100549225028156, -0.000403983359233818, 0.00817856137563928, 0.00602628139138025, -0.00160332884444234, -0.0063792212499541, -0.0058181518217004, -0.00232733674946136, 0.00108499341340987, 0.00301461644862225, 0.00348630020441804, 0.00303401218367408, 0.00201697656121542, 0.0502356133652402, -0.0796109936156201, 0.0472834652218411, 0.0297611431311208, -0.098075483100575, 0.0974316452739083, 0.00288337390121069, -0.184258323665262, 0.407584738954028, 0.817166646248232, 0.248766886838869, -0.162162022266581, 0.0250420896208901, 0.0601570455221447, -0.0577478204898145, 0.00264326986523473, 0.0377340264382035, -0.0262746643307058, -0.0125675936009409, 0.0270150924957446, -0.00274652288753034, -0.0206486394165192, 0.00849807595903531, 0.0152879730305166, -0.00859622944398787, -0.0129247649926344, 0.00541433194816638, 0.0123102937835324, 0.000493359732140097, -0.00996640683575728, -0.00732999350591328, 0.00194708206524954, 0.00773639797531299, 0.00704785913417215, 0.00281653733882262, -0.00131203022322173, -0.00364317683987388, -0.00421125285573584, -0.00366375220110382, -0.0024351947073515, -0.0433598015530653, 0.0682452307152237, -0.0400013196847501, -0.0246458492962962, 0.0785876739653082, -0.0741684318462242, -0.00201708258612928, 0.110151806199147, -0.165677578672297, 0.0544551156876724, 0.742240977159745, 0.597069265368342, -0.0518071721719066, -0.10191339353355, 0.0882631614614943, -0.00379467134740156, -0.0519447058883354, 0.0351037718934139, 0.0164206629254622, -0.0346973109653658, 0.00348011104666719, 0.0258802301864135, -0.0105566526114767, -0.0188516325534427, 0.0105347331034845, 0.0157570150301218, -0.00657163620810011, -0.0148852728957839, -0.000594632306481403, 0.0119790042619063, 0.00878932713990999, -0.00233000233670049, -0.00924193905740204, -0.00840720092897875, -0.00335572076013551, 0.00156166267270219, 0.00433297846573887, 0.00500569946673362, 0.00435318346596429, 0.00289280729801906, 0.0380338016189363, -0.0595876308511003, 0.0346235205747832, 0.0210421498477219, -0.0657533461497625, 0.0602541683575529, 0.00156855875853125, -0.0800110927230379, 0.107069962073532, -0.0276502822268559, -0.162361178666007, 0.434405613189356, 0.802930681584115, 0.255579856478645, -0.161487600484602, 0.00602933391836774, 0.0761657894272732, -0.0488784335176691, -0.0220574388762702, 0.0453992087827963, -0.00446352721692592, -0.0326799829822122, 0.0131653618867947, 0.0232735585457253, -0.0128979150095098, -0.0191583341911632, 0.00794379516808327, 0.0179049828139679, 0.00071228084911467, -0.0142981373504654, -0.0104592296229001, 0.00276555919334764, 0.0109457132871509, 0.00993890348400218, 0.00396108991582797, -0.00184111591759754, -0.00510339069981825, -0.00589143840474315, -0.00512092332930194, -0.00340206264205313, -0.0337736550027931, 0.0527420563979282, -0.0304603953826328, -0.0183395636376477, 0.0565436761734393, -0.050850671403096, -0.00128943393876816, 0.0633500516144749, -0.0801594398872331, 0.0189203171197677, 0.0941924427296466, -0.168206100574429, 0.0661173498698149, 0.72233491388093, 0.617062236829432, -0.0125564136176926, -0.128776193347866, 0.0742248554323775, 0.0313715224379581, -0.0617909991641155, 0.005887105754562, 0.042102746431513, -0.016657081159288, -0.0290278296370236, 0.015902494165459, 0.0233997010196158, -0.00962708429401617, -0.0215583237397593, -0.000852940886871586, 0.0170429682124632, 0.0124186313984132, -0.00327286582650657, -0.0129177458930016, -0.0117024307884921, -0.00465502761421983, 0.00216031003453776, 0.00598087884004186, 0.00689814520938587, 0.005992253485393, 0.00397957055294839, 0.030278146539429, -0.047171510819407, 0.0271235720493103, 0.0162215376552179, -0.0495444303046799, 0.0439884369370351, 0.00109631938613798, -0.0526151723852975, 0.0644522024018331, -0.01452080609612, -0.0673362312280533, 0.106699907884517, -0.0329156534005063, -0.159293941729615, 0.389401603320788, 0.79523136548177, 0.34205430132954, -0.138744623950461, -0.0503055456015756, 0.090874082389584, -0.00819087695832837, -0.0563692737716953, 0.0216836178214077, 0.0369906422366787, -0.0199306102881166, -0.028940687598596, 0.0117795435933663, 0.0261469451897338, 0.00102696260248024, -0.0203956754712242, -0.014786149783427, 0.00388022736138086, 0.0152604520212987, 0.0137838398236326, 0.00546964322813091, -0.00253337418901494, -0.00700292400014313, -0.00806766853711946, -0.00700272253214817, -0.00464864856579622, -0.0273498242610836, 0.0425334593712268, -0.0243762707286038, -0.0145063007198376, 0.0440015891751281, -0.0387096089049689, -0.000953175969468383, 0.045027345325325, -0.0540161996646792, 0.0118317031653755, 0.0527598999918876, -0.0789603243020732, 0.0222631260596563, 0.0917149344570047, -0.153900887549928, 0.0139364604714817, 0.642554188343572, 0.690901720045718, 0.112199042140861, -0.158829042568236, 0.0126779956722702, 0.0811117683234767, -0.029723635805299, -0.0489890037290456, 0.0257282180707209, 0.0366321576609511, -0.0146813873396343, -0.0321868639593767, -0.00125152854105605, 0.0246511544211141, 0.0177497357635377, -0.00463169073631091, -0.0181307937350242, -0.0163133475182642, -0.00645301139300094, 0.00298128155314689, 0.00822478663530694, 0.00946139543048027, 0.00820429563609871, 0.00544331740322177, 0.0248537781661256, -0.0385985678614782, 0.0220652596635416, 0.0130814172585902, -0.0394738505023993, 0.03448965233203, 0.000841807196725289, -0.0393202676161623, 0.0464931446093268, -0.0099953859110378, -0.0434895277536799, 0.0629608035474936, -0.0169425091891294, -0.0651037947559944, 0.0974859822131191, -0.00708426156391957, -0.172771354953124, 0.252439084524688, 0.753949360836251, 0.519990963736589, -0.0256799447259585, -0.13605005053955, 0.0450124518086753, 0.069582141920976, -0.0349779561083024, -0.0482506847183295, 0.0188831359631739, 0.0406433796850247, 0.00155751913554928, -0.030322124859391, -0.0216272856463502, 0.00560006078167826, 0.0217832758151623, 0.0194987504537186, 0.00768084825765603, -0.00353671597712491, -0.00973186956262452, -0.0111736101165272, -0.00967644970002317, -0.00641548862324754, -0.0226946468739129, 0.0352072283466207, -0.0200866548441454, -0.0118732867588586, 0.0356844238281564, -0.0310157780394024, -0.000751991920762118, 0.0348321842127167, -0.0407566470240813, 0.00864740132620288, 0.0370008938794261, -0.0524263568709101, 0.0137132806097248, 0.0507004023791075, -0.071855949290074, 0.00480112045762169, 0.101449761367924, -0.109489871550694, -0.0903746747817523, 0.451436240249012, 0.752609762538951, 0.372781710268415, -0.0866010753667511, -0.114242447491891, 0.0524501843160662, 0.0682361261732578, -0.0256376988945462, -0.0535606375172721, -0.00200670776368293, 0.038388298617869, 0.0270039873470622, -0.00691531601574127, -0.0266609628233038, -0.0236943956881242, -0.00928011348164499, 0.00425374649315743, 0.0116639760808838, 0.0133574528419629, 0.0115475919371353, 0.00764878986147946, 0.02080308390619, -0.0322447752280565, 0.0183673498363335, 0.010831533768887, -0.0324501736336476, 0.0280890843525755, 0.000677523148693792, -0.0311823460079638, 0.0361991260831236, -0.00760615302956238, -0.0321570319965886, 0.0448860827447127, -0.0115209663808587, -0.0415700310220126, 0.0570485574583682, -0.00364706657165215, -0.0723014072114008, 0.0706314584455791, 0.0488297261075105, -0.161384236996293, 0.0288260256462474, 0.565573788209924, 0.706124223717987, 0.290785735182462, -0.0991117683103069, -0.111691509491086, 0.0385498152302071, 0.0761605298309286, 0.00274349725515809, -0.0509883470913759, -0.035090158008482, 0.00883492578808794, 0.0336114836890023, 0.0295593971221619, 0.0114816869507059, -0.00522895294241009, -0.014267390764395, -0.0162799574157892, -0.0140400877623935, -0.00928749473176015, -0.0191274301347389, 0.0296266120364657, -0.0168542956584052, -0.0099204145645984, 0.0296446697585847, -0.0255765753190685, -0.000614399890828097, 0.0281354365833955, -0.0324629977665955, 0.00677078049865385, 0.0283693241864844, -0.0391683263760566, 0.00991935612004024, 0.0351996997805546, -0.0473016363348752, 0.00294315934011818, 0.0562884267087053, -0.0523305901207493, -0.0336556043580833, 0.0991718264837226, -0.0143459685493397, -0.164564771976209, 0.119726460543315, 0.600250506218579, 0.667607308107777, 0.284590214864196, -0.0739873624672559, -0.126959663744257, -0.00420291407785438, 0.0738593717334397, 0.0488635562946196, -0.0119516754279172, -0.0444878084892533, -0.0384769527647354, -0.0147547310322843, 0.0066537140688432, 0.0180208421978227, 0.0204529273111186, 0.0175761207312051, 0.0116041147279148, 0.017628394563883, -0.0272888989244528, 0.0155079963778929, 0.00911380186268897, -0.0271775551422269, 0.0233856617189798, 0.000559918650005442, -0.0255377366868358, 0.0293234988836184, -0.00608064311735071, -0.0253018675401067, 0.034644999884952, -0.00868693658372327, -0.0304574889746371, 0.040331640779077, -0.00246423218074399, -0.0460615979448281, 0.0415783444236488, 0.025714637187802, -0.0717877026909882, 0.0095957792527085, 0.0970334816786808, -0.0558525595323677, -0.150613714285985, 0.146119448051861, 0.571447539352716, 0.653865820670791, 0.354268397052178, 0.00858360590437781, -0.129415459340549, -0.0781580609387581, 0.0180044648382158, 0.0642712491679147, 0.0539283206207516, 0.0202220678442078, -0.00896878758485304, -0.0239955307409974, -0.0269979611596888, -0.0230681655429664, -0.0151832307075675, -0.0162755464746894, 0.0251825099509084, -0.0142983961791858, -0.00839211417405296, 0.0249823692567523, -0.0214497132501135, -0.000512181492213392, 0.0232842888908778, -0.0266318810678284, 0.00549700245775103, 0.0227485975688079, -0.0309485290917762, 0.00770110875586091, 0.0267578031595236, -0.035051971491209, 0.00211400872712782, 0.0388960784801354, -0.0344335847321688, -0.020782515357407, 0.0562317644640851, -0.00721243330522828, -0.0689159564501852, 0.0365409191286752, 0.0865866839341752, -0.0664428631109596, -0.144673143354556, 0.0981322677728318, 0.475149308765591, 0.634563488005227, 0.478667607513272, 0.186195019972533, -0.0352443213346146, -0.112506142935908, -0.0879079589199957, -0.0314092623373506, 0.0134676320008024, 0.0351843863583906, 0.0389420874209424, 0.0329236573182442, 0.0215485224593867, 0.0150449373426555, -0.0232689906856048, 0.0132021864463996, 0.00774035909097568, -0.0230090255307698, 0.0197194328661191, 0.000469813195022133, -0.0213007907421788, 0.0242855293521572, -0.00499389490839033, -0.0205758181244294, 0.0278490846809781, -0.00688841602334665, -0.0237668620897324, 0.0308790456504919, -0.00184438860428316, -0.0335478406918611, 0.0292939846998168, 0.0173896284955078, -0.0461058298098731, 0.00576614586060397, 0.0533573333150728, -0.0271330022144426, -0.0607678617934354, 0.0430544231498001, 0.083063427780246, -0.0458808170976388, -0.143466581583215, -0.00848380588315749, 0.289831719792102, 0.524340545356339, 0.557579309657677, 0.421195014645418, 0.227926284253566, 0.0680750541221167, -0.0262929389716986, -0.0643223380652075, -0.0682572417448104, -0.0562351214314151, -0.0363170399880458, -0.0139174492722786, 0.0215177817038279, -0.0122009892722627, -0.0071468434331304, 0.0212189818659548, -0.0181574780301042, -0.000431790381824344, 0.0195330311214604, -0.0222111901863169, 0.00455322672723927, 0.0186928144146809, -0.0251953173351357, 0.00620209229388433, 0.0212802174537048, -0.027471043821437, 0.00162864069330718, 0.0293676003155885, -0.0253848238582987, -0.0148901042235319, 0.0389232880488234, -0.00478598758878106, -0.0433868492218213, 0.0215133412932815, 0.0466880915737968, -0.0317766588956148, -0.0581642150646476, 0.0299146441368769, 0.0845001979041124, 0.00427657982773052, -0.111600557797575, -0.109520211286359, 0.0407583718866229, 0.245907271339563, 0.39828143782001, 0.451727380049023, 0.421338712686187, 0.34687257973384, 0.262412532597219, 0.184709573032935, 0.111084674068413, 0.012877623294021, -0.0199042670603577, 0.0112801001376737, 0.00660229788128586, -0.0195820368642417, 0.0167349809622265, 0.000397333948401641, -0.0179404332200598, 0.0203550459645638, -0.00416197354326847, -0.0170357353056466, 0.0228833024246452, -0.00561089783993896, -0.0191654550153965, 0.0246142031825322, -0.00145070591243183, -0.0259830260952475, 0.022285475334659, 0.0129554146900845, -0.0335156856077325, 0.00407143527359152, 0.0363882774872344, -0.0177426373824781, -0.0377420741912612, 0.0250766023984331, 0.0445740734466061, -0.0221102808681579, -0.0596835704195153, -0.00285020075313576, 0.0689264962739285, 0.0610217408447191, -0.0196341248181829, -0.0951252964635729, -0.106345620517212, -0.0524122681934299, 0.0301528016230795, 0.102824371037832, 0.143406081835279, 0.1452490757896, 0.106147830331558, -0.0119128121844315, 0.018408374394463, -0.0104275977634319, -0.00609926770329334, 0.0180741435931895, -0.0154292253261316, -0.0003658389143792, 0.016491949640047, -0.0186765766449295, 0.00381049980952383, 0.0155582379893721, -0.0208391719461842, 0.00509313190980302, 0.0173328988980734, -0.0221677941587778, 0.00130034267886099, 0.0231650715152805, -0.0197476395597109, -0.0114006633885835, 0.0292611320184805, -0.00352260611856474, -0.0311585165257871, 0.0150125652692106, 0.0314978866782039, -0.0205961962587444, -0.0359350252064484, 0.0174408946336747, 0.0458883773649676, 0.00212607786730677, -0.0496021033520197, -0.0420777056995918, 0.0128672676763657, 0.0586805615533528, 0.0610741175343417, 0.0276918478076044, -0.0144905854710535, -0.0445821336403018, -0.0560789505496601, -0.0519151497352368, -0.0357698587900846, 0.0110125574158071, -0.0170135523491301, 0.00963370121230691, 0.0056316791800165, -0.016675880487971, 0.0142220520502418, 0.000336827273740815, -0.0151633637692939, 0.0171446192045088, -0.00349150740783279, -0.0142257973013765, 0.019008871913721, -0.00463322111067128, -0.0157195498805974, 0.0200352388528194, -0.00117070225055093, -0.0207649249013389, 0.0176151347241734, 0.0101137286177623, -0.0257979162814128, 0.00308412504610651, 0.0270666787540121, -0.0129260587428279, -0.0268501901988552, 0.0173596128157525, 0.0299028392435783, -0.0143045170549318, -0.0370248851585576, -0.00168399043099967, 0.0384791005987829, 0.0318909183037911, -0.00950358053513075, -0.0421323838521892, -0.0425386189471459, -0.0186841332241535, 0.00946901222685777, 0.0282569201181595, 0.0346026185835947, 0.0313764053227288, 0.0213523503246855, -0.0101681238376018, 0.0157060113285513, -0.00889029723133689, -0.00519452494569773, 0.0153713584033893, -0.0130987389541516, -0.000309915457435934, 0.0139354634167749, -0.0157347556830604, 0.00319935412507506, 0.0130121048756385, -0.0173518492048348, 0.00421967632744596, 0.0142797680425652, -0.0181479400559083, 0.00105702399225177, 0.0186815690946853, -0.0157846802775342, -0.00902259074453469, 0.0229011227203889, -0.00272279288563724, -0.0237498083130626, 0.0112651519783809, 0.0232239670448396, -0.0148897334628667, -0.0254111172411908, 0.0120316066757692, 0.0307914301387578, 0.00138320971291586, -0.0311821278667919, -0.0254692050061099, 0.0074728161537489, 0.0325935323785011, 0.0323615741745032, 0.0139787780250617, -0.00697178318850948, -0.0205037257848346, -0.0248015883309476, -0.0222839381386486, -0.0150837736625123, 0.00937214725594843, -0.0144741513915958, 0.00819058715007771, 0.00478363158637137, -0.0141474241966477, 0.0120471965144558, 0.000284791352873444, -0.0127927729906822, 0.0144275330182035, -0.00292959816622323, -0.0118967125028734, 0.0158370121616392, -0.00384381716906556, -0.0129796095269213, 0.0164557375556328, -0.000955890021224677, -0.0168439079742163, 0.0141851468084217, 0.00807881365147407, -0.0204233836637147, 0.00241747484542802, 0.0209841048168921, -0.00990013428548353, -0.0202903226140581, 0.0129255077244068, 0.0219047746415822, -0.0102926938689619, -0.026125039348173, -0.00116324524569535, 0.0259773181675566, 0.0210081812702913, -0.0061005768145973, -0.026329009703655, -0.0258674440778183, -0.0110598201722913, 0.00546346109024789, 0.0159318619698062, 0.019136719554891, 0.0171058893852967, 0.0115444725707766, -0.00861836406604932, 0.0133081253036235, -0.00752881923695108, -0.00439548525546842, 0.0129930702628372, -0.0110573795538415, -0.000261197735500109, 0.011722653439049, -0.0132072197614305, 0.00267868550311687, 0.0108634440524919, -0.0144400616864877, 0.00349894686983407, 0.0117932463031629, -0.014921023297432, 0.000864777957556262, 0.0152003574002396, -0.0127658635270803, -0.00724857024700614, 0.0182639707642952, -0.00215405926115655, -0.0186239055418147, 0.00874890668175489, 0.017847354297331, -0.0113119626333451, -0.0190661754129779, 0.00890669120848378, 0.022466677290026, 0.00099377974624443, -0.0220399887138311, -0.0176967816978425, 0.00510150101769388, 0.0218560310586694, 0.0213186300992149, 0.00905247048716953, -0.00444366008674008, -0.0128865525153632, -0.0154091877652427, -0.0137289036870005, -0.00924802324190561, 0.00790140135219212, -0.012199500645871, 0.00690008311792501, 0.00402709892634179, -0.0118989898584053, 0.0101208494972011, 0.000238920100748992, -0.0107146503579352, 0.0120609187145631, -0.00244373015479076, -0.00989929754950288, 0.0131416778825532, -0.00317980198782567, -0.0107006253481726, 0.0135149753486866, -0.000781781262721738, -0.0137124983179006, 0.0114896816975766, 0.00650747566214989, -0.0163515758976111, 0.0019227488867843, 0.0165701817229631, -0.00775690262395261, -0.0157641033039232, 0.00995118905157892, 0.0167002495992665, -0.00776572372968038, -0.0194940145360719, -0.000857930531362902, 0.0189275132785013, 0.015116198892821, -0.00433402763103426, -0.0184685046288663, -0.0179208429264578, -0.00757242720068573, 0.00370059338881905, 0.0106902798311408, 0.0127431304444085, 0.011328016734153, 0.00762093740851412, -0.0072166121146411, 0.0111409954946748, -0.00630014991706616, -0.00367590999630978, 0.0108572373962364, -0.00923044358429228, -0.000217777577130029, 0.00976001325350953, -0.0109779211609604, 0.00222235650152933, 0.00899366869779711, -0.0119262572990573, 0.00288217543017178, 0.00968589285996964, -0.0122150695486148, 0.000705428118397683, 0.0123510537874645, -0.0103286788903618, -0.00583746692806987, 0.0146341917861594, -0.00171651544977398, -0.0147531335059502, 0.00688637667294736, 0.0139517755373167, -0.00877820002961475, -0.0146804149020554, 0.0068014465943419, 0.0170079266976369, 0.000745540254687023, -0.0163808119636948, -0.013028135436599, 0.00371989276452605, 0.0157871145743922, 0.0152592115597346, 0.00642426079247937, -0.00312917349333448, -0.00901400493571652, -0.0107205580088613, -0.0095144998064576, -0.0063949453528965, 0.00655994456647087, -0.0101262694071171, 0.00572534652187269, 0.00333970033015976, -0.00986096549192566, 0.00838002133489002, 0.000197616035936852, -0.0088513351624507, 0.00994922857001848, -0.00201258395887309, -0.00813779045904207, 0.0107810141200278, -0.00260265202850765, -0.00873630592388558, 0.0110033889088723, -0.000634560505240972, -0.0110932528273822, 0.00926139976102768, 0.00522484122021731, -0.0130728945627664, 0.00153017329910483, 0.0131220309085773, -0.00611032869624181, -0.0123479113693879, 0.00774808269562174, 0.0129207969432965, -0.0059683849630489, -0.0148785701827973, -0.000650122450619579, 0.0142379416282677, 0.0112868398226961, -0.00321225729648873, -0.0135896590348002, -0.0130956717958544, -0.00549798005577891, 0.00267128431602594, 0.00767849930562421, 0.00911655754199493, 0.00808101984678476, 0.00542767971567924, -0.00592783743089352, 0.00914975645279628, -0.00517245562462216, -0.00301653310919412, 0.00890421891666621, -0.00756426765964419, -0.000178302792630466, 0.00798227840364255, -0.00896719259885798, 0.00181274116907657, 0.00732432105603914, -0.0096953276579348, 0.00233841909024994, 0.00784146350292386, -0.00986544638172288, 0.000568251292175573, 0.0099210522854708, -0.00827102702333228, -0.0046589793069814, 0.0116378769461053, -0.00135980066229818, -0.0116390073696608, 0.00540887939699726, 0.0109071785878969, -0.00682872402875239, -0.0113609429166082, 0.00523503779155558, 0.013017481518337, 0.000567332270957812, -0.0123922803322436, -0.00979799525177584, 0.0027813256794115, 0.0117371259750637, 0.0112836362921345, 0.00472685062288843, -0.00229212944423977, -0.00657766274429513, -0.00779918907705294, -0.00690673938872042, -0.00463647287075622, 0.00531713528934137, -0.0082065305584842, 0.00463863545722477, 0.00270470242073376, -0.00798177129714588, 0.00677853809072283, 0.000159722478911264, -0.00714736295916305, 0.00802524009293935, -0.0016214011400801, -0.00654703595540915, 0.00866026008120479, -0.00208712803961174, -0.00699275179268366, 0.00878934685325393, -0.000505746025309586, -0.00881990643681373, 0.00734413508782205, 0.00413148964414449, -0.010305833723367, 0.00120236504498646, 0.0102751187013982, -0.00476701486093906, -0.00959576378837662, 0.0059964778565661, 0.00995692742755526, -0.00457882703382638, -0.01136213473145, -0.00049414196520994, 0.010770577942909, 0.00849771634098492, -0.00240719440669054, -0.0101378920426455, -0.00972770637385445, -0.00406794653267998, 0.00196955841952798, 0.00564455079281773, 0.00668579018591296, 0.00591633253647842, 0.00396993973131028, -0.00472501956869035, 0.0072921959754764, -0.00412135475422151, -0.00240269262805455, 0.00708899434992755, -0.00601873576490577, -0.000141773788360911, 0.00634180109207738, -0.00711766014539539, 0.00143733150385062, 0.0058005940123042, -0.00766819406766606, 0.00184679158932459, 0.00618293666023903, -0.00776517861871914, 0.000446421178530724, 0.00777789592744328, -0.00646981966295523, -0.00363561915560411, 0.00905818877081718, -0.00105547319004535, -0.009007755811641, 0.00417313141530593, 0.00838781919738304, -0.00523347146938614, -0.00867593202776693, 0.00398308174261276, 0.00986691213455083, 0.00042836902369041, -0.00932066473039293, -0.0073410403458075, 0.00207601648923625, 0.00872891737035755, 0.00836292484569935, 0.0034923168731005, -0.00168875784047144, -0.00483471283091835, -0.00572178444680911, -0.00506026725475154, -0.00339436818164319, 0.00414895191876985, -0.00640279758759389, 0.00361833967739179, 0.00210914536764941, -0.00622175227234561, 0.00528121272733777, 0.000124366884485595, -0.0055613666585595, 0.00623943722328364, -0.00125945587466453, -0.00508035744828377, 0.00671255650308308, -0.00161570610075676, -0.0054058590639501, 0.00678456346310945, -0.000389753628771114, -0.00678509830255802, 0.0056390763904497, 0.00316583793454843, -0.00787986197818868, 0.000917199587955388, 0.00781889588554652, -0.00361806687160352, -0.00726313418779071, 0.00452586921085121, 0.00749280917892252, -0.00343515915900146, -0.00849757782771358, -0.000368392503745028, 0.0080041938505875, 0.00629525219271381, -0.00177781552091535, -0.00746520749037539, -0.0071433333429848, -0.002979641266353, 0.00143940327276422, 0.00411735179730853, 0.00486953646154502, 0.0043045004058298, 0.0028866316382756, -0.00358662770181722, 0.00553474735292168, -0.00312753040729825, -0.0018228326601979, 0.00537631610305252, -0.00456269033638531, -0.000107421323179171, 0.0048022910542073, -0.00538611924789682, 0.00108682353139295, 0.00438225172665949, -0.00578760519899623, 0.00139239217227832, 0.00465620409636608, -0.00584031873005617, 0.00033529795622016, 0.00583312474400616, -0.00484434849448882, -0.00271754032149424, 0.00675839216558368, -0.000785965993740693, -0.00669388940557003, 0.00309443749599036, 0.00620556347715186, -0.00386271691073366, -0.00638782877284102, 0.00292523071086027, 0.00722776060452819, 0.000312975231422577, -0.00679216126216592, -0.00533582542290928, 0.00150517569829082, 0.00631358587225711, 0.00603529853142794, 0.00251514995030272, -0.00121403531192343, -0.00347032872199236, -0.00410209877224721, -0.00362472520305149, -0.00243024394737757, 0.00303593835063348, -0.00468476482300157, 0.00264704609596171, 0.0015426352478876, -0.00454929491967178, 0.00386019553143795, 9.08643957028969e-05, -0.00406118058785268, 0.00455371335502748, -0.000918585590415992, -0.00370265607369123, 0.00488826331480768, -0.00117554883108033, -0.00392932421081412, 0.00492620068611211, -0.000282669348026541, -0.00491477422169238, 0.00407919220183082, 0.00228682595883728, -0.00568330122149455, 0.000660455012419668, 0.00562059984166006, -0.00259617318789365, -0.00520193837733995, 0.00323515130247477, 0.00534515584921004, -0.0024454724530163, -0.00603663901877531, -0.000261148299465007, 0.00566203301164971, 0.00444385252511352, -0.00125242272477235, -0.00524884577476688, -0.00501343339597993, -0.00208776029473391, 0.0010070856947379, 0.00287718919555112, 0.00339951164826286, 0.00300298141565809, 0.00201304015243963, -0.00249494307590703, 0.00384983238008085, -0.00217515843757888, -0.00126752621590183, 0.0037375836706643, -0.00317101237381368, -7.46298656514256e-05, 0.00333495338035138, -0.00373860619116854, 0.000753976779670141, 0.0030383197747961, -0.00400999293517914, 0.000964018636507438, 0.00322110497741411, -0.00403671040448726, 0.000231530728906393, 0.00402377460490973, -0.00333802787066582, -0.00187033807517242, 0.00464562805312889, -0.000539547287432697, -0.00458878386593324, 0.00211818575521351, 0.00424129744917147, -0.00263584710070996, -0.00435179720379517, 0.00198951093893644, 0.00490737428675478, 0.000212133742453715, -0.00459584318176653, -0.00360436189849059, 0.00101509293861271, 0.00425128099082783, 0.00405800431514881, 0.00168890213559499, -0.000814267956099842, -0.00232531452098757, -0.00274651376781413, -0.00242556544872043, -0.00162574943830698, 0.00196185504166233, -0.00302717301617995, 0.0017102781996564, 0.000996562360421348, -0.00293833462680961, 0.00249265448085903, 5.86572229548466e-05, -0.00262080076824131, 0.00293751360249231, -0.000592303611609494, -0.00238630655417011, 0.00314870937051768, -0.00075676363249425, -0.00252787134590783, 0.00316695682263353, -0.000181583612616261, -0.00315459764957438, 0.0026159615691385, 0.00146514739481969, -0.00363759414030942, 0.000422276507974571, 0.00358964878052868, -0.00165613305004101, -0.00331434236101875, 0.00205862832619348, 0.00339686597772794, -0.00155203923698458, -0.00382603291448774, -0.000165291811016995, 0.00357890774394974, 0.00280518929643598, -0.000789580255415096, -0.00330505661547086, -0.0031532329162263, -0.00131175368753569, 0.000632183444810546, 0.00180473235565986, 0.00213107540928132, 0.00188169510352605, 0.00126108485839831, -0.00143506530437024, 0.00221428654186022, -0.0012509749306692, -0.000728895031012156, 0.00214898682275602, -0.00182288727938768, -4.28921287003093e-05, 0.00191620293104419, -0.00214749249140043, 0.000432945430758821, 0.00174399247106087, -0.00230076867949993, 0.000552859648422732, 0.00184635819384977, -0.00231260481594867, 0.000132564134149311, 0.00230237032334184, -0.00190869279114166, -0.00106868844794483, 0.00265241142164512, -0.000307802618903098, -0.00261558151522301, 0.00120627138335099, 0.00241309175987159, -0.00149821803104784, -0.0024711039643579, 0.00112856604672332, 0.00278088031114114, 0.000120086347198235, -0.00259897991058624, -0.00203623750927274, 0.000572905029676809, 0.00239714517966596, 0.00228619043606813, 0.000950745550709736, -0.00045806631436075, -0.00130734888234296, -0.00154345352562126, -0.00136265074951775, -0.000913158369914805, 0.000913332092737591, -0.00140924102709102, 0.00079614098011223, 0.000463865159710831, -0.00136754410935468, 0.00115996158728165, 2.72918455255895e-05, -0.00121916796740968, 0.00136620407267361, -0.000275406383185978, -0.00110927009309689, 0.00146322914267646, -0.000351556949969495, -0.00117390453258859, 0.00147010649100496, -8.42555264018201e-05, -0.00146307605002428, 0.0012126667454054, 0.000678835611316396, -0.00168444514220013, 0.000195427334210188, 0.00166024815384396, -0.000765484759642365, -0.00153090262884054, 0.000950226032121667, 0.00156681505215979, -0.000715362202113789, -0.00176218738302431, -7.60735858098617e-05, 0.00164594263743159, 0.00128918229884268, -0.000362616012397776, -0.00151685221499272, -0.00144628535744991, -0.000601324005955475, 0.000289659079589952, 0.00082656785064806, 0.000975717338865345, 0.000861340775449278, 0.000577183612518685, -0.000397393681684339, 0.000613160866644653, -0.00034639655483717, -0.00020182142927004, 0.000594985366688597, -0.000504655972280245, -1.18732331149536e-05, 0.000530372849060713, -0.000594308971672604, 0.000119797278313798, 0.000482484876142303, -0.000636398793701625, 0.000152890462675572, 0.00051048411030472, -0.00063923416093962, 3.66326431426809e-05, 0.0006360516068705, -0.00052713204231145, -0.000295047519588031, 0.000732032847232304, -8.4918509850558e-05, -0.000721324276095818, 0.000332530793022712, 0.000664933450416547, -0.000412658353341651, -0.000680319222071791, 0.000310563872809259, 0.000764902663559084, 3.30154311542255e-05, -0.000714212410719759, -0.000559317106177712, 0.000157298365314416, 0.000657896168084812, 0.000627204789396619, 0.000260741823330207, -0.000125586396970163, -0.000358339549523905, -0.000422969808632579, -0.00037336920628249, -0.000250187243138522).finished();
}
} // namespace mrcpp
} // namespace detail
