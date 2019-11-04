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
auto get_I_G0_19() noexcept -> Eigen::Matrix<double, 20, 20> {
  return (Eigen::Matrix<double, 20, 20>() << 0.169207113640214, -0.260049434577488, 0.142368434042205, 0.0949926356159963, -0.251837630350048, 0.178561758931084, 0.0705351241878279, -0.24533751851806, 0.134844698579577, 0.147237096020696, -0.213986444875215, -0.0615813976057728, 0.211512918368027, 0.0720908162306748, -0.160203365050779, -0.155683061217885, -0.0131163795246513, 0.0878093145075572, 0.106006603830669, 0.0746813581751779, 0.152358673925872, -0.258391921298934, 0.20021656736305, -0.00770381004616614, -0.192854868943236, 0.251320998896123, -0.105886576473948, -0.135894699294732, 0.244451194452593, -0.0806754158711756, -0.18296178990553, 0.177634777563192, 0.117120050726291, -0.171445495039214, -0.139454822121836, 0.0715095979378322, 0.160944906957582, 0.114435696748499, 0.0429480440758925, 0.00552678369078085, 0.13438087738682, -0.247288006408149, 0.240391010415324, -0.109160781898191, -0.084856174042391, 0.232500480934804, -0.230474217708245, 0.0587104940701437, 0.165210253565371, -0.234069806487682, 0.0450773228830257, 0.198717458353022, -0.138183572185359, -0.155932524339999, 0.109468149967853, 0.173820534190183, 0.0390045290040482, -0.0777715139991199, -0.104461753406714, -0.074645533164056, 0.115415802287963, -0.227160549491688, 0.259363863768418, -0.193020498141296, 0.0447221737355991, 0.128949520115762, -0.242225475149811, 0.216508810097814, -0.041639709802369, -0.171268318180899, 0.224606434723016, -0.0242445527753651, -0.203624911460423, 0.0951761905704924, 0.179306612873103, -0.0274439413415869, -0.154662599243216, -0.121271633181397, -0.0467056811220733, -0.00604235512269742, -0.09562465923997, 0.198791303967785, -0.255527844451636, 0.245833813394544, -0.163043522236141, 0.0216982393711242, 0.135286607156017, -0.238509402076053, 0.216185642078221, -0.0495911653767072, -0.16244742355408, 0.217589290745922, -0.0108238337429297, -0.202354678115573, 0.0441118282184268, 0.180887251831884, 0.0638023600261601, -0.067071885465348, -0.102823281718121, -0.0745894443553447, 0.0752417625621587, -0.163415252181614, 0.229521638646741, -0.259465233400238, 0.240491107703747, -0.165040717327807, 0.0384944654744949, 0.110431342747924, -0.223099323978388, 0.223990946049501, -0.073927099867971, -0.144484461333677, 0.211125648058532, 0.00316659165815553, -0.194858394418111, -0.0189142995651304, 0.144829875314619, 0.126898431497902, 0.0506140937239954, 0.00647268762439438, -0.0547562805801409, 0.12309268641884, -0.184815466636147, 0.233253294974497, -0.259214578109236, 0.250868701892994, -0.196123814569213, 0.0894472377627776, 0.0552750007961923, -0.189305231476375, 0.228567372708677, -0.103669628911394, -0.124103271121152, 0.20349415859609, 0.024824365718943, -0.174699230374858, -0.0887202316763747, 0.0571326108944867, 0.100507898510622, 0.0750091499055031, 0.0352723996033501, -0.0814822744942787, 0.128769875914844, -0.176037815085662, 0.2201742861772, -0.254554777898328, 0.267687846043386, -0.243218615902088, 0.164397191542369, -0.0278837424709455, -0.131173448217403, 0.219483915470509, -0.127487124487226, -0.110628087701201, 0.193771186781827, 0.0587941923794857, -0.127681768543889, -0.136496090789857, -0.0527449171525602, -0.007972337463306, -0.0186780362107101, 0.0441597472455834, -0.0728302200690069, 0.106160827501503, -0.145183669657842, 0.189530366819538, -0.235702629604848, 0.274318288453596, -0.287041971263765, 0.24668332670383, -0.129159836098678, -0.0513664403963532, 0.194433592525487, -0.13778889396544, -0.114149613197563, 0.177937850968567, 0.102992102483588, -0.0388242516124164, -0.107126524924233, -0.0753713535586508, -0.00690530455307614, 0.0167709045754371, -0.0290170227153535, 0.0452974759554604, -0.0677363730280618, 0.0988676553967055, -0.141134577825205, 0.195300129618251, -0.256768462067177, 0.309103671478239, -0.317220053608107, 0.232725003710381, -0.0383298749779777, -0.161047647680357, 0.131726930523454, 0.141261666551337, -0.141326115112158, -0.134850545444412, -0.0720993410921913, -0.00447555458422904, -0.000555607405397107, 0.00162011523786531, -0.00361434709600409, 0.00738232329431405, -0.0142780300144809, 0.0264894276248282, -0.0474271959623087, 0.0819470983828068, -0.135639167878405, 0.21131542219752, -0.299570145888899, 0.362331595864201, -0.324060472873121, 0.12275466323779, 0.131737694947239, -0.105535141233033, -0.18771661941222, 0.0605932326578808, 0.0977703516870021, 0.0945311743293038, -0.00160255711833946, 0.00368111670273146, -0.00574587128092318, 0.00766181904183352, -0.00908715611995915, 0.00923613072588492, -0.00643971482335868, -0.0026241309508476, 0.024062422995409, -0.0677191957150391, 0.145515341022371, -0.260731680086716, 0.379429186485921, -0.39625113810338, 0.188016600843927, 0.117426427845188, -0.0482389844340982, -0.222486856895526, -0.053987491746464, -0.0221941546893245, 0.00160079049527443, -0.0037735102060692, 0.00620125725967305, -0.00902755159600906, 0.012405995677647, -0.0164453873469616, 0.0210585013002732, -0.0255650376558905, 0.0277526433449273, -0.0219265420635916, -0.00428235560488385, 0.0722396216028343, -0.203520851150964, 0.376907175412797, -0.451378477528151, 0.221504554480175, 0.12011303025024, 0.0539082495655092, -0.174991349779811, -0.087247953929101, 0.000989416069045062, -0.00234782608436218, 0.0039094616138117, -0.00581843017973162, 0.00828187666320335, -0.0115988646119132, 0.0161928621846702, -0.0226055441313109, 0.0313125260709988, -0.0419520419039478, 0.0509737939938511, -0.0460362641910028, -0.00275417668022762, 0.141120727691969, -0.369964059266697, 0.495915802763368, -0.207774021413318, -0.118218179562635, -0.177291351794355, 0.0142679909234182, -0.000468868303867781, 0.00111253654696108, -0.00185350357909168, 0.00276502813104142, -0.00396076168436717, 0.00562510339222, -0.00807036376968567, 0.0118363016014116, -0.0178434891653671, 0.0275433955304944, -0.042691940161373, 0.0633223614242652, -0.080109891285828, 0.056309710930611, 0.0855811726533695, -0.377689729915586, 0.530943510976982, -0.128528870869798, -0.0531663707978731, -0.1789305968351, -0.000179857074790607, 0.000424778482508715, -0.000701841685685938, 0.0010349457498163, -0.00146198019060064, 0.00204701011478122, -0.00290690366056272, 0.0042689481817148, -0.00659685280680786, 0.0108585214418963, -0.0190328222662091, 0.0347457499724218, -0.0625394891272995, 0.0992457184955704, -0.102863353151662, -0.0487120912959854, 0.422261465719134, -0.533575328603942, -0.00740862699824008, -0.0919640058757995, 5.64643325460189e-05, -0.000132192900459824, 0.000214865640016291, -0.000308984894249384, 0.000421346103054223, -0.000563013499620263, 0.000754517081363881, -0.00103933666806759, 0.00152076946608118, -0.00246570966908147, 0.00459514919494856, -0.00984751208726166, 0.0230351357220783, -0.0535412036448823, 0.107517269899436, -0.137654384846533, -0.0473313908603372, 0.522982640116367, -0.428902860475453, -0.0790978836795985, -1.42969772040814e-05, 3.30483558879901e-05, -5.24048193150005e-05, 7.23765119767416e-05, -9.26848237662595e-05, 0.0001123440727369, -0.000129033645277574, 0.000138284045418476, -0.000133670732121539, 0.000114759452547723, -0.000133480070986375, 0.000503019448766128, -0.00260686843113157, 0.011479304581861, -0.0410873474356743, 0.11004929270585, -0.1606411571046, -0.114354894038339, 0.656937199967395, -0.124951738136676, -2.78388413600173e-06, 6.32805302948e-06, -9.70060914261545e-06, 1.26263760718287e-05, -1.45666795674793e-05, 1.44114444288944e-05, -9.84855213358262e-06, -4.01935673744381e-06, 3.77678156335055e-05, -0.000114447312251313, 0.000282917794217346, -0.000632789918134309, 0.00123643889144633, -0.00155919561370497, -0.00260173368084527, 0.0288142665916593, -0.110747075877256, 0.163160755261375, 0.3125945310252, -0.60212691820442, 3.63846790038794e-07, -8.09876355046842e-07, 1.18784438071858e-06, -1.42080109709156e-06, 1.37080224174104e-06, -7.71826610241117e-07, -9.11919817156158e-07, 4.81311756201359e-06, -1.34702315816872e-05, 3.29617856154423e-05, -7.88316533424308e-05, 0.000192764528288309, -0.000485898292108403, 0.00121260356725821, -0.00259169505293342, 0.00217309845183775, 0.0182732707204768, -0.105339046431185, 0.116663564002333, 0.68916340246165).finished();
}
} // namespace mrcpp
} // namespace detail