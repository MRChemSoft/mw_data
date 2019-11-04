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
auto get_I_G0_29() noexcept -> Eigen::Matrix<double, 30, 30> {
  return (Eigen::Matrix<double, 30, 30>() << 0.138719448766277, -0.213520125850184, 0.11935050131977, 0.0718903228347533, -0.20503508642634, 0.165662790163269, 0.018287394743433, -0.186517766757946, 0.179417030999696, 0.00529367112845405, -0.184881960221485, 0.16019136875914, 0.0528667137130381, -0.198315578456903, 0.0749486583410187, 0.155253127543206, -0.137203458993238, -0.11242627364177, 0.145598087223361, 0.111349170807512, -0.111400218304449, -0.144967296271092, 0.0132781031343371, 0.133446027881102, 0.116306574023156, 0.0272823504200518, -0.0478444305815084, -0.0784714368251659, -0.0742984066587745, -0.0503023657986597, 0.129535280752165, -0.213376595517543, 0.152471836403906, 0.0148864703362436, -0.172865879794148, 0.205495559379835, -0.0825898429311184, -0.106489738309889, 0.208640612943719, -0.12895533192555, -0.0709039144718863, 0.201437976036537, -0.118469989821499, -0.0997750139935942, 0.193612948717955, -0.0270595173213565, -0.175898932675718, 0.0942310322089078, 0.14732579633435, -0.0985467625323058, -0.148937267996134, 0.0430391441610684, 0.153770870156208, 0.0728306670112682, -0.0593912191327063, -0.11938070154181, -0.102035927696046, -0.0563781851552764, -0.019506164322585, -0.00246327872488785, 0.119916021510244, -0.209694844609832, 0.179460194492936, -0.0432200799008857, -0.120354026585182, 0.210257624790936, -0.164270176496978, 0.00573767510844163, 0.158647835585164, -0.203425402349228, 0.0822956090503363, 0.112260184123143, -0.201485812983447, 0.08320383102434, 0.128604455851455, -0.180917953659925, -0.0116106500237457, 0.182654928562939, -0.0502476001922434, -0.16583644386251, 0.0423956038568998, 0.161298689137758, 0.0331779128329126, -0.116536237911787, -0.126428564995688, -0.0413008641273984, 0.040315487192471, 0.0762184446759048, 0.0739804684761622, 0.0502951169616646, 0.10989581259116, -0.202539086510577, 0.199232591455888, -0.098127557401139, -0.0536805738561694, 0.179138914623044, -0.207769305980608, 0.116231082138272, 0.0484213572700602, -0.183596265191417, 0.189975322400496, -0.0496020313356161, -0.134291631210234, 0.195771078465674, -0.0584058782909401, -0.1445263997076, 0.166077261356364, 0.0418968534447681, -0.179848133352287, 0.00685601841577664, 0.168581231004578, 0.0181621140118238, -0.14374842309628, -0.0998904612151137, 0.0378463915972684, 0.114531758272673, 0.10501162584012, 0.0594253063841809, 0.020714414843488, 0.00261951818760285, -0.099509713174691, 0.19203071481443, -0.210996730341693, 0.145772648518909, -0.0193090121912205, -0.117451737856725, 0.202978648709749, -0.191583662757352, 0.0801889881742141, 0.078661525968491, -0.19257517826539, 0.17935094904601, -0.0330185178462024, -0.142665153073216, 0.190010410927349, -0.043846225894079, -0.152118891181681, 0.151431537296616, 0.0661539522081155, -0.169627929187226, -0.0357124731194542, 0.154408772277268, 0.0766066675486307, -0.0933424481939556, -0.132879251316034, -0.0547500462126475, 0.0325665909026092, 0.0738436069496631, 0.0736426206841289, 0.0502873462216039, 0.088793768394553, -0.178346541096908, 0.214283014271481, -0.182631572043278, 0.0900289427652196, 0.0357221231267773, -0.151012028272322, 0.209013356266953, -0.178354472048906, 0.0627340684069248, 0.0886604692367241, -0.192984506166228, 0.175717284873716, -0.0311749117121517, -0.141361077063753, 0.186109518777976, -0.037376168212006, -0.154759877599396, 0.137035177710851, 0.0869302883200239, -0.152033200959373, -0.0767526101557678, 0.120607076110456, 0.121563222065499, -0.0152001378910188, -0.108104663283498, -0.107414339978436, -0.0623783107730428, -0.0219166181487091, -0.00277596542092161, 0.0777856613093856, -0.161717483108083, 0.20896569519023, -0.205983881487691, 0.150167326789037, -0.0521120138261803, -0.0639395089015268, 0.163242634012005, -0.208797830844112, 0.175037402283315, -0.0642791051184845, -0.0816894889514696, 0.187437549516997, -0.178650740889308, 0.0414052121148104, 0.132650086104391, -0.183725448792849, 0.0360751670045969, 0.154863579502976, -0.121578893386967, -0.106140418101238, 0.125273861004873, 0.113056880371995, -0.0651266294585548, -0.135461142836613, -0.0674527115761541, 0.0246466328040674, 0.071345868321076, 0.0732881408997176, 0.0502777140242141, -0.0665277004616124, 0.14243170245259, -0.195278430959924, 0.214127607168121, -0.192681095084676, 0.131099637780259, -0.0380418188978646, -0.0680670783467843, 0.159916532301642, -0.20614383445418, 0.181598487428611, -0.0824221386021588, -0.0595012425567786, 0.175022838076078, -0.184972086165009, 0.0603768106244468, 0.11798958774759, -0.181573731211071, 0.0367306547091075, 0.154223292695227, -0.102921054345359, -0.124227036381636, 0.0863959835491432, 0.136736365090036, 0.0078419263989961, -0.100148606021379, -0.109263224097704, -0.0652094062337345, -0.0231275319071037, -0.00292610190297702, 0.0550778301497448, -0.120855055856248, 0.173843431265075, -0.206555929108212, 0.212686120442701, -0.18789867736542, 0.13138076568214, -0.047900572849159, -0.0500980842173391, 0.14145748352377, -0.198222162409056, 0.19290515722419, -0.112510504161665, -0.0235800729443496, 0.153375925200081, -0.190221424379621, 0.0841978854533823, 0.0989694555022791, -0.178368844473443, 0.0360422468395412, 0.154086596578526, -0.078374395950358, -0.138953910479385, 0.0331875667093833, 0.134298034947894, 0.0790777089884329, -0.0164725860980581, -0.0688261053041559, -0.0728609759188161, -0.0502947914110859, 0.043543980255584, -0.0975036127255926, 0.145767549794884, -0.184155456433912, 0.208228030627031, -0.213278567656735, 0.194893972591462, -0.15014270779468, 0.0795258006919786, 0.01039861053935, -0.10439463723574, 0.177669819364909, -0.199793007129134, 0.146913689355769, -0.0227496084503872, -0.121059018191181, 0.19025799952139, -0.108786833899781, -0.0778440164309969, 0.173350641444901, -0.0307177903893114, -0.154784760431209, 0.0451239392017848, 0.143875814548924, 0.0312828376247412, -0.0913520163878184, -0.110154641217358, -0.0682576492102387, -0.0241520300100606, -0.00315985115516047, 0.032167919992511, -0.0732284466194029, 0.112900676368205, -0.149552008584517, 0.181028806002429, -0.204310179643834, 0.215389316490429, -0.209436570541612, 0.181490642041868, -0.128018555399894, 0.0496456231896873, 0.0450469231255209, -0.1358781182331, 0.190855887268895, -0.174956423792269, 0.0728126514344374, 0.0796553047166832, -0.183054303177875, 0.130756027981449, 0.0575380782072383, -0.166374958822141, 0.0175378101744099, 0.154833941261723, -0.0015012728031761, -0.127709219658164, -0.0912601269662148, 0.00937818327785548, 0.0654699028518978, 0.0730974828591255, 0.0501715351110946, -0.0214541083366032, 0.0495038094869016, -0.0782480923186196, 0.107603886958056, -0.137192892132789, 0.16601659081111, -0.192142505906863, 0.212365045024591, -0.221942373271099, 0.214656189500611, -0.183649482240266, 0.123704723641883, -0.0355818970081722, -0.0678280351359991, 0.1563019433378, -0.185226849885702, 0.117235288942286, 0.0344623066562779, -0.170039065160164, 0.148425496330724, 0.0413715087860565, -0.15757735471345, -0.00645151338623982, 0.149533957353348, 0.0498510531917367, -0.0781612280733112, -0.114172533196558, -0.0695977759479671, -0.0267218622638976, -0.00282646945741254, 0.0122088668418596, -0.0285069983368179, 0.0460435580151829, -0.0653688054598271, 0.0870107626376797, -0.111317773533945, 0.138255614832624, -0.167080837365758, 0.19585451547439, -0.220811589203472, 0.235735992337448, -0.231776623555497, 0.198607040708147, -0.128326813464069, 0.0233454266112361, 0.0928962280694728, -0.170094944536551, 0.147294860208984, -0.00719019288258277, -0.155897247346882, 0.162028324854362, 0.0328656336350244, -0.146326291436619, -0.0431733146478232, 0.129528157806843, 0.0962246820346746, 0.00433743777212344, -0.0679357310315243, -0.0717685209632068, -0.0523671060841992, 0.00527478954330914, -0.0124825823054187, 0.0206514880975871, -0.0303486006834784, 0.0422538054048823, -0.0571476792913448, 0.0758794427816121, -0.0992591889453062, 0.127807540287974, -0.161268100058692, 0.19777767674492, -0.232656617161597, 0.257050815817015, -0.257314526538484, 0.217169125338888, -0.12578345835357, -0.006250395386575, 0.129186411484138, -0.158707552901963, 0.0390290557975193, 0.146572820963306, -0.172295143103566, -0.035573366649095, 0.128915600358892, 0.090738339038991, -0.0820603743786896, -0.109275762591488, -0.083192548747214, -0.0245006585574668, -0.00521226972114983, -0.00102996834711784, 0.002543898884036, -0.00451981831137279, 0.00728534078324897, -0.0112798416651056, 0.0171023951846898, -0.0255701880730509, 0.0377736335478598, -0.0550979322821096, 0.0791436306576638, -0.111415173690253, 0.152559295926313, -0.200869298952437, 0.249882586428776, -0.285549100336011, 0.285186507565502, -0.223377746480066, 0.0916711155520702, 0.0689279801080546, -0.1527128123961, 0.057577225625391, 0.147106366976263, -0.178012280201698, -0.0519509783556552, 0.0960797626888532, 0.136363312712664, -0.00324032754968141, -0.0565030331100805, -0.0850908431460699, -0.0527822727218008, 0.00088343316779733, -0.00199366005217112, 0.0030170168492916, -0.00385774028572118, 0.00436580384031511, -0.00429358413536918, 0.00323562350460196, -0.000540508103795257, -0.00481153733651393, 0.0143601904708607, -0.0303069192402783, 0.0555291732827882, -0.0931929006315119, 0.145447477799651, -0.210475498933134, 0.277471716191009, -0.321099136501239, 0.302097979323502, -0.187589294773165, 0.000552438404281816, 0.134657339828888, -0.0616170744173904, -0.16067843552204, 0.174116174177471, 0.0797318167739369, -0.0352717387745326, -0.148696560044382, -0.0738473117543934, -0.0421277050581459, -0.000112955804065474, 0.00130354687305088, -0.00302254368496639, 0.00482241081926033, -0.00673019645991334, 0.00876731868143887, -0.0109305531874294, 0.0131650801456544, -0.0153157430929125, 0.017040452941504, -0.0176626988139626, 0.0159354723802448, -0.00970005713792841, -0.00451591665805442, 0.0317357237010713, -0.0779746846814792, 0.14758455772791, -0.236694371980747, 0.322383456029511, -0.354421203825143, 0.271348361691171, -0.0686496323603795, -0.111935946121677, 0.0506071932512554, 0.187751423293305, -0.151116779361549, -0.105329637861739, -0.0547378773808323, 0.0907783830151266, 0.0737100098633439, 0.0679905484243573, 0.00105572353403621, -0.00246296546740165, 0.00397544205417807, -0.00564955995019566, 0.00755604150288948, -0.00977790179570526, 0.0124095207623876, -0.0155494251131696, 0.0192778039960818, -0.0236013410149836, 0.0283326478014186, -0.0328480142646304, 0.0356409152012288, -0.0335906497513774, 0.0209928948730917, 0.0111240435781068, -0.0737103619379566, 0.172920049881468, -0.29397560645892, 0.380142502654543, -0.337967127266944, 0.126329383985085, 0.0918011591263914, -0.0227544373123606, -0.223348281069195, 0.0978998084508429, 0.0985229431891196, 0.136009211663528, 0.019246951286671, 0.0137104542315976, 0.000664892539994948, -0.00155364140760618, 0.00251556193673921, -0.00359331275333065, 0.00484405031270458, -0.00634283880898248, 0.00819035304854474, -0.0105230192978248, 0.0135245303569544, -0.0174346956618854, 0.0225436765119525, -0.0291414873378343, 0.037355012823274, -0.046737249294851, 0.0553824629532655, -0.0583137128991142, 0.0452498877870787, 0.000619663344309905, -0.0976110924543299, 0.244967267990937, -0.384713215853973, 0.38728986779464, -0.166536231121665, -0.0789016040403901, -0.0263872226515028, 0.251557094872695, -0.0142189866288803, -0.0261595155691458, -0.126710529397988, -0.0581633368847999, -0.000353879009470023, 0.000826164671850896, -0.00133570569619506, 0.00190452719483092, -0.00256305330034028, 0.0033528938204406, -0.00433306515965968, 0.00558988008700782, -0.00725238204130924, 0.0095159250686073, -0.0126763684415019, 0.0171739656741304, -0.0236327071217332, 0.0328417928655405, -0.0455297495312535, 0.0615861736201901, -0.0781042605920575, 0.0855815523290343, -0.0631057144402024, -0.0209547644661923, 0.185736548690176, -0.377148497411024, 0.422261088247185, -0.183365005228127, -0.0720103996508314, -0.101761092167458, 0.240560676379476, 0.0639203545487518, 0.087736082170385, -0.0108836295431664, -0.000164408421875022, 0.000382747772703156, -0.000615679528302683, 0.000871478394911646, -0.00116175407830804, 0.00150251592464235, -0.00191690385176152, 0.00243993596040391, -0.00312679301259511, 0.00406746660795102, -0.00541275829734624, 0.00741988748360759, -0.0105295747796924, 0.0154855842402126, -0.0234848898570627, 0.0362525006516517, -0.0556602975211962, 0.0819063446678516, -0.108483276583934, 0.112884432246906, -0.0497088845180968, -0.126233059552775, 0.368416249428575, -0.446310390157001, 0.17114551372518, 0.0593668242512428, 0.197049266627903, -0.154518801148666, -0.0583490819172258, -0.105292613494978, -6.76451011500287e-05, 0.000156765617508479, -0.000250068618448369, 0.000349563613022095, -0.000458085315514148, 0.000579377889486905, -0.000718688135657397, 0.000883924630980979, -0.0010879253641314, 0.00135302352782104, -0.00172044887136173, 0.00226992650144043, -0.00316052963353695, 0.00471438302912514, -0.00758079861521075, 0.0130295597308478, -0.023375035827863, 0.0422516101761645, -0.073543006841404, 0.115829409728927, -0.147950072408844, 0.110351373753368, 0.0754606901702683, -0.370307742311912, 0.459529613088255, -0.125901772736807, -0.0153734148508743, -0.269602531652145, 0.0111614266745888, -0.0402093441249828, 2.47902581617677e-05, -5.70951866074885e-05, 9.00245039689093e-05, -0.000123612414457682, 0.000157905870403003, -0.0001927908982341, 0.000227876397184237, -0.000262356492793444, 0.000294876406634045, -0.000323541489053063, 0.000346527723315519, -0.000364634512836181, 0.000389473941682234, -0.000467006442977283, 0.00074062743833642, -0.00160962154479009, 0.00409501415650954, -0.0105753907269062, 0.0258908879517777, -0.0577034166924668, 0.111515849306327, -0.170588559762965, 0.159805564419169, 0.0422779951515293, -0.39415388591518, 0.453268672435173, -0.0540538988272827, 0.086760903189943, -0.229785957526894, -0.0542685652494967, 8.0934077984123e-06, -1.84942320305497e-05, 2.8727549188327e-05, -3.85218036597673e-05, 4.74979371105903e-05, -5.50328382046264e-05, 6.0088251458429e-05, -6.09328386918094e-05, 5.4675341354595e-05, -3.6475584829561e-05, -1.77525032866279e-06, 7.35801948889829e-05, -0.000200932327941266, 0.000417611891139008, -0.00076801243189078, 0.00128355133566546, -0.00187939621807859, 0.00201469623196137, 0.00023086492645841, -0.0101326700777457, 0.0388038488743881, -0.100270601620075, 0.185149444892905, -0.198420941242411, -0.0376627169974532, 0.447375228475957, -0.405043614814248, -0.00790927348881098, -0.216123522133671, 0.047757194710537, 2.3432817828998e-06, -5.30382787684033e-06, 8.08770061713471e-06, -1.05220339507705e-05, 1.23701861485136e-05, -1.32699356537595e-05, 1.26475033878989e-05, -9.57361117479969e-06, 2.51156773758832e-06, 1.11373862005006e-05, -3.58767837564508e-05, 7.97113340434274e-05, -0.000157210804078803, 0.000295369999521612, -0.000544422690897524, 0.000995736912721247, -0.00180252924736785, 0.00316548545774975, -0.00512130334193355, 0.00662453325812506, -0.00280688692273367, -0.0202976817646234, 0.086799087149091, -0.197081458472335, 0.225503564083673, 0.0780889728764489, -0.5232228834034, 0.284674674292071, -0.0147329351170033, 0.202858306000131, 5.95860509143461e-07, -1.33360129388062e-06, 1.98883957168023e-06, -2.49145613178364e-06, 2.74818456348545e-06, -2.62289246923075e-06, 1.90885844805392e-06, -2.82924699720464e-07, -2.7744102930985e-06, 8.12457788123093e-06, -1.72483832740051e-05, 3.27995721421845e-05, -5.9759750600898e-05, 0.000107944584593525, -0.00019759756496499, 0.000371979491740892, -0.000724964378975097, 0.00145602872073651, -0.00295228388771958, 0.00578452789323743, -0.0100238251248783, 0.0119906102119838, 0.0044653011842032, -0.0754085589739988, 0.211936965454009, -0.234496282783242, -0.187174325076157, 0.57745565813465, -0.0995542078813139, 0.125292668236092, 1.3083391335325e-07, -2.89035739864516e-07, 4.1984433450517e-07, -5.01884359010434e-07, 5.07848061997717e-07, -3.9999675582492e-07, 1.24202979651411e-07, 3.99287248452637e-07, -1.29101735710141e-06, 2.73861491843374e-06, -5.04542969563695e-06, 8.72761916429399e-06, -1.47249851007484e-05, 2.48991238014246e-05, -4.3301221762078e-05, 7.95830009002495e-05, -0.000158454155728258, 0.000345828471117056, -0.000817515507753755, 0.00201596911712222, -0.00488635455451589, 0.0106499166045819, -0.0174243445863057, 0.00738502442033585, 0.0700662984876296, -0.233560926997962, 0.204034815530957, 0.383908471063957, -0.50057022452613, -0.0212886714187395, -2.40848877212467e-08, 5.24240725635662e-08, -7.38378400222952e-08, 8.32999911262793e-08, -7.47341433781038e-08, 4.03465322976719e-08, 3.00773193125273e-08, -1.49992207111446e-07, 3.36972697617966e-07, -6.13432071478295e-07, 1.00663795934588e-06, -1.54696839371904e-06, 2.26312633012402e-06, -3.17630726246514e-06, 4.31767504642557e-06, -5.90209488715482e-06, 9.25587156543846e-06, -2.09330708087647e-05, 6.91391648163701e-05, -0.000263036443462704, 0.000978784838196696, -0.00330397415171971, 0.00942439821705019, -0.0195803889635389, 0.0144197810049968, 0.0744416584872575, -0.25914478457603, 0.084655417343342, 0.622221197935359, -0.179679079013744, 3.51269683554214e-09, -7.51889302632752e-09, 1.02174159829693e-08, -1.07260524311525e-08, 8.05575257893368e-09, -1.07200287333439e-09, -1.14863355919344e-08, 3.08786324131491e-08, -5.7982724967123e-08, 9.23421780101816e-08, -1.29909718723839e-07, 1.57803443699582e-07, -1.42142297771785e-07, -3.08743957923046e-10, 4.683509742391e-07, -1.72868599084671e-06, 4.8459950952335e-06, -1.20708910252722e-05, 2.71543536241977e-05, -5.07675086982644e-05, 4.67127834249101e-05, 0.00021801131727914, -0.0017199609853058, 0.00718095660038266, -0.018833852842601, 0.0156925328643518, 0.0901273560920246, -0.267056292981064, -0.204025887889201, 0.615041369284882, -3.52194399379491e-10, 7.3987325209752e-10, -9.64568628607866e-10, 9.2482084718845e-10, -5.1823693864537e-10, -3.52577699363893e-10, 1.75949812755877e-09, -3.70044547480484e-09, 5.99265415876823e-09, -8.0417893025597e-09, 8.340264790548e-09, -3.35601315744163e-09, -1.50044935109066e-08, 6.54172211855324e-08, -1.92076520841047e-07, 5.03450128394315e-07, -1.27674133467927e-06, 3.24483677748155e-06, -8.36698459964932e-06, 2.16662803405353e-05, -5.3933684606037e-05, 0.00011456797567725, -0.000122119635257932, -0.000560617989978902, 0.00441341607830086, -0.014681759205594, 0.0102418755123234, 0.106060496492379, -0.201744759518295, -0.669111312854256).finished();
}
} // namespace mrcpp
} // namespace detail
