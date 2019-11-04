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
auto get_L_G0_28() noexcept -> Eigen::Matrix<double, 29, 29> {
  return (Eigen::Matrix<double, 29, 29>() << -0.0270566480764053, -0.0468634891508447, -0.0596602195596015, -0.0666139703071929, -0.0644452220604183, -0.0479622399421162, -0.012645443962329, 0.0405297976454582, 0.0984833209915629, 0.131952125543185, 0.103504300479784, -0.00234076256049541, -0.134523725173483, -0.167232288490688, -0.00791120502378967, 0.20321252444226, 0.11862447451755, -0.232143202573217, -0.10595572976593, 0.368916223962043, -0.328096907259969, 0.169930465717401, -0.0594172393779041, 0.0148003595813558, -0.00267618459028862, 0.000350403116692284, -3.248012246049e-05, 2.02575184274583e-06, -7.63798078664119e-08, 1.18236113465291e-269, -0.0029781978737824, -0.0115345107668696, -0.0269982963171618, -0.0492238525966124, -0.0752100628045357, -0.0974028126722079, -0.103024239289136, -0.0769798936859322, -0.0112731091629928, 0.0793322333432674, 0.145452119789027, 0.118717318548918, -0.0233842051656483, -0.17487011180737, -0.133728957018368, 0.126720259702737, 0.21611868587915, -0.149650717727931, -0.218083190834033, 0.380176180348484, -0.280220866943655, 0.129389846509728, -0.041539002798914, 0.00965650161443481, -0.00164691689374471, 0.000204933724325244, -1.81567597578199e-05, 1.08729028832708e-06, -0.0253376470002513, -0.0438860919486805, -0.0559671671950424, -0.0629577752791191, -0.062269585028865, -0.0495652062658768, -0.0206670030172475, 0.0248994148287537, 0.0787651593136006, 0.119515488410574, 0.115678169661163, 0.0439878985573637, -0.0769036016272225, -0.162530321218343, -0.104167640965506, 0.0935922024464958, 0.20412569624176, -0.00458947759713091, -0.25460972717893, 0.0355834136552155, 0.301220357447656, -0.365072930581891, 0.230855363053681, -0.0962635781645759, 0.0285738611712393, -0.00622735749352402, 0.00100500903267863, -0.000119143394447605, 1.01091688837592e-05, 8.40347220891578e-268, 0.00262219141342609, 0.0101557036747673, 0.0238025822229956, 0.0435905392024454, 0.0673076370010046, 0.089125115776392, 0.0988252304964942, 0.0834206112187361, 0.0334309666904036, -0.045508115763702, -0.120882091544116, -0.136307454349819, -0.0485398053535969, 0.105207292867252, 0.177316968316017, 0.0328617026320534, -0.195465430295178, -0.120427082863503, 0.230358552292926, 0.0857752016491865, -0.350883157942175, 0.332134924580696, -0.184441650475235, 0.0701640761657582, -0.0193702476642802, 0.00397340009913142, -0.00060855606467679, 6.88856522459395e-05, 0.0238240825599733, 0.0412645214375894, 0.0526994480185135, 0.0596437483309952, 0.0600420997624833, 0.0502499562792764, 0.0264811655459168, -0.0125444694708303, -0.061597839798036, -0.105079319176006, -0.117419763973511, -0.0738763133522174, 0.025384076589626, 0.12956245146768, 0.144948627281466, 0.0146398831237921, -0.162197086876417, -0.147059686830857, 0.116751590538309, 0.212079839230531, -0.155188074712543, -0.194753427053227, 0.368938551874436, -0.289329474459595, 0.143498158792281, -0.0502124894514209, 0.012958026186357, -0.00251059901202486, 0.000365863979474352, -1.97781785922639e-266, 0.00232643793460052, 0.00901025537669299, 0.0211411528489442, 0.0388584200942544, 0.0605179539589488, 0.0815697420297307, 0.0937861456278756, 0.0861132702338925, 0.0488788732947547, -0.0176734984355557, -0.0930771507501225, -0.133833780501015, -0.0928757741606365, 0.0324138311373645, 0.154057227148337, 0.128810488164245, -0.0711558049868482, -0.204651947170754, -0.000917019801352729, 0.249614885932478, -0.049263792067293, -0.278836159435656, 0.361105148751309, -0.243107156310942, 0.109071872083884, -0.0353467521072707, 0.0085641327644497, -0.00157211521095947, -0.0224812151936728, -0.0389386069313306, -0.0497884773047589, -0.0566337857220584, -0.0578356066459155, -0.0503139368900305, -0.0306729176231298, 0.00278968914709755, 0.0469486506985887, 0.0904780752900847, 0.112977848029234, 0.0911312892026791, 0.0153941037018768, -0.0874410205517449, -0.146759376195843, -0.0880371477361057, 0.0748695152305227, 0.180280804357822, 0.0518321865267592, -0.188681627170441, -0.11949548165406, 0.229403809567424, 0.0658080552772615, -0.33274174094581, 0.334698248984958, -0.198088461211687, 0.0812079359313152, -0.0245133733703651, 0.0055976618941316, -2.13276635392652e-265, -0.0020780872327731, -0.00804839724449645, -0.0189016963609578, -0.034848278353904, -0.0546590406488161, -0.0747451814731589, -0.0884333459553285, -0.0863568143237862, -0.0592866257790237, -0.00439370708831289, 0.0662008550482259, 0.12029551595581, 0.114592814844478, 0.0265485626822401, -0.101994578125413, -0.157540511415817, -0.045736890913304, 0.148629741544508, 0.155744324210362, -0.109771386480008, -0.206969812006355, 0.161364199209143, 0.171882782043638, -0.357007489421858, 0.29697467497097, -0.157165742729808, 0.0593535983659946, -0.0167708394071872, -0.0212840112195069, -0.036864988821052, -0.0471845612788214, -0.0538988267011645, -0.0556977902008616, -0.0499638667305794, -0.0336669423301286, -0.00491227932075261, 0.0345893827574048, 0.0766463656052454, 0.105142817418406, 0.0993420868058138, 0.0452242733696984, -0.0463322070884567, -0.126534640284753, -0.124515993065994, -0.00876422463716939, 0.139024495643395, 0.145448924185204, -0.0523930280691614, -0.203665653791635, -0.00334777340412255, 0.244735355782028, -0.0630488975396976, -0.256764316789777, 0.356016017252419, -0.25415476288679, 0.121824726784242, -0.042666513245025, -1.18239474440615e-264, 0.00186883061321494, 0.00723794984186405, 0.0170116005963471, 0.0314442874127693, 0.0496137648301352, 0.0686612517697724, 0.0831313963707512, 0.0850885227876377, 0.0660239216291509, 0.0214591991505233, -0.0421477453511913, -0.101678350145933, -0.120336635036007, -0.0676609557330575, 0.0451987561618764, 0.141628782395337, 0.116481224546281, -0.046548584532974, -0.179157902986026, -0.0660662374583656, 0.183223747602889, 0.116666603031487, -0.22909475714962, -0.0462995743529978, 0.31478388690838, -0.336204214188264, 0.211065189944144, -0.0925545770775629, 0.0202773452209003, 0.0351213921652134, 0.0449914501206907, 0.0515777576589273, 0.0538296585890164, 0.0495036715373795, 0.0358932278996178, 0.0110413231840347, -0.0242916302261263, -0.0641984208321382, -0.0959807589795171, -0.101715041005377, -0.0658483913148088, 0.0107397216207814, 0.0967980133201938, 0.133201541162111, 0.0698089182506636, -0.0703148723970054, -0.16124559985128, -0.0707750533764406, 0.136022700261514, 0.161957631202624, -0.105437682560795, -0.202143917075698, 0.168213162908436, 0.150852063775424, -0.346593635999558, 0.304991518831814, -0.171292973994237, -3.46280000668771e-264, -0.00170868981640487, -0.00661772720277026, -0.0155642840161204, -0.0288324720798559, -0.0457235341326921, -0.0639179237990669, -0.0788780660085478, -0.0838007734352272, -0.0709090839892767, -0.0348771085749921, 0.0216146373872116, 0.0823080928443073, 0.117041918352739, 0.093719265547914, 0.00491142228247375, -0.104444102955, -0.142957708839853, -0.0450445518853008, 0.122330553813773, 0.158853656928828, -0.0364888961396735, -0.204983111047251, -0.00532216195910772, 0.244113623481304, -0.0751595960849906, -0.243112719992276, 0.359202508044787, -0.270452336650141, 0.019899477669356, 0.0344669063674069, 0.0441862909629819, 0.0508133461234579, 0.0534880310691096, 0.0502303933971205, 0.0385620285307843, 0.01649015903709, -0.0158762445645592, -0.0542361887447112, -0.0883991861717687, -0.102792848094727, -0.0815434858598236, -0.0192920639355315, 0.0656481886627315, 0.126769439377723, 0.109212186701833, -0.00110097997598963, -0.13012955790683, -0.141742936652092, 0.0189365744965487, 0.181515338036098, 0.084165574797432, -0.183134103265027, -0.124413596838253, 0.23642511507236, 0.0435654264902073, -0.328607292673035, 0.36554697161584, 5.47255917253911e-264, -0.00163637721975844, -0.00633766172023764, -0.0149147149597041, -0.0276846484573377, -0.044105152132883, -0.0622158851587773, -0.0780817261502404, -0.0856370827963497, -0.0775691588382888, -0.0479427910238078, 0.00322099165704221, 0.0646776412265438, 0.111723742793077, 0.112793012334538, 0.0489511986766192, -0.0594196732886744, -0.141567621790811, -0.113258073920253, 0.0342320906606089, 0.168102056171303, 0.106021738031825, -0.123999585131603, -0.187884966505501, 0.0930679016097814, 0.229974136282756, -0.166166242065004, -0.201000891550738, 0.426969301876927, -0.0205939264129684, -0.0356697268745959, -0.0457614853513189, -0.0527829671032318, -0.0560155841759839, -0.0536369290034242, -0.0432798236042057, -0.0228639717024471, 0.00802717262494862, 0.0462909082290625, 0.0835801997632912, 0.106088168956062, 0.0978338536387562, 0.0489505986469021, -0.0324075752349786, -0.11163526273943, -0.135453539027957, -0.0659536236930137, 0.0701007001353544, 0.163826862068786, 0.0987028938834434, -0.0973192694471044, -0.194749103232018, -0.0085483995750043, 0.228394192558137, 0.0637708946497139, -0.282481298748287, -0.0111792612346128, 0.437343252957096, -5.12140383363304e-264, -0.00162330457155649, -0.00628703157146066, -0.0148047395128043, -0.0275363051168853, -0.0440717648003449, -0.0627323307859433, -0.0800428912195478, -0.0904911474783274, -0.0870913886648811, -0.0633712059454385, -0.0171227460483879, 0.0447419437859739, 0.1027512610859, 0.127400770863835, 0.0922418643917997, -0.00315727940895076, -0.113306491298907, -0.155798766926427, -0.0698157486582186, 0.0999476014003935, 0.18753942942485, 0.054409618835388, -0.180442671721569, -0.173714003158125, 0.145482567926984, 0.252235582055975, -0.179107022712952, -0.399491985619599, -0.0218111786246426, -0.0377780695508412, -0.0485029858940261, -0.0561197164995655, -0.060057468071213, -0.0586424576839743, -0.0496087945437861, -0.0307946756203319, -0.00129836183088729, 0.0369022890234235, 0.0772640663329182, 0.107925423495263, 0.113476316906433, 0.0808174823204101, 0.0090813202538038, -0.0802848302234418, -0.142302604029011, -0.126984917147283, -0.019281956220132, 0.122287171743647, 0.177128449122081, 0.0603764441242205, -0.146497528877249, -0.203331663609187, 0.0208431871652291, 0.261396579172909, 0.100459023038448, -0.315804730653442, -0.330316348764071, -3.19964240965326e-264, 0.00160714784717524, 0.00622445684700281, 0.014666948052236, 0.0273381158649203, 0.0439658585045949, 0.0631686873924885, 0.0819696948126849, 0.0954951288062701, 0.0972577672857836, 0.0805391720201608, 0.0412664400713622, -0.0178284818390223, -0.0832554373590792, -0.130202409023383, -0.129499584808595, -0.0642438452565518, 0.0488995676760611, 0.149731741446698, 0.157975172712482, 0.0371723977210086, -0.138964259617896, -0.202433177986177, -0.0441178450887932, 0.202639906643721, 0.219933620588836, -0.0960837214221835, -0.374216155110975, -0.249795334476527, 0.0232074894215666, 0.0401965507942705, 0.0516490661223961, 0.0599550136481734, 0.064720913111681, 0.0644596297535708, 0.0570569685648214, 0.040332335657608, 0.0129633103334648, -0.0241713937060266, -0.0664520160739812, -0.104434312849596, -0.124374019532257, -0.111738856597191, -0.0584324483635513, 0.0277431411029431, 0.116571956276758, 0.160376989074867, 0.117454259879131, -0.0105114558025888, -0.152321083430005, -0.191969678961317, -0.061335916263354, 0.156492987212591, 0.243681289755002, 0.0553665122139789, -0.25761378121658, -0.360042438945927, -0.173726020126317, -1.42266609179029e-264, -0.00157429408533102, -0.00609721477451988, -0.0143769364240825, -0.0268571602401737, -0.0434091136452301, -0.0629714239219752, -0.0831224606664093, -0.0997503349274164, -0.10710698251793, -0.0986397746639129, -0.0689780275500694, -0.0171455371620388, 0.0496878896320129, 0.113793667637719, 0.148826824505704, 0.129044951486351, 0.0457609194171838, -0.0756399939530137, -0.17257421873028, -0.17164971493741, -0.0444167174685963, 0.141507760099445, 0.23710794165106, 0.125265771101296, -0.140172096897158, -0.337779866701735, -0.29790438585055, -0.111306542909211, -0.0248706068431925, -0.0430771546674796, -0.0553963346482455, -0.0645233728209118, -0.0702773630312573, -0.071402020184527, -0.065995842544492, -0.0519432689451826, -0.0276068993886378, 0.00713519099263579, 0.0495967114336898, 0.0931011941422863, 0.126638160675998, 0.136378901201306, 0.109974326856966, 0.0436181597231069, -0.0502100255126199, -0.139166838079133, -0.178113091836636, -0.130666566776621, 0.000416109441565486, 0.15369810355864, 0.227157207635001, 0.143760699458464, -0.0714179596691004, -0.279977928774175, -0.333390067776025, -0.217042475170014, -0.0656292863784367, -4.51916992166535e-265, 0.0015223195326041, 0.00589591819738193, 0.0139121917448118, 0.02604908581946, 0.0423215408278011, 0.0620017673211326, 0.0832665268392768, 0.102875245075447, 0.116062846370922, 0.116915708936385, 0.0995327315644594, 0.0601643299749108, 0.000160725947999359, -0.0711111476181062, -0.135081220168489, -0.166801403557934, -0.143525276897488, -0.0582250598300769, 0.067405985705756, 0.180530991874682, 0.215199623945995, 0.130518779988965, -0.0507637893185834, -0.238012076561628, -0.32497166622874, -0.271677651274872, -0.140618201160385, -0.0354935500260825, -0.027001639252986, -0.0467682110738179, -0.0601949382797544, -0.0703595675838611, -0.0773395105305906, -0.0801623733316834, -0.0772134207603992, -0.066550906085312, -0.0463775075327885, -0.0157613123575826, 0.0243997884877207, 0.0703266972094072, 0.114592431450216, 0.146244949078272, 0.152543205656477, 0.122815147490569, 0.0541589764848231, -0.042714542402315, -0.140845673174329, -0.201670526862068, -0.189185940175311, -0.0904364092881892, 0.0683516285763441, 0.224605777091469, 0.308731916733223, 0.287477278978366, 0.188902658459999, 0.0812011062033558, 0.0175073075840794, -9.89019965379473e-266, -0.00144394109877138, -0.00559235982844598, -0.0132056840622319, -0.0247855286847815, -0.0404842318183561, -0.0599104020042269, -0.0818667728244625, -0.104076137759029, -0.12299479758165, -0.133866557801388, -0.131211455936529, -0.109932753033746, -0.0671090290544668, -0.00426509801322578, 0.0705172419201127, 0.141770700629324, 0.188473268804231, 0.18951561000481, 0.132349660261849, 0.0219842015690421, -0.114793967695335, -0.235233468979446, -0.29767639839468, -0.283131231295436, -0.207610207844039, -0.113355833617774, -0.0416539765780895, -0.00780919237000906, -0.0300153667587547, -0.0519881402339771, -0.0669735571820709, -0.0785681238308767, -0.0871761477843451, -0.0921811221259126, -0.092353460874749, -0.0860732577346967, -0.0716080402229339, -0.0475323778418751, -0.0133203205465302, 0.0299228611268615, 0.078718751822135, 0.126714963370036, 0.164791208510945, 0.18217384416534, 0.168816499810902, 0.11888948615279, 0.0345361388576393, -0.0716975830738245, -0.177708734083549, -0.257253569778828, -0.289215491649596, -0.267151943825256, -0.203614187242443, -0.125063766438365, -0.0586574731664797, -0.0188109531052935, -0.0031105593485072, -1.36116134060945e-266, 0.00132196028178625, 0.00511993015570582, 0.0120994007764302, 0.0227655404454687, 0.0373897227067615, 0.0559021101534062, 0.077732850097109, 0.101625339005313, 0.125461184116904, 0.1461601063223, 0.159742304459311, 0.161654242054804, 0.147443925573419, 0.113807748631765, 0.059902651880196, -0.0113689340187324, -0.0925900542526274, -0.172168288398032, -0.236244276685541, -0.272151356064369, -0.272610737737989, -0.239030218550343, -0.182003608888682, -0.117949184307003, -0.0628091075721711, -0.0258754863656338, -0.00735589974638373, -0.00108543211501484, 0.0351466168210391, 0.0608757260481946, 0.0784960281508688, 0.0924319350619778, 0.103545958636906, 0.11169571517078, 0.116186521810197, 0.1159408028292, 0.109632412774171, 0.095859656951561, 0.0733893976200932, 0.0414812614604051, 0.000273297166809757, -0.0488267812255792, -0.102844254881819, -0.157171412153249, -0.205880957766766, -0.242522368002167, -0.261382735913871, -0.258997104356692, -0.235473411376482, -0.195062916089971, -0.145497136348591, -0.0960141663651358, -0.0546321385357339, -0.0257854964231143, -0.0094820683361898, -0.00241899845015908, -0.000321634056740029, 9.70065442846745e-268, 0.00110394789143488, 0.00427557179860807, 0.010112076280756, 0.0190751144522268, 0.0315060074800478, 0.0476000903411584, 0.0673555881099999, 0.0905050341550994, 0.116438737193418, 0.144134672782869, 0.172115507562451, 0.198459305035499, 0.220892906224045, 0.236992132358923, 0.244496716993856, 0.241717778998318, 0.227973756183218, 0.20394673838319, 0.171823830426257, 0.135102084154086, 0.0980104303817633, 0.0646357638221727, 0.0379926795184034, 0.019369150353266, 0.00822953450648514, 0.00273450301608687, 0.000632266756782645, 7.63766741442416e-05, 0.0503742354711098, 0.0872507352284005, 0.112613788971132, 0.133121362064097, 0.150591162359872, 0.165703229596086, 0.178658538790185, 0.189387966523382, 0.197645567797913, 0.203068551592592, 0.205232570248764, 0.203714385766657, 0.198166255340802, 0.188400406446614, 0.174475774023859, 0.156772732943589, 0.136036174391556, 0.113365309917882, 0.090132934926258, 0.0678297887974326, 0.0478508950664036, 0.0312658009851225, 0.0186339284303024, 0.00992752790826272, 0.00459903146087753, 0.00177949135422573, 0.000539475669745039, 0.000113983669586568, 1.25980593220234e-05).finished();
}
} // namespace mrcpp
} // namespace detail
