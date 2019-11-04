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
auto get_I_G0_31() noexcept -> Eigen::Matrix<double, 32, 32> {
  return (Eigen::Matrix<double, 32, 32>() << 0.134383135747714, -0.206876427902386, 0.115868903851663, 0.0690695466616842, -0.198438952840076, 0.162187166946154, 0.0139038149348131, -0.178364083934684, 0.178677738388904, -0.00677214437054516, -0.172447313958006, 0.168597066817354, 0.0247276376854553, -0.188066176537303, 0.111577028849834, 0.115636087211027, -0.171287029489397, -0.0418754754457242, 0.178497369143254, 0.0132761155401311, -0.169570639699693, -0.0398573791280161, 0.142499755402582, 0.108573248246701, -0.0494069130372319, -0.13417770534285, -0.0983000757112217, -0.0134001516627925, 0.0512471114160519, 0.0755590127183744, 0.0700121596909028, 0.0472166988244648, 0.126045387958896, -0.206837030358905, 0.146124569973354, 0.017233737705844, -0.169375371583116, 0.198596992300041, -0.0781527607819484, -0.104258526207166, 0.202756989241434, -0.128339015413598, -0.0622636979757709, 0.194347610822018, -0.129513016543029, -0.075867091663308, 0.192645843540715, -0.0677288345503049, -0.147283639899074, 0.143587772503392, 0.087139821576369, -0.16047453125337, -0.0679390352899794, 0.145755829254049, 0.0994369560986605, -0.0877430806947709, -0.142127651549879, -0.0414463592031307, 0.0736966611540461, 0.115219881950797, 0.0926579375991392, 0.0500441467159424, 0.0171801729999827, 0.00216558824777201, -0.117334645279329, 0.203775772318178, -0.171199318772563, 0.0357279486180255, 0.122715094161492, -0.205050882657542, 0.154132604280583, 0.00220995543657731, -0.158478458447803, 0.196971653453271, -0.0786334472350415, -0.107608163894843, 0.197203468837583, -0.0940564666024929, -0.108876153928149, 0.186629835977742, -0.0311346163537479, -0.164705834824232, 0.112217360973163, 0.120482683105715, -0.130263183785445, -0.111722084376468, 0.101508846164809, 0.13813630816093, -0.0113470319290554, -0.12566162047057, -0.109400633663254, -0.025344812931174, 0.0452166356597817, 0.0737962635248817, 0.0697654554639013, 0.0472110883568545, 0.108278177437855, -0.197739940921464, 0.190206177616826, -0.0863570169729896, -0.0633070740795599, 0.180577556305707, -0.198406992529954, 0.100431499242509, 0.0607715805994025, -0.184363296154549, 0.180744729479596, -0.0414154114661932, -0.13310849025709, 0.192418638830874, -0.0680540163698335, -0.127896286631992, 0.176912100106693, -0.00269257762952534, -0.172496795299537, 0.0799854496035118, 0.14330839227345, -0.0906721783766305, -0.141283780112597, 0.0412025358700103, 0.145167152776701, 0.0672694688919599, -0.0572195074750904, -0.112593135954063, -0.0956015260793321, -0.0526446029726672, -0.0181839928267479, -0.00229476512724121, 0.0989039386688619, -0.188819939280752, 0.202473626890559, -0.131348492780379, 0.00267686750997309, 0.128869982185052, -0.201870254618453, 0.176158755802264, -0.0574231770858559, -0.0957156156614757, 0.193704158828505, -0.166469041105887, 0.0199387622283663, 0.144381880990389, -0.186755048677888, 0.0525690377978825, 0.137214975519696, -0.167010224346164, -0.0189897338673813, 0.173918882617063, -0.0473465868847661, -0.156428956203934, 0.0432660499987677, 0.152019084989252, 0.0275275931331421, -0.111838761342408, -0.118019463550586, -0.0370174064631662, 0.038994451542609, 0.0719417474023777, 0.0695042502798557, 0.0472050655424155, 0.0892405580599747, -0.177148006251565, 0.207569298743255, -0.167766652250795, 0.0683835403514129, 0.0577272439043443, -0.163811257413622, 0.204678548813492, -0.156259777720198, 0.0324081936878177, 0.111121251498967, -0.195174579836058, 0.15966342025921, -0.0135062102606303, -0.145661133680291, 0.182999529189103, -0.0463375849976179, -0.140177192110667, 0.15805415505054, 0.0362033362270677, -0.170702844910873, 0.0135437711724243, 0.159121525316699, 0.0100155958791617, -0.137795571488071, -0.0902529466748143, 0.0394443520810361, 0.108755740373782, 0.098140411104902, 0.0551794678670515, 0.0191842100069727, 0.00242385745080413, 0.0793175199277532, -0.162896785142946, 0.205315907726933, -0.193237484586213, 0.126991524799588, -0.0221238818390821, -0.0920566084850371, 0.178346452752742, -0.202416820693211, 0.147162114193688, -0.0262661678647799, -0.110922850808881, 0.192698696031053, -0.161124610071975, 0.0200707966125852, 0.139248356389364, -0.181305376618278, 0.0470903689318201, 0.139218625271505, -0.149738478941555, -0.0514165704686033, 0.163102759722364, 0.0223358722076312, -0.148649463699068, -0.0644248551031026, 0.0932890753024526, 0.123964052531356, 0.0482898071564964, -0.0326048692217581, -0.0699993263514561, -0.0692276335804136, -0.0471990721391223, -0.0691661584897917, 0.146279182772539, -0.195801053522588, 0.206108289765575, -0.17242553139529, 0.0986540494028152, 0.00135169681749754, -0.104204896163471, 0.180319389638069, -0.201201789400808, 0.150675176568981, -0.0375029196811252, -0.0969903890191173, 0.186184107689367, -0.168657938298239, 0.0370649468528915, 0.126167361442159, -0.180434317294903, 0.0521312824593287, 0.136266537165996, -0.140979179262579, -0.066851684513944, 0.149891922534961, 0.0601206317452863, -0.120562458594386, -0.109407421570034, 0.0207584302855029, 0.103762382224678, 0.100253278908216, 0.057653471926258, 0.0201756196078922, 0.0025550537569989, -0.0588235949392055, 0.127554356327948, -0.179387984485018, 0.20557385614489, -0.200009806828094, 0.160371853972434, -0.0897024257821195, -0.00206220498144345, 0.0973528952358047, -0.172172185738035, 0.200671122823409, -0.164121059182469, 0.0634229404569463, 0.0697050235523177, -0.173054136482504, 0.178218197337024, -0.0613586053394195, -0.107151088255609, 0.178762862330042, -0.0585940409971827, -0.133093667887658, 0.130241991356747, 0.0840368181569778, -0.128308605712959, -0.0967908160810076, 0.0708768615780794, 0.127031596214311, 0.0590987981713632, -0.0261207768032235, -0.0679385169470914, -0.0689577793958424, -0.0471842057035441, -0.0483459933136691, 0.107054257970929, -0.156749285260145, 0.191790587643232, -0.207028729110604, 0.198143318696536, -0.162570910906088, 0.100918667288271, -0.0187344418040178, -0.0718170694544874, 0.151358020271211, -0.195403243912531, 0.181088355866446, -0.0994200977931745, -0.029788225123671, 0.150168318263238, -0.184979725205782, 0.0891797060508941, 0.0834593565532637, -0.175044569978769, 0.0636073445370794, 0.131431153426136, -0.11558601446214, -0.103056941134951, 0.0943736058769326, 0.124230274599021, -0.00183921396332428, -0.0974639711767148, -0.102106545394845, -0.0599456929766813, -0.0212382569367196, -0.00265435652023503, 0.0378465086170736, -0.085265734424617, 0.128977724206522, -0.166046371001387, 0.193230664215567, -0.206827615627249, 0.202884882986461, -0.17780645178709, 0.12950127568179, -0.0591754723713092, -0.0263639674734451, 0.11256214737691, -0.176700833942066, 0.191827970037265, -0.137822900678522, 0.019579484340001, 0.115976047504404, -0.184764015939903, 0.116530984457589, 0.0572313247570595, -0.168878218553084, 0.0644092299355934, 0.132757772601786, -0.0945541618191418, -0.121295211010322, 0.044623656820782, 0.12802690858155, 0.0686964782407234, -0.0190485959851752, -0.0661855122351645, -0.0684818601386492, -0.0472935488436858, -0.0275783505194187, 0.0630154521798997, -0.0978500141552723, 0.131090719436336, -0.161380189683012, 0.186687793912035, -0.204134464175074, 0.209943597075582, -0.199659457569281, 0.168865709364303, -0.114697409940812, 0.0383701351433568, 0.0514529425839195, -0.135647586007256, 0.184898444506529, -0.167934741581785, 0.071534347105294, 0.0723332665041892, -0.175727888512343, 0.140187911944233, 0.0313249115013106, -0.160853090759066, 0.0583765938300774, 0.137697000703188, -0.064229813452849, -0.131794674777748, -0.0192018169334196, 0.0920023905408672, 0.102471556380839, 0.0632890960462443, 0.0217369304640091, 0.00302936427113623, 0.0180413776854583, -0.0417091126101403, 0.0661714890524299, -0.0915373761308815, 0.117751148319417, -0.144356997513957, 0.170267852860703, -0.193484248612763, 0.210796342215926, -0.217581446728196, 0.207938418571647, -0.17557808153143, 0.116042283879345, -0.0307206161197231, -0.0677104492163833, 0.151024814142716, -0.178589194027647, 0.116555313755172, 0.0248491612772738, -0.159534575813978, 0.158810165125926, 0.00889176799804197, -0.152361504009151, 0.0429355516714233, 0.144861065871596, -0.0221140736825441, -0.122377023303954, -0.0822624075041307, 0.0150980850712096, 0.0625925884712234, 0.0700464467818126, 0.0471743141215093, -0.00997385316970169, 0.023303674215648, -0.0376894991286602, 0.0536307270140643, -0.0716493676106221, 0.0921918975156129, -0.115509518929431, 0.141454965867004, -0.16915871746906, 0.196562477752728, -0.219840770519859, 0.232874905269032, -0.227206454169119, 0.193298061909334, -0.124296923784696, 0.0232181477102687, 0.0877431784836104, -0.162606050081042, 0.145945592788243, -0.0190576100204645, -0.140941028099279, 0.173231729157183, -0.0068982578402744, -0.144797083980098, 0.0153640322280102, 0.148851253789464, 0.0308281815477037, -0.0787391288648003, -0.111323321868539, -0.0631574288142023, -0.0258527449743137, -0.00212489709220042, -0.00407117690965028, 0.00963814383417411, -0.0159576592474568, 0.0234788458624285, -0.032748335931665, 0.0444124551052736, -0.0592146945452915, 0.0779534116581482, -0.101359220892677, 0.129829647689934, -0.162936461004594, 0.19862239674553, -0.232085253496976, 0.254616003340773, -0.253255785088374, 0.213093962115025, -0.124812161906296, -0.00121660565807863, 0.119904061612267, -0.155406678516262, 0.0532267267518645, 0.125802741067531, -0.18527237744689, 0.0127568201481722, 0.137611577483161, 0.0267603958419221, -0.137872368432319, -0.0828803465215285, -0.00182943213194848, 0.0704894016962583, 0.0683815859127036, 0.051504217751563, 0.000561923921547766, -0.00142085315808545, 0.00261516199983735, -0.00438498704250836, 0.0070517783226913, -0.0110558772319523, 0.0170042309197035, -0.0257230341141909, 0.0383019883577613, -0.0560972674458856, 0.0806241701198468, -0.113213085817378, 0.154231732259198, -0.201642178335154, 0.248809124144054, -0.282110521423044, 0.280422642275437, -0.220889616680848, 0.0963683491375961, 0.056935081276877, -0.146038170787875, 0.0744513169029673, 0.119224026581748, -0.195767801408849, 0.00528143032307582, 0.125513173722867, 0.0819692560064261, -0.095377213960521, -0.103083861926396, -0.0831177621198546, -0.0210743733737948, -0.00589971023104901, 0.000954022902421568, -0.00217152427105261, 0.00334441070745175, -0.00441243788854857, 0.00528060382906306, -0.00578853578657465, 0.00566956145301308, -0.00449012465122452, 0.0015626768301216, 0.00417101329963326, -0.0142755836934463, 0.0309306240333689, -0.0568884389222161, 0.09501675727021, -0.146965668974166, 0.210374164434241, -0.274414673896544, 0.315283859798873, -0.297462020421722, 0.191641524468991, -0.0162747325627123, -0.123134893366676, 0.0822062727405939, 0.125006120167586, -0.202949160000717, -0.0177710327720269, 0.0968151421930228, 0.136242854274432, -0.015571902933381, -0.0542231724636321, -0.0871314364043303, -0.0510500402237187, -0.00123275796542286, 0.00285850526127559, -0.00456180669089441, 0.00637164213832642, -0.00831679067747412, 0.0104128374947091, -0.012645916048458, 0.0149433594233042, -0.0171211542777985, 0.018793189962307, -0.0192218402002572, 0.0170884685170541, -0.0101798107050791, -0.00494640007849962, 0.0330768573161251, -0.0796406748190234, 0.148064905362284, -0.233801142880821, 0.315124897198228, -0.346825622708293, 0.274294775568478, -0.0893275027196074, -0.094310029503257, 0.0774022608181053, 0.145526730593875, -0.20102886786983, -0.0537235908709309, 0.0370478002738426, 0.155218576111761, 0.065878447312391, 0.0439401678969661, -0.00145690286723185, 0.000975107177361262, -0.00227200230164528, 0.00365894643375007, -0.0051832782488302, 0.00690487721297365, -0.00889466161576649, 0.0112353088688331, -0.0140189674055528, 0.0173370112518665, -0.0212523914474016, 0.0257366113646967, -0.0305392536076863, 0.0349384304265756, -0.0373038746610903, 0.0344236173047191, -0.0206898482121688, -0.0123086239262767, 0.0742578236722746, -0.169777678481065, 0.28454760192745, -0.368267058385217, 0.339106946173032, -0.153625599545155, -0.0675481004037135, 0.0605292329478602, 0.18075141445045, -0.179204753636884, -0.0880468858596115, -0.0553665931266302, 0.0992933599959353, 0.0692837285307008, 0.069064645992037, -0.000614305316491719, 0.00143300435798279, -0.00231310061663577, 0.00328924169627088, -0.00440763348140655, 0.00572812433019225, -0.00732992861398273, 0.00931938987113496, -0.0118394606358845, 0.0150793042507107, -0.01927874768856, 0.0247136925892098, -0.0316302128422924, 0.0400598203711713, -0.0493910774352989, 0.0575090635014831, -0.0593365386819756, 0.0450037531679502, 0.000775832682175413, -0.0937093746632356, 0.232238900207908, -0.366534615858777, 0.385819943444003, -0.202987758318085, -0.0494125753140062, 0.0294719218237408, 0.225153600967115, -0.124535029466268, -0.088510608922833, -0.140222374785418, -0.0126943385949999, -0.0156157649262892, 0.000330993772785924, -0.000771382588560575, 0.00124313080931989, -0.00176406242218258, 0.00235860106827285, -0.00305946758477516, 0.00391202269293168, -0.0049810950013634, 0.00636149984659778, -0.00819404328164476, 0.0106891045656852, -0.0141589757633401, 0.0190552831241138, -0.0259923382927281, 0.0356968917829681, -0.0487348087981056, 0.0647014219056708, -0.0803678613472934, 0.0863762126478002, -0.0635029595540096, -0.0159041400431394, 0.168200867749989, -0.349856367969658, 0.417852243388466, -0.232940920936588, -0.0431354123616442, -0.021753977755123, 0.261629783035068, -0.0358015364377634, -0.0199234409541094, -0.132011491405982, -0.0547244450441254, -0.000157054713088091, 0.000365058254621734, -0.00058553941088224, 0.000825249299322165, -0.00109360167616201, 0.00140327488204914, -0.00177208839731839, 0.0022262010487432, -0.00280553706584147, 0.00357311871170277, -0.00463123734958986, 0.00614936386983465, -0.00841130773667364, 0.0118909582589782, -0.0173611446598915, 0.0260109623074284, -0.0394492662307032, 0.0592220617946645, -0.0849893794650074, 0.110014170720538, -0.113552325246148, 0.0560321535469154, 0.10189656419499, -0.328339588731618, 0.440406245215474, -0.239263360187995, -0.0456339101528444, -0.100112815189602, 0.256070379380519, 0.0493584673319457, 0.0926441265580969, -0.0142588832607724, 6.65321592192481e-05, -0.00015401006511635, 0.000245158347781921, -0.00034163033319291, 0.000445775234665638, -0.000560624076025374, 0.000690289207173768, -0.00084073396249473, 0.00102122619992668, -0.00124715509326544, 0.00154561320978056, -0.00196661732244824, 0.00260576577619189, -0.00364962568956795, 0.00546432978333692, -0.00875925173823431, 0.0148574069529948, -0.0260386694927247, 0.0456409197512585, -0.0768202226048032, 0.117445391418821, -0.148122266885557, 0.117830252232112, 0.041381653133414, -0.312947928661068, 0.457868447327716, -0.216834454558649, -0.0427548448333303, -0.200269559385493, 0.170348653119832, 0.0496209199367523, 0.107867724345551, -2.53165878583366e-05, 5.82773180838293e-05, -9.1807215224547e-05, 0.000125912951968537, -0.000160633293238005, 0.000195877356250426, -0.000231329671636391, 0.000266339541957612, -0.000299802148348456, 0.000330102224970082, -0.000355353096939743, 0.000374594408160754, -0.000391718225622659, 0.000426635476627617, -0.000544692223686144, 0.000929723802179277, -0.00205432187499357, 0.00504302216302366, -0.0123382933461119, 0.028568178817293, -0.0605077928934352, 0.112332933512213, -0.169051189922336, 0.168369788529567, -0.00647509584685068, -0.314953627062411, 0.469976704302081, -0.161382678423303, -0.00597795215835077, -0.277733672722834, 0.0228731554834059, -0.0440241674580433, 8.66474561699165e-06, -1.98062738865168e-05, 3.07899948789428e-05, -4.13567961384846e-05, 5.11653138871208e-05, -5.96733128351358e-05, 6.60034450718458e-05, -6.87339051729592e-05, 6.55583870720036e-05, -5.27288183383733e-05, 2.4147004957115e-05, 3.0079230450034e-05, -0.000125786492817781, 0.000287453734839918, -0.000549821681047976, 0.000951801653105568, -0.00150114378468535, 0.00204910319818531, -0.00192693982157348, -0.00094203537905352, 0.0117438772212635, -0.040560704232771, 0.0992719338019845, -0.180314504539096, 0.208807069060714, -0.0345241061093751, -0.345108731181379, 0.466328501147302, -0.0792353869977574, 0.0935358682772314, -0.239017373066157, -0.0482199509257726, 2.66098477585738e-06, -6.03131085428206e-06, 9.22448750094245e-06, -1.206853783299e-05, 1.43373447980831e-05, -1.56954844869037e-05, 1.56274415713104e-05, -1.33238609623515e-05, 7.49009316504418e-06, 3.98548627210579e-06, -2.46202853882389e-05, 6.04044693965684e-05, -0.000121762133300178, 0.000227166392964046, -0.000409683294576583, 0.000728122552005278, -0.00128311686799905, 0.00222885965385052, -0.00373269038386512, 0.0057142845647865, -0.00690752374752149, 0.00239581218783071, 0.0205896401191237, -0.0828598313229301, 0.187118040061644, -0.241008770061652, 0.032501391323151, 0.410223464120716, -0.421373112047261, 0.00831981311511078, -0.222877722387905, 0.0535338587699245, -7.28777806202985e-07, 1.63547489999858e-06, -2.45308298792609e-06, 3.10676678039884e-06, -3.50020331224196e-06, 3.49675271395537e-06, -2.89476882162073e-06, 1.38834836363383e-06, 1.49840263805127e-06, -6.52595563720348e-06, 1.49471517169749e-05, -2.88994622582833e-05, 5.21754399197799e-05, -9.17921009487935e-05, 0.000161281943941782, -0.000287704326503186, 0.00052648505241071, -0.000991399334331341, 0.00190767438274019, -0.00367351812725398, 0.00679098830754089, -0.0110940195392475, 0.0127304053413422, 0.00300478390806834, -0.0672087591155247, 0.195185359737662, -0.264845606798593, -0.0167364291811667, 0.502138347344314, -0.301674654754332, 0.0252898831603858, -0.206914130280499, 1.76084648250739e-07, -3.90651160137693e-07, 5.72671913428295e-07, -6.9703147091463e-07, 7.32483941488248e-07, -6.36867676427594e-07, 3.51129932501938e-07, 2.09648545008069e-07, -1.17050892404526e-06, 2.72038147971924e-06, -5.15392439018958e-06, 8.94996299307482e-06, -1.49292522464049e-05, 2.45957027199251e-05, -4.09263860234801e-05, 7.03062123348819e-05, -0.000127450124002745, 0.000248107951319143, -0.000521282466833848, 0.00116556453726807, -0.00268153250441528, 0.00602688519962405, -0.0122358784151075, 0.0191797031532133, -0.0108872041261042, -0.0559394225349851, 0.210028812610741, -0.273089086874247, -0.138700196692209, 0.572933846769388, -0.113736335636658, 0.130662923508879, 3.68733338496354e-08, -8.07452139125941e-08, 1.15255928179505e-07, -1.33664691863433e-07, 1.27975725219337e-07, -8.8091413508498e-08, 9.37966773284524e-10, 1.50590332488788e-07, -3.88887175510578e-07, 7.43029636281804e-07, -1.25011889514375e-06, 1.95622223201426e-06, -2.9168085546936e-06, 4.19916871297443e-06, -5.90244616335246e-06, 8.26588566182685e-06, -1.21469839906312e-05, 2.09161576669932e-05, -4.74319459756771e-05, 0.000138025032036321, -0.000448067127642898, 0.00144848112811186, -0.00434468526619832, 0.0112790019080158, -0.0222869040818875, 0.0204848461530157, 0.052538412948203, -0.235200874639045, 0.24191282170187, 0.353780279956305, -0.506967136708534, -0.0125514210041327, -6.49399785697462e-09, 1.40134800234744e-08, -1.93974214930326e-08, 2.12083772862769e-08, -1.78482843728433e-08, 7.48239620144401e-09, 1.19679380283667e-08, -4.27213978419206e-08, 8.67862345592912e-08, -1.45066496083585e-07, 2.15282153033232e-07, -2.87301416499919e-07, 3.32801786105603e-07, -2.82445764021568e-07, -2.43656001166633e-08, 9.48687701615903e-07, -3.27955203713477e-06, 8.65397157305062e-06, -2.00554453578948e-05, 4.09166042689209e-05, -6.47616894322589e-05, 2.16316397376275e-05, 0.000429847525414472, -0.00250234091451247, 0.00916835596349729, -0.0227554163448836, 0.025284741909712, 0.0605520230500304, -0.266888553209824, 0.117305830542317, 0.612393335896625, -0.187270012918549, -9.0856261836405e-10, 1.92877793166678e-09, -2.5772518533667e-09, 2.62120585924925e-09, -1.82375724624202e-09, -4.92615360977552e-11, 3.19812070409756e-09, -7.71512162991489e-09, 1.3424485404352e-08, -1.95466000573273e-08, 2.39970788055958e-08, -2.19077874117048e-08, 2.43952475358318e-09, 5.82890349514425e-08, -2.13436319877599e-07, 5.84089962448513e-07, -1.45438247436179e-06, 3.51069244813988e-06, -8.44117562550868e-06, 2.03554265593541e-05, -4.85435204699643e-05, 0.000109260871453941, -0.000204201374078844, 0.000163684275815645, 0.00100618124374523, -0.00662387449108296, 0.0209315793764293, -0.0242333485350276, -0.0816045060414741, 0.280542431581384, 0.185186023897656, -0.615850978429964, 8.7592520709311e-11, -1.82607915321414e-10, 2.34343010890984e-10, -2.17818731266129e-10, 1.10582024625577e-10, 1.04250876847538e-10, -4.30922944070885e-10, 8.46935141602687e-10, -1.27565758200809e-09, 1.53331397197711e-09, -1.22534307927953e-09, -4.60455751757056e-10, 5.17996050484675e-09, -1.63483679392734e-08, 4.12175858318351e-08, -9.59042630091374e-08, 2.18460024237464e-07, -5.05342708473892e-07, 1.21950101033107e-06, -3.12286166628148e-06, 8.49752604913223e-06, -2.40692555945944e-05, 6.76263090204983e-05, -0.000171712012949371, 0.000309226909028853, 0.00012149491288558, -0.00397066384400976, 0.0160375507535623, -0.0158295951863957, -0.103738904778631, 0.214970931423341, 0.665208274065568).finished();
}
} // namespace mrcpp
} // namespace detail