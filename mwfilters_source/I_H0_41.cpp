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
auto get_I_H0_41() noexcept -> Eigen::Matrix<double, 42, 42> {
  return (Eigen::Matrix<double, 42, 42>() << 0.900822989467705, 0.425201136757261, -0.0716753938376109, -0.0206073304562508, 0.036666795470497, -0.0209032591642903, -0.000200289674902369, 0.0116750576655927, -0.0103349019218981, 0.00187170496758404, 0.00526540802789257, -0.00603313183710992, 0.00150272788454021, 0.00321274646741175, -0.00384266722813434, 0.000583395003385941, 0.00261466536285696, -0.00236745689649142, -0.000550380808174812, 0.00230754361301527, -0.000815236008495471, -0.00156159571558401, 0.00132592708850203, 0.000919957255485584, -0.00134784017173748, -0.000633372171255701, 0.00117311121980266, 0.000674596838027408, -0.000856093904300257, -0.000890892591283494, 0.000287122675199686, 0.000936591595606768, 0.000486218339119, -0.000326343169816371, -0.000730676557429727, -0.000593263050519291, -0.000200580335137092, 0.000153544871354386, 0.000345581908862208, 0.000387283031582099, 0.000334487686215034, 0.000222154693899529, -0.216573792612153, 0.603735687202429, 0.751698972593438, 0.0772928567190156, -0.109878773947052, 0.0569202379344555, 0.000518233497952678, -0.0292917334492164, 0.0254127814172578, -0.00453880437790857, -0.0126408956600702, 0.0143760059058892, -0.00356029290495993, -0.00757760084434677, 0.0090309272124793, -0.00136710428456635, -0.00611251258582324, 0.00552364332458728, 0.00128199125742219, -0.0053673599339231, 0.00189396963773756, 0.00362418873829055, -0.00307450671151817, -0.00213151382148811, 0.00312080580163928, 0.00146565551119684, -0.0027132401029582, -0.00155954075542089, 0.00197834028960984, 0.00205803605771015, -0.000663073444762912, -0.00216235688785444, -0.00112229289347946, 0.000753113701133461, 0.00168591064130618, 0.00136864644827028, 0.000462676410225157, -0.000354143378872306, -0.00079700099926587, -0.000893118791335618, -0.00077133371185207, -0.000512280012876235, 0.129795320259079, -0.241367964641207, 0.216571745449947, 0.839803084714826, 0.383969275856563, -0.134430889193365, -0.00105453564402824, 0.0551833942913116, -0.0457164441156276, 0.00792227752058101, 0.0216061192667562, -0.0242004367314422, 0.00592521234818289, 0.0125002570562988, -0.0147944771766333, 0.00222712684793015, 0.0099126022255959, -0.00892406575848351, -0.00206471876443575, 0.00862162838624698, -0.00303547513824097, -0.00579735738707659, 0.00490993972862283, 0.00339912251388657, -0.00497055076157046, -0.00233183403866513, 0.00431261656113716, 0.00247677790110865, -0.0031395921986567, -0.00326396772558015, 0.00105101599959881, 0.00342578651359171, 0.00177726272798438, -0.00119218352040941, -0.00266794408282401, -0.00216527815758432, -0.000731811400534666, 0.000560038976665984, 0.00126017901716474, 0.00141199457854579, 0.00121936055827335, 0.000809801322676019, -0.0932447549326493, 0.158007209853717, -0.108554119645939, -0.0914516850834649, 0.66718273642422, 0.691956095906429, 0.00253241991578603, -0.106328203418144, 0.0792677807824211, -0.0129218473126396, -0.0338806060348322, 0.0369320656856114, -0.00886639308753301, -0.018431238449163, 0.0215669607672527, -0.00321757698801184, -0.0142177447852905, 0.0127244917753213, 0.00292965182540029, -0.0121834054807072, 0.00427470824074053, 0.00814016417181283, -0.00687677408330655, -0.00475041540881837, 0.00693348135299258, 0.00324737735878453, -0.00599728489455967, -0.00343999071460744, 0.00435579135522595, 0.00452399390027962, -0.00145552433288296, -0.00474078489480618, -0.00245788962852911, 0.00164782691347583, 0.00368584041373565, 0.00299016836396753, 0.00101025681480806, -0.000772908715344254, -0.00173878024572406, -0.00194792392392938, -0.00168197972924381, -0.00111696431172023, 0.0727697630318904, -0.118799808518953, 0.0750154979427364, 0.0523628446193482, -0.211426626489974, 0.32974041539218, 0.834592121276454, 0.29603007681959, -0.156531857235226, 0.0220935894996585, 0.0535300276085109, -0.0555379787759222, 0.0128936096707302, 0.0261665280120369, -0.0300742052113113, 0.00442531774357602, 0.0193431114446696, -0.0171610445891223, -0.00392304264100563, 0.0162186161142196, -0.00566249452601143, -0.0107380007396823, 0.00903925519171368, 0.00622525169560223, -0.00906225099782948, -0.00423476375814638, 0.0078053347066528, 0.00446935021766006, -0.005650658062638, -0.00586112457071713, 0.00188355081312874, 0.00612873160857148, 0.00317469367034695, -0.00212677235554141, -0.004754031116627, -0.00385460068763858, -0.00130170554605793, 0.000995503326448766, 0.00223886025215527, 0.00250757920932366, 0.00216488684271772, 0.0014375272260432, -0.059584471114441, 0.0954595353484086, -0.0579736688233226, -0.0376633764599287, 0.132292160422047, -0.146987670507346, -0.00309308340646522, 0.725686614774736, 0.625648623193851, -0.0474505751214636, -0.0937192998677663, 0.0877223599934132, -0.0191464192216606, -0.0373010298498736, 0.0416535718657346, -0.00600012020145866, -0.0258036786300554, 0.0226028111614383, 0.00511456070112637, -0.0209695051314666, 0.00727109245347198, 0.0137095404190584, -0.0114849419160837, -0.00787704797533498, 0.0114264035312477, 0.00532331106669926, -0.00978590735698664, -0.0055906361791284, 0.00705426265686836, 0.00730432572812465, -0.00234379477787085, -0.00761624064470471, -0.00394071308409549, 0.00263732787611813, 0.00589027986063955, 0.004772428004597, 0.00161068169271084, -0.00123118691750423, -0.00276781504448242, -0.00309910174642688, -0.00267502677149136, -0.00177607095615387, 0.0503437126899622, -0.0797829582197881, 0.0474222553666534, 0.0297065414948314, -0.0982059320121509, 0.098025335383856, 0.00165063489267023, -0.18357242170581, 0.414871722534822, 0.81685854991603, 0.237713595224718, -0.162656471979735, 0.0309119985825437, 0.0556967514953332, -0.059165757136802, 0.0082338399337127, 0.0345323821930125, -0.0296802886510951, -0.00661760362470366, 0.026814733627014, -0.00920964498830886, -0.0172288472221301, 0.0143390462530002, 0.00978052708448316, -0.0141213671944903, -0.00655257592906383, 0.01200432903778, 0.00683767360427974, -0.0086056070878187, -0.00889078661530373, 0.00284732558240128, 0.00923691090041906, 0.00477229488591276, -0.00318984752143025, -0.00711661043888675, -0.00576074947740597, -0.00194274875287552, 0.00148408382213514, 0.00333468988877111, 0.00373242998575939, 0.00322086672697027, 0.00213817664603548, -0.0434842998440874, 0.0684416682565989, -0.0401473161338196, -0.0246178267842216, 0.0787443203169074, -0.0746626091614956, -0.0011550592393451, 0.109680251170222, -0.167816188452191, 0.0623040074501943, 0.750732585173727, 0.585087228061189, -0.0634814647321354, -0.0939703653582666, 0.090176317935904, -0.011795033019602, -0.0474530289214919, 0.0395928030532238, 0.00863447954590719, -0.0343954779917638, 0.0116551159088867, 0.0215680120249765, -0.0177912813132248, -0.0120459010307997, 0.0172846468648932, 0.00797840692443849, -0.0145511979409298, -0.00825664121692615, 0.0103572048066716, 0.0106699713329383, -0.00340870823424872, -0.0110345338440946, -0.00569056835942038, 0.00379761742567208, 0.00846110601191604, 0.00684125144697897, 0.0023049307170908, -0.00175938157148703, -0.0039508278195153, -0.00441999890054053, -0.00381298444454949, -0.00253081060870697, 0.0381748429008417, -0.0598089672734566, 0.0347787443694731, 0.0210354866851237, -0.0659370499597942, 0.0607009463654526, 0.000898779672858232, -0.0796949082899859, 0.108398903415554, -0.0315245830374957, -0.159006634781478, 0.451630723098758, 0.800918459153628, 0.231653514779548, -0.163695553664745, 0.0186486456025369, 0.0693294577123038, -0.0549709982172793, -0.0115703484863524, 0.0449077736058664, -0.0149192920366951, -0.0271844552916393, 0.0221483169807041, 0.0148455061239268, -0.0211252266707664, -0.00968362507099034, 0.0175580294928127, 0.00991333529122834, -0.0123826651830615, -0.0127102271034605, 0.00404781587225788, 0.0130682030170141, 0.00672377120651477, -0.00447824434342044, -0.00996071178716447, -0.00804228614096912, -0.00270636240738882, 0.00206379745155419, 0.00463086615007637, 0.0051778130189423, 0.00446496970269859, 0.00296291397425008, -0.0339314052048163, 0.0529886800778631, -0.0306261836554428, -0.0183511458327055, 0.0567545649177087, -0.0512738591126541, -0.00073945689380766, 0.0631430927395741, -0.0811840287071518, 0.0215621739717546, 0.0919875068130531, -0.172388652083512, 0.0842132194375484, 0.739939406691584, 0.593625231618764, -0.0382166997796022, -0.116180735462973, 0.0829726731764474, 0.0163801463074957, -0.0608902620656324, 0.0196129998253119, 0.0349192699521275, -0.0279457802120849, -0.0184678074043471, 0.0259806409553308, 0.0117979981452685, -0.0212255957531672, -0.0119059691113744, 0.0147897419132212, 0.0151099193483604, -0.00479282912016411, -0.0154206376785598, -0.00791098777329432, 0.00525586106716115, 0.0116656420773613, 0.00940211264869495, 0.00315929626728444, -0.00240629660336077, -0.00539426322747452, -0.00602708476520735, -0.00519479755799301, -0.00344629970520703, 0.0304527938890751, -0.0474438034135321, 0.0273008922804173, 0.0162493666762644, -0.0497825189757242, 0.0444010517627269, 0.000629342636645744, -0.0524915278914573, 0.0653251227423036, -0.0165550866518043, -0.0657359468342983, 0.109094884004007, -0.0415360852060087, -0.152077092729409, 0.423732884858788, 0.795526413886607, 0.29696981723195, -0.152497600660271, -0.0259931996740361, 0.0888757413698439, -0.0271253009879562, -0.0465165730633118, 0.0362175481858268, 0.0234385965386369, -0.0324379768926369, -0.0145386226954266, 0.0258789565282677, 0.0143891867101804, -0.0177440997727463, -0.0180172013911946, 0.00568544462668499, 0.0182123624337701, 0.00930841229334304, -0.00616476891187729, -0.0136465700928826, -0.0109741294107156, -0.00368071365515663, 0.00279923308286162, 0.0062677106863904, 0.00699681196029223, 0.00602698244897379, 0.00399705741223122, -0.0275415799088537, 0.0428318124379376, -0.0245658761973925, -0.0145490311397449, 0.0442669274881203, -0.0391196595479091, -0.000547811525278912, 0.0449715789312667, -0.0548031717973304, 0.0135003460094739, 0.0515295227504313, -0.0807085076121644, 0.0280364046344863, 0.0869531194356438, -0.162750027333013, 0.0456908485795727, 0.680843921573511, 0.658880059916978, 0.0559194295941174, -0.152408234938587, 0.0414549936285069, 0.0662952952871325, -0.0492595711137941, -0.0308327969283494, 0.0416219161711625, 0.0183001610636466, -0.0320841552123264, -0.0176227951033207, 0.0215157821818476, 0.0216674579127703, -0.00679047473396077, -0.0216272361372073, -0.0110004003740295, 0.00725575479622989, 0.0160069145313429, 0.0128357051120754, 0.00429501605113344, -0.00326023951013964, -0.00728910138855246, -0.00812799611832173, -0.0069960913552724, -0.00463784010701159, 0.0250628769950742, -0.0389233929192588, 0.0222677742859054, 0.0131381159568419, -0.0397665577573926, 0.0349025060469608, 0.000484453306448323, -0.0393225687379108, 0.0472285031368482, -0.0114177096130582, -0.0425135492496393, 0.0643879328625307, -0.0213312324960931, -0.0616135373275711, 0.102518691197009, -0.02282103406496, -0.16601244085472, 0.312389335918809, 0.776210675345596, 0.451137510493953, -0.0808037506453779, -0.108710505845706, 0.0734162764981029, 0.0432513604126495, -0.0559997436767192, -0.0238855171485408, 0.0409259423900221, 0.0220811512442059, -0.0265785702737017, -0.0264601712560122, 0.00821488690781933, 0.0259616240663194, 0.0131202318747355, -0.00860771048524771, -0.0189050363669025, -0.0151038931392848, -0.00503875426282046, 0.00381551391748197, 0.00851437571066573, 0.00948087673087637, 0.00815274391211442, 0.00540176084870339, -0.0229213484725237, 0.0355589636599441, -0.0203026231506073, -0.0119432969433006, 0.0360046940579577, -0.0314352795036871, -0.000433422048554373, 0.0348859972889549, -0.041460714875983, 0.00989127598543299, 0.0362145448145257, -0.0536676180508316, 0.0172756528417217, 0.0479755434344097, -0.0754475907344675, 0.0153946029354597, 0.0962607029825154, -0.129898990930531, -0.051379011512111, 0.531395516807809, 0.742591702577322, 0.27044793127591, -0.135076843165771, -0.0690322905912534, 0.0822485948786396, 0.0332215021204721, -0.0547835030254206, -0.0287344664586896, 0.0338490449609143, 0.0331340483687716, -0.0101492634794769, -0.0317274995092667, -0.0158922835738161, 0.010350610259345, 0.0225971590989044, 0.0179652528287516, 0.00596946510717012, -0.00450588473519847, -0.010030030421632, -0.0111480518459465, -0.00957444003392258, -0.00633940508584489, 0.0210476736970427, -0.0326238908861263, 0.0185972683243438, 0.0109143932879762, -0.0327982731938915, 0.0285181424759832, 0.000391168535737018, -0.0312831301985211, 0.0368850496016087, -0.00871403241298659, -0.0315204564717692, 0.0460101600022257, -0.0145296044046445, -0.0393623603227723, 0.0598974790346788, -0.0116783572377525, -0.06833297535694, 0.0829839804635858, 0.0270518548057893, -0.172112200985562, 0.108967457294961, 0.65397227706912, 0.658081877064284, 0.157567674198479, -0.146942523393141, -0.0523912906503699, 0.0800906012999332, 0.0399293205085143, -0.0453648324407694, -0.043226765827677, 0.0129700398614964, 0.0398940071321842, 0.0197267533485001, -0.0127153455643034, -0.0275277900730915, -0.0217371839285789, -0.0071834921734613, 0.00539884976233476, 0.0119776430023682, 0.0132799653684047, 0.011386461611469, 0.00753232079057787, -0.0193902206597625, 0.0300336141342618, -0.0170986335635943, -0.010015804411102, 0.0300209337751402, -0.0260174964714084, -0.00035540548032776, 0.028279971501935, -0.0331398770676504, 0.00777109144987343, 0.0278562960255199, -0.0402149257116121, 0.012528101033607, 0.0333704185557157, -0.0497023968763091, 0.00942503684089217, 0.0531378599674374, -0.061274395183051, -0.0184987722192511, 0.103850863313569, -0.0516414904416252, -0.152253567061055, 0.242102322683402, 0.694023436484303, 0.587518091920067, 0.115988191118744, -0.14240563996245, -0.0631775128376976, 0.0667590194061454, 0.0605596754069352, -0.0175401278710992, -0.052547111815393, -0.0254634119498885, 0.0161559289825502, 0.0345429025598578, 0.0270079703941081, 0.00885563291705704, -0.00661481091519204, -0.0146064604956502, -0.0161389129327485, -0.0138058057745199, -0.00912124824028887, 0.0179097269323941, -0.0277243332966974, 0.0157672101408186, 0.00922151246286812, -0.0275823846523626, 0.0238403513396962, 0.000324587707748887, -0.0257237107120151, 0.0299979866959253, -0.0069934220921256, -0.0248942519374646, 0.0356392589022377, -0.0109913412812471, -0.0289213761523011, 0.0424353162344532, -0.00789845788429443, -0.043492482134448, 0.0486389363225719, 0.0140929322056743, -0.0746840884239377, 0.034065664370401, 0.0870286665477933, -0.103849172949778, -0.111201696023049, 0.309602517530637, 0.684954118008058, 0.563334772166502, 0.142787386315732, -0.121465711168337, -0.0979900293219398, 0.0263717848576115, 0.0751539656336712, 0.0351352144442406, -0.021705868660524, -0.0454772625428148, -0.0350054866415155, -0.0113398141186069, 0.00839182074762498, 0.0184003735169174, 0.0202273523867631, 0.0172444377571591, 0.0113720742058375, -0.0165757919843452, 0.0256469657280472, -0.0145729400165798, -0.00851202266943818, 0.0254162294739003, -0.021919804398277, -0.000297630744860733, 0.0235100431249962, -0.0273090697338035, 0.00633694972247422, 0.0224333789957648, -0.0319074912940163, 0.00976473606607348, 0.025458865225977, -0.036946312202658, 0.00678604149210678, 0.0367652429245053, -0.0402957589747555, -0.0113818048631969, 0.0583559775623833, -0.0254641795414722, -0.0611322211286688, 0.0664566168469179, 0.0609463419797701, -0.124119281580785, -0.088532463744709, 0.300441591968384, 0.642695032064104, 0.585892816567435, 0.242781371166527, -0.0511796521339721, -0.128092655283079, -0.0552587891054158, 0.0323379411801555, 0.0651988349849778, 0.0487930849582094, 0.0154782348730793, -0.0112761761745038, -0.0244399214807617, -0.0266453103629771, -0.0225924676163602, -0.0148551946093559, 0.0153644992866572, -0.0237631038445412, 0.0134925204525435, 0.00787241369966681, -0.0234724452373358, 0.020206371966622, 0.000273749037998163, -0.0215651534541632, 0.0249694761628582, -0.00577214912437834, -0.0203433902169039, 0.0287849537011426, -0.00875578730735126, -0.0226663999970745, 0.032619650604927, -0.00593234064420409, -0.0317633538291696, 0.0343233871077988, 0.00952898802125021, -0.0478255580382361, 0.0203161821278753, 0.0471123692083647, -0.0489057085684846, -0.0420623908222779, 0.077902595231437, 0.047607585888715, -0.119729630625408, -0.100421632782673, 0.21356297152012, 0.547921044857542, 0.613764808723961, 0.406528797330531, 0.124404375723771, -0.0615377900285476, -0.112300891355614, -0.0787508856935226, -0.0238880357386948, 0.016861008520683, 0.0357333767290565, 0.038356335095923, 0.0321967888370699, 0.0210572116908922, -0.0142567649490707, 0.0220422387333026, -0.0125075859316452, -0.00729105253923692, 0.021712553830481, -0.0186625844182499, -0.000252358236954345, 0.0198352072992088, -0.0229052456354717, 0.0052784549451747, 0.0185359396943041, -0.0261172372699183, 0.00790567257557841, 0.0203504326350242, -0.0290955008472228, 0.00525125499465652, 0.0278673463206971, -0.0297997271505912, -0.00817114294371942, 0.0404069833818941, -0.0168597304338233, -0.0382465013499631, 0.0386273752418034, 0.0320790785210107, -0.0567447262984647, -0.0325739219530793, 0.0748854254674067, 0.0546433666157815, -0.0908254513212826, -0.129911434982631, 0.0624034477145252, 0.357180393015255, 0.544551317636384, 0.53465703199562, 0.383102584047351, 0.196826452649352, 0.0508497992209635, -0.0326025381309381, -0.0649817730107897, -0.0670374498741248, -0.0549088143693258, -0.0354571954429101, 0.0132371662385755, -0.020459808831491, 0.0116034498157211, 0.00675872238873466, -0.0201064191731465, 0.0172594898090503, 0.000233013683292598, -0.0182799290803792, 0.0210620683783927, -0.00484107177996383, -0.0169488831449938, 0.0237983990075643, -0.0071751378021307, -0.0183857760036586, 0.0261492483613557, -0.00469119117936089, -0.0247232830048242, 0.0262267754060223, 0.00712488246077901, -0.0348527343492362, 0.0143578040955358, 0.032081691974809, -0.0318193196555282, -0.0258511407154456, 0.0445097724586568, 0.02470138671833, -0.0543835059415027, -0.0374877036921325, 0.0576482758500743, 0.0737232133157889, -0.0297422953748367, -0.124509987594034, -0.085910527693382, 0.0807693850531551, 0.276398720770163, 0.408769899907948, 0.446547787662734, 0.409630257996013, 0.335420948495883, 0.254012902428516, 0.179495090768435, 0.108335015106198, -0.0122930946431339, 0.0189958003109162, -0.0107682135541833, -0.00626801571558129, 0.0186300618109614, -0.0159743197204598, -0.000215370304157302, 0.0168685201318723, -0.01939907821337, 0.00444906069173071, 0.0155371474028782, -0.0217531954574684, 0.0065369409302123, 0.0166877501483614, -0.0236332504749938, 0.00421931479793374, 0.0221140569572018, -0.0233117272075529, -0.00628757452520667, 0.0305041482882065, -0.012447529255049, -0.0275091057496586, 0.0269371530577205, 0.0215590081980106, -0.0364684879234424, -0.0198166534774059, 0.0425368443531949, 0.0284305042832298, -0.0420863795479153, -0.0513105720252979, 0.0194721163231478, 0.0752280181289492, 0.0465537194471077, -0.0375079733753764, -0.101533647705779, -0.100339785224884, -0.0414991806941573, 0.038911482833126, 0.106655492418538, 0.143024620644977, 0.142764662887917, 0.103742133521115, 0.0114141330900431, -0.0176337248431868, 0.00999212340634346, 0.00581290238966667, -0.0172641305889121, 0.0147888878546213, 0.000199155659552328, -0.0155769757109554, 0.0178848689981517, -0.00409414251224296, -0.0142671792852202, 0.0199266127433495, -0.00597155073594029, -0.0151969338379172, 0.0214463289693372, -0.00381370874867941, -0.0198989499311465, 0.0208709942548939, 0.00559725241268511, -0.0269804077555582, 0.0109293933955882, 0.0239540474537205, -0.0232347812809226, -0.0183953836431662, 0.030732299344286, 0.0164619528393547, -0.0347544700436616, -0.0227852594322089, 0.0329784695987603, 0.0391583305221538, -0.014405177387185, -0.0536429235408234, -0.0317802690518919, 0.0243151285046351, 0.0619151891963811, 0.0569434766388538, 0.0216700531206644, -0.0184985486636716, -0.0458322516173756, -0.0555901291546206, -0.0508822108951014, -0.0349480213085981, -0.0105915909244133, 0.0163598607661603, -0.00926709759461527, -0.00538841632112099, 0.0159928104452585, -0.0136884647793746, -0.000184151346008443, 0.0143862696024519, -0.0164948548513521, 0.00376992239494969, 0.0131134346566696, -0.0182774173528167, 0.00546457328309576, 0.0138703298287433, -0.0195167181497345, 0.00345916373640434, 0.0179826394155241, -0.0187835001679028, -0.0050142534460041, 0.0240458286814184, -0.00968453737385431, -0.0210887216550091, 0.020307445238633, 0.0159470945053689, -0.0263986400301306, -0.013995201541767, 0.0292044708528964, 0.0188967661181023, -0.0269482472262943, -0.0314684773019951, 0.0113610987252735, 0.0414271381347545, 0.0239753532804897, -0.0178759238943165, -0.0442567058492961, -0.0394989562394824, -0.0145696017171546, 0.0120549868857592, 0.0289972711465363, 0.0342734586008091, 0.0307539214779534, 0.0208745948593222, 0.0098181518175551, -0.0151626814492451, 0.0085863731578899, 0.00499042407668317, -0.0148030267300751, 0.0126609703823601, 0.000170179865522663, -0.0132810942338477, 0.0152094715496418, -0.00347137173652874, -0.0120560816448802, 0.016774032069386, -0.00500514643382767, -0.0126760006420579, 0.0177920157932542, -0.00314477829335151, -0.0162981692447553, 0.0169660613018281, 0.00451198412758189, -0.0215465911576557, 0.00863767939999202, 0.018712359651497, -0.0179164112595316, -0.0139806186583486, 0.0229815496444219, 0.0120893816698261, -0.025011802701431, -0.0160312280211515, 0.0226244352325503, 0.0261186816091533, -0.00931256828557248, -0.0335005827518655, -0.0191080584104087, 0.0140288473665645, 0.0341779130970166, 0.0300068640972513, 0.0108895608620045, -0.00887115875161177, -0.0210407079648589, -0.0245772383248655, -0.0218606861632156, -0.0147625538052533, -0.00908760376347453, 0.0140324188815902, -0.00794423837719378, -0.00461545132261635, 0.0136838554901557, -0.0116963833323572, -0.000157095161408565, 0.0122489665416005, -0.0140129208000455, 0.00319447269964934, 0.0110794536055139, -0.0153918126641255, 0.00458490207946798, 0.011589680569081, -0.0162329944864115, 0.00286252109969437, 0.014797054630331, -0.0153595565576554, -0.00407192364745082, 0.0193779177512718, -0.00773877088878458, -0.0166950078379944, 0.0159116459709536, 0.0123539196739737, -0.0201960033094105, -0.0105603132927296, 0.0217054900950903, 0.013813291561488, -0.0193446151483979, -0.022147755311274, 0.0078269848710917, 0.0278928016249998, 0.0157533228365025, -0.0114484438112934, -0.0276036491464097, -0.0239864286607752, -0.00861851630480862, 0.00695634582727776, 0.0163645871350066, 0.0189868811624767, 0.0168052697544791, 0.0113164715646912, 0.00839462958139097, -0.0129607263848113, 0.00733582735810851, 0.00426055077459148, -0.0126260795718224, 0.0107863018794468, 0.000144775670767138, -0.0112795806502897, 0.0128922743859016, -0.00293596851173704, -0.010170980118911, 0.0141111986643698, -0.00419727449184041, -0.0105925625186869, 0.0148096456766945, -0.00260633334941655, -0.0134432604955647, 0.0139207437912664, 0.00368075712889483, -0.0174658717044047, 0.00695319952835195, 0.0149487389466543, -0.0141940248536734, -0.0109755619760068, 0.0178636485369679, 0.00929626757074403, -0.0190093641573529, -0.0120308883054608, 0.0167494398135201, 0.0190569093944785, -0.00669044363558986, -0.0236791349296094, -0.0132789990616156, 0.00958093071028295, 0.0229350593303885, 0.0197899184420833, 0.007063341148698, -0.00566634825916896, -0.0132590520388873, -0.0153172559294358, -0.0135148346113937, -0.00908440677964248, -0.00773464258573027, 0.011940414964262, -0.00675696041584748, -0.00392320041118503, 0.011621849737819, -0.0099236121777914, -0.000133119139315239, 0.0103643307835907, -0.0118368225926847, 0.00269318436608624, 0.00932043142592781, -0.0129164264750782, 0.00383702687988529, 0.00966980950840193, -0.0134985687008986, 0.00237154819850829, 0.0122093913059048, -0.0126172031725504, -0.00332864938653982, 0.015756700625153, -0.00625622737361651, -0.0134118500367705, 0.0126953433564921, 0.00978395090576963, -0.0158670517771613, -0.00822546541322128, 0.0167506383128109, 0.0105550589403065, -0.0146269562006172, -0.0165613789408479, 0.00578498127811028, 0.0203679566799032, 0.0113615834548909, -0.00815386849434061, -0.0194164628750263, -0.016668980964482, -0.00592114728418229, 0.00472960731021066, 0.0110259703133395, 0.0126993719388626, 0.0111808262690968, 0.00750628340498392, 0.00710365636654219, -0.0109652450341537, 0.00620401865489903, 0.00360122406777616, -0.0106644225852996, 0.00910223428671735, 0.000122038692867801, -0.00949595390140475, 0.0108375919813972, -0.00246389653409078, -0.00851937351736343, 0.0117946141275381, -0.00349991958466972, -0.00880952760281968, 0.0122811988629459, -0.0021545036920701, -0.0110741984426485, 0.0114240958577059, 0.00300816242798669, -0.0142103106231999, 0.00562967099099742, 0.0120396888576465, -0.0113670572459698, -0.00873601550607111, 0.0141256284513914, 0.00729962856767238, -0.0148155462787354, -0.00930278930374327, 0.0128439398890719, 0.0144866038056648, -0.00504015541372207, -0.0176735477982818, -0.00981822337899568, 0.00701754208819956, 0.0166440595094256, 0.0142344977561219, 0.00503846488984464, -0.00401174463098669, -0.00932692605492591, -0.0107189848052729, -0.00942245799895185, -0.00632016088698916, -0.00649818060558936, 0.0100297602473393, -0.00567384438216775, -0.00329272879503207, 0.0097479554189104, -0.0083169251410857, -0.000111459819566068, 0.00866825802965322, -0.00988698279740457, 0.0022462350742159, 0.00776076793405306, -0.0107350975015423, 0.0031824726025088, 0.00800204100599341, -0.0111425750895232, 0.0019522777353181, 0.0100209016365905, -0.0103220195902958, -0.00271355273369105, 0.0127961150007131, -0.0050598350156005, -0.0107990754151796, 0.0101736051073605, 0.00780067510019539, -0.0125821432036043, -0.00648503585980554, 0.0131260094269073, 0.00821814586687715, -0.0113123355066601, -0.0127194870565025, 0.0044112560625173, 0.015418335538293, 0.00853766804938699, -0.00608277417009697, -0.0143822801777887, -0.0122639565997429, -0.00432915899229096, 0.00343860223588008, 0.0079778557653274, 0.00915340663584447, 0.00803674168117472, 0.00538707228861604, 0.00591513696173585, -0.00912915367045587, 0.0051636612511891, 0.00299605492371069, -0.00886734390032456, 0.00756312387823297, 0.000101318021943834, -0.0078759129008508, 0.0089784923417471, -0.00203861038375451, -0.00703867294230575, 0.00972894033806729, -0.00288179237236204, -0.0072393699234245, 0.0100704639405502, -0.00176250230771036, -0.00903602948243541, 0.00929555035536659, 0.00244030119988656, -0.0114903058045328, 0.00453617915395856, 0.00966477444372736, -0.00908827437899841, -0.00695488472840115, 0.0111947323390512, 0.00575737078340923, -0.0116265526280161, -0.00726199406233961, 0.0099715053988143, 0.01118340824861, -0.00386849384877643, -0.0134859837900745, -0.00744825021761419, 0.0052930647911902, 0.0124842656267016, 0.0106207502823447, 0.00374109447324303, -0.00296586122823703, -0.00686994603556179, -0.00787212761885588, -0.00690544909011495, -0.00462636260631245, -0.00535179057227119, 0.0082591590496489, -0.00467100963188906, -0.00270973586598393, 0.00801809220479303, -0.00683682905591673, -9.15569683324322e-05, 0.0071142865610762, -0.00810650106807284, 0.0018396569520162, 0.00634801698839537, -0.00876856664493, 0.00259544324178084, 0.00651484749849511, -0.00905472456793797, 0.0015832304542141, 0.00810860018344088, -0.00833222613689732, -0.00218479033297691, 0.0102740087888251, -0.00405043135742625, -0.00861718867055506, 0.00809054681227454, 0.00618114413503282, -0.00993197946293554, -0.00509860810812939, 0.0102765728769035, 0.0064060632887326, -0.00877822917250359, -0.00982449680099493, 0.00339121211617616, 0.0117969335368376, 0.00650162811527938, -0.00461081236121646, -0.0108535361230218, -0.00921622311849884, -0.00324081395379329, 0.00256536232349577, 0.00593464194101401, 0.00679347509834289, 0.00595494738867275, 0.00398793597720716, 0.00480569382168792, -0.00741596173115736, 0.00419369384996132, 0.00243246545833231, -0.0071962081632245, 0.00613450017222089, 8.21270212734394e-05, -0.00637931634615756, 0.00726610510738399, -0.00164818971274471, -0.0056844245220399, 0.00784748078644761, -0.00232135056742206, -0.00582283401903455, 0.00808684004164656, -0.00141283922799621, -0.00722953077970221, 0.00742182314165801, 0.00194407732054995, -0.00913200399319961, 0.00359598163291097, 0.00764080566039454, -0.00716433921661738, -0.00546587407328798, 0.00876976097956557, 0.00449505533844726, -0.00904556674622472, -0.00562935434024123, 0.00770077136517712, 0.00860365634967579, -0.00296459418343768, -0.0102947807510092, -0.00566392110207269, 0.00400995617734655, 0.00942393381577541, 0.00799018701249338, 0.00280580973441195, -0.00221831422515182, -0.00512650624200796, -0.00586360914060522, -0.0051368825529496, -0.0034389661879252, -0.00427463985820675, 0.00659612515765445, -0.00372973878921252, -0.00216307121667827, 0.00639811784753088, -0.00545297794126629, -7.29840543311894e-05, 0.0056674059060559, -0.00645298364307605, 0.00146316976065706, 0.00504408034704161, -0.00696005140623425, 0.00205772659617709, 0.00515850038403991, -0.00715956575260758, 0.00124995762465551, 0.00639120318034518, -0.00655583005297084, -0.00171573110935607, 0.0080518183546375, -0.00316745758183742, -0.0067231246987628, 0.00629680476238233, 0.004798325925981, -0.00768915947953639, -0.00393607734609339, 0.00791007256581212, 0.00491587571876468, -0.00671520685688621, -0.00749170976769251, 0.002577693914088, 0.00893827102813268, 0.00491059028702198, -0.00347179897320068, -0.00814841884588886, -0.00690020399266876, -0.00242033232165701, 0.0019116557920418, 0.00441413492812422, 0.00504548362611863, 0.0044180881282825, 0.00295697755036987, 0.00375662399595914, -0.00579652992961935, 0.00327735401085724, 0.001900492307597, -0.00562059554669834, 0.00478941928888221, 6.40884931881087e-05, -0.00497534229471439, 0.00566329287147885, -0.00128367714086266, -0.00442362278023562, 0.00610134259348654, -0.00180301303083328, -0.00451766175518688, 0.00626666171613137, -0.00109341222295416, -0.00558713998547547, 0.0057270592460547, 0.00149771318883541, -0.00702306898465645, 0.00276042068788622, 0.00585389802994114, -0.00547749583847868, -0.00416982991414127, 0.00667504404220536, 0.00341324044022734, -0.00685164696343275, -0.0042531671370317, 0.00580305907106224, 0.00646632473335883, -0.0022222070453177, -0.00769637886377966, -0.00422333736929754, 0.00298251194705274, 0.006992467724713, 0.00591535057691605, 0.0020729797164141, -0.001635984946685, -0.00377502952346657, -0.00431265759958655, -0.00377495511390438, -0.0025259950959043, -0.00324981173964953, 0.00501432338257091, -0.00283490412675832, -0.00164376141222602, 0.00486070632733131, -0.00414124425934539, -5.54045362337227e-05, 0.00430022893755749, -0.00489358076076815, 0.00110888910897338, 0.00382005884273973, -0.00526698077778386, 0.00155583607356143, 0.00389664832322806, -0.00540268623243534, 0.000942185628311143, 0.00481175878148939, -0.00492935475140673, -0.00128828887698729, 0.00603697922659621, -0.00237114477565055, -0.00502458320568904, 0.00469776642323063, 0.00357326446096332, -0.0057150798511902, -0.00291972242567903, 0.00585548733722161, 0.00363130693236808, -0.0049497323823131, -0.00550999921511732, 0.00189167637971486, 0.00654516472470702, 0.00358814837648983, -0.00253157968317559, -0.00593000531872765, -0.00501241588617264, -0.00175524170628329, 0.00138431861010101, 0.00319254871610317, 0.00364563682797357, 0.00319011695364502, 0.00213428290859239, 0.00275251290625647, -0.00424687879565314, 0.0024008848497165, 0.00139199008162252, -0.00411575972092658, 0.00350609328754499, 4.68995287620998e-05, -0.00363943195723158, 0.0041407190141064, -0.000938062842180212, -0.0032306970916088, 0.00445304979201273, -0.00131497116183882, -0.00329220449476118, 0.00456283588533049, -0.000795384456023765, -0.00406018414474196, 0.0041573704490383, 0.00108596046548993, -0.00508601695597119, 0.00199645186223932, 0.00422794098538481, -0.00395033743624919, -0.00300267405611003, 0.00479902221656877, 0.00244989647157828, -0.0049094705898233, -0.00304222697988583, 0.00414344211027722, 0.00460870166806799, -0.00158096122118115, -0.00546569992414464, -0.002994015790798, 0.00211079474860219, 0.00494080028014548, 0.00417348939250793, 0.00146058377160677, -0.00115131789872027, -0.0026540151572457, -0.00302961246987507, -0.00265040735371137, -0.00177295347952159, -0.00226316273757657, 0.00349176555549803, -0.00197390541195432, -0.00114435793463151, 0.0033832753749014, -0.00288179532563629, -3.85434935008163e-05, 0.00299053969695028, -0.00340185152803853, 0.000770522293260809, 0.00265309640508079, -0.0036560107163248, 0.00107931601072088, 0.00270141184016905, -0.00374282339268162, 0.000652214939086418, 0.00332810483431494, -0.00340640220907908, -0.000889416852986677, 0.004163623509221, -0.00163358986315334, -0.00345773771285255, 0.00322897730027108, 0.00245299054235467, -0.00391820580955898, -0.00199903258981494, 0.00400346960054383, 0.00247922995710082, -0.00337446752411696, -0.00375093059388247, 0.00128587386783118, 0.00444265804038811, 0.00243207897973691, -0.00171358729270328, -0.00400874265031712, -0.00338437791088892, -0.00118385007500703, 0.000932786256876709, 0.0021494954127949, 0.00245300963165208, 0.0021455532167476, 0.0014350790690406, 0.0017803150033808, -0.00274673794742016, 0.00155268164531251, 0.000900108149805193, -0.0026609677636876, 0.00226635270045833, 3.03088932131834e-05, -0.00235134104205148, 0.00267436532912994, -0.000605650434812834, -0.00208503456193174, 0.00287265103142103, -0.000847873023256995, -0.00212163762113557, 0.0029387944106139, -0.000511966051424008, -0.00261167374184696, 0.00267226914813476, 0.000697497659396165, -0.00326401958635783, 0.00128014475893503, 0.0027085312749471, -0.00252827225031476, -0.00191983300543748, 0.00306517890892324, 0.00156308464095135, -0.00312886770784895, -0.00193664822378312, 0.00263462701378973, 0.00292705787822809, -0.00100292743581347, -0.00346334422704335, -0.00189503579506777, 0.00133456914930935, 0.00312067996465551, 0.00263354224698454, 0.000920864608716218, -0.000725335774064196, -0.00167099205385027, -0.00190652929901526, -0.00166731382895771, -0.00111510721263228, -0.00130266852312492, 0.00200977560087186, -0.00113605835859947, -0.00065856002519745, 0.00194678169233645, -0.00165796959812372, -2.21709828757887e-05, 0.00171985006344798, -0.00195591499934092, 0.000442893835318757, 0.0015245201733851, -0.00210009497377322, 0.000619750280829933, 0.00155053133997916, -0.00214731336038114, 0.00037400517104064, 0.00190747491379207, -0.00195126725646561, -0.000509177379750689, 0.00238211125486839, -0.000933994931128679, -0.0019755534875807, 0.00184349450260997, 0.00139938890552517, -0.00223348017328518, -0.0011385575506416, 0.00227825100784857, 0.00140962490230024, -0.00191693810941509, -0.00212890054470586, 0.000729170650100899, 0.00251705748808374, 0.00137675545007846, -0.000969233781136951, -0.00226565154087145, -0.00191139830076453, -0.000668169379115891, 0.000526168453700268, 0.00121191478120301, 0.00138252189607521, 0.00120891850444397, 0.000808479075761845, 0.000829243172135943, -0.00127935462927368, 0.00072316218846393, 0.000419197231968208, -0.00123915179860218, 0.0010552715771979, 1.41107207175673e-05, -0.00109452957123574, 0.00124467388302155, -0.000281818741813553, -0.000969982544393383, 0.00133606003406533, -0.000394235534194974, -0.000986204997546798, 0.00136560541894311, -0.000237818718367952, -0.0012127221001523, 0.00124036244416615, 0.000323612801417627, -0.00151369623033086, 0.000593385203241967, 0.0012548505258636, -0.00117071646422662, -0.000888486576786151, 0.00141772928515143, 0.000722539448071285, -0.00144544184689507, -0.000894113869063785, 0.00121558705633391, 0.00134965086208196, -0.000462150828324895, -0.00159491575426731, -0.000872156299322581, 0.000613851330233901, 0.00143459932785328, 0.00121003733992486, 0.000422914864816935, -0.000332981565394954, -0.000766845764043209, -0.000874704295765826, -0.000764809514688408, -0.00051145387239859, -0.000360848122276603, 0.000556712463843612, -0.000314681435368349, -0.000182409383575046, 0.00053919339713482, -0.000459169975785738, -6.13967668505597e-06, 0.000476221185849607, -0.00054152623705254, 0.0001226067210542, 0.00042197481228199, -0.000581198473293412, 0.000171485645813744, 0.000428953591746372, -0.00059393236179732, 0.000103424623323531, 0.000527354719332197, -0.000539325852249499, -0.00014069765342431, 0.000658045427272843, -0.000257933248369527, -0.000545398101213956, 0.00050877057945815, 0.000386071310545003, -0.000615962529111396, -0.000313880996410509, 0.000627834235767573, 0.000388308495902476, -0.000527848163476101, -0.000585980218070039, 0.000200624548302492, 0.000692273621823506, 0.00037850850429258, -0.000266371740897633, -0.000622446953305385, -0.000524953991209752, -0.000183455596529479, 0.000144430642912886, 0.000332594181496091, 0.000379351960760783, 0.000331677729606462, 0.000221798877024859).finished();
}
} // namespace mrcpp
} // namespace detail