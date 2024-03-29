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
auto get_I_H0_18() noexcept -> Eigen::Matrix<double, 19, 19> {
  return (Eigen::Matrix<double, 19, 19>() << 0.900026607328277, 0.426730448132066, -0.070109657073659, -0.0240149934151752, 0.0385798781981634, -0.0182575130677654, -0.006175143814691, 0.0148695592139287, -0.00562749600841187, -0.00690523288946117, 0.00671429663708907, 0.00341840853717339, -0.00495187455391816, -0.00357589587247189, 0.00174775304081327, 0.00367778190552442, 0.00250783559843088, 0.00091535397770716, 0.000116001327029391, -0.215551089584189, 0.59915655847839, 0.753134481666049, 0.0904709131928406, -0.115885075174226, 0.0498022973141616, 0.0160023408380229, -0.0373640641738829, 0.0138606502697449, 0.016776295779485, -0.0161541485649841, -0.00816605885298547, 0.0117667217929176, 0.00846334809013457, -0.00412421433395156, -0.00865942474752907, -0.00589547855949652, -0.00214960887704083, -0.000272264627327395, 0.128178879457401, -0.23813966007603, 0.206336406508226, 0.828356294489958, 0.416299745541708, -0.119007731789936, -0.0328117722309044, 0.0708170714984249, -0.025070022659262, -0.0294376385038556, 0.0277630073560021, 0.013828312053306, -0.0197115778727671, -0.0140648814097701, 0.00681331611684604, 0.0142434937469345, 0.00966733429185783, 0.00351777928616931, 0.000445070092502868, -0.0910273520017528, 0.154161705360892, -0.102662488228116, -0.101481210557089, 0.622802693170077, 0.722404128452966, 0.0820936870734007, -0.13964147856912, 0.0442051371076307, 0.0486944317616436, -0.0441007707479496, -0.0213722791080572, 0.0298831109091454, 0.021028043675109, -0.0100837532839183, -0.0209265687109362, -0.0141304024147363, -0.0051246197192004, -0.000647206985268915, 0.069944713680057, -0.114140544290961, 0.0699323904826619, 0.0575970910603439, -0.205528199531007, 0.249202298890582, 0.79950690081555, 0.446543351951289, -0.0928334490538892, -0.0866943953836695, 0.0719249239948545, 0.0330436651737591, -0.0446065204845617, -0.0306379809261959, 0.0144436062871922, 0.0296153029689002, 0.019831597072245, 0.00715379405132737, 0.000900908357138769, -0.0561429433457657, 0.0899176605372149, -0.05301093952539, -0.0407101457592883, 0.127286404137627, -0.114176392129432, -0.0792634511128521, 0.559399498665783, 0.74048181763278, 0.219840746129783, -0.138290265566086, -0.0558669237159307, 0.0700918392845306, 0.0459730049341668, -0.0210190437557347, -0.0422105782794321, -0.0278737624358258, -0.00996637365143557, -0.00124929253625067, 0.0462745349443981, -0.0733171803692354, 0.042317119207177, 0.0313645324071392, -0.0925530764751089, 0.0752312906396367, 0.0431973620057707, -0.184653639542759, 0.14446683374576, 0.690949639853488, 0.618520020786839, 0.13035220394816, -0.131244277025354, -0.0770547459410756, 0.0330159513073188, 0.0636564457615668, 0.0409563811094614, 0.0144127572747491, 0.00179186795466311, -0.0387738482779549, 0.0610181569443272, -0.0347641775171926, -0.025236934471686, 0.0721637937430114, -0.0559283789066287, -0.0297982497223299, 0.112126618858632, -0.0678658687440378, -0.142951196938018, 0.28713978529364, 0.681965824017272, 0.566543274095662, 0.187099545446233, -0.0649312464268785, -0.112467140919021, -0.0680877298203533, -0.0231410104428398, -0.0028277183127516, 0.0328068781109169, -0.0513949333480331, 0.029032966648418, 0.020798718332501, -0.058337991148035, 0.0439913727608458, 0.0225385381316334, -0.0800731865075933, 0.0443436264191513, 0.0803386815504305, -0.118907819465295, -0.0984238548522693, 0.268250059855618, 0.577795620180239, 0.573960562592318, 0.371935853599041, 0.169720699912797, 0.0508587092110568, 0.00587820027453908, -0.0278868510511003, 0.0435495914147747, -0.0244568707642123, -0.0173637701021257, 0.0480885120647668, -0.0356375732708665, -0.0178337529121005, 0.0613613078372964, -0.0325079627446305, -0.0552881716623463, 0.0744521721732035, 0.0529211640169519, -0.108981039926039, -0.115383783543575, 0.0868652398516018, 0.304858337423736, 0.397484985588077, 0.36376362550629, 0.245581450121939, 0.0237094562100927, -0.0369418140174514, 0.0206589510411524, 0.0145745798778171, -0.0400099762648792, 0.0293043706390473, 0.0144406863936783, -0.0487030681904283, 0.0251389828270461, 0.0413204836332724, -0.0531767734404122, -0.035552507335652, 0.0672741110713585, 0.0631711980669984, -0.0398909923486031, -0.107122894987106, -0.0909948008884498, -0.0396314652951802, -0.00560629852452339, -0.0200737994458382, 0.0312246318288346, -0.0174079348922648, -0.0122245262455798, 0.0333472252368964, -0.0242229091598136, -0.0118108142174419, 0.0393043336540709, -0.0199504960491054, -0.0321130716777407, 0.040263015114249, 0.0260588391862357, -0.0473666721961851, -0.0423406262992321, 0.0252058172769225, 0.0632607181766113, 0.050021579357711, 0.0204042111157619, 0.00276069602135704, 0.0168411077301397, -0.0261632929636141, 0.0145526682881413, 0.0101845820961329, -0.0276538997326012, 0.0199671264893228, 0.0096624528546621, -0.0318559106144345, 0.0159862212862626, 0.0253789923708814, -0.0312970140325032, -0.0198615363028094, 0.03528165267262, 0.0307203057675268, -0.0177655699083748, -0.0432568050748479, -0.033224530291268, -0.0132289601513099, -0.00176281824810525, -0.0139116511519983, 0.0215917819456208, -0.0119891061175207, -0.00836905929600269, 0.0226460662754288, -0.0162791659348831, -0.00783458279900411, 0.0256571373886483, -0.0127723593638291, -0.0200845478173797, 0.0244936201064666, 0.0153459110345729, -0.0268683527740402, -0.023025659893351, 0.0130940017779562, 0.031352413128033, 0.0237142167759705, 0.00932718269211796, 0.00123359600158425, 0.0112111175710451, -0.0173879595792958, 0.00964233611615078, 0.0067180166307383, -0.0181318871282847, 0.0129916193962477, 0.00622725859779746, -0.0202945197159937, 0.0100447869085556, 0.0156896476740475, -0.0189867784015374, -0.0117925459867516, 0.0204494456912929, 0.0173452999153281, -0.00975989462747711, -0.0231302464324619, -0.0173353630065118, -0.00676956237843974, -0.000891469768045608, -0.00868220680306715, 0.0134586028432786, -0.00745616955822367, -0.00518753876029425, 0.0139747580548284, -0.00998910860288825, -0.00477406647253871, 0.0155041616252685, -0.00764227934410148, -0.0118804208780527, 0.0142997422586051, 0.00882833047091504, -0.0152097229810107, -0.012812662513884, 0.00715960454511734, 0.0168557462065891, 0.0125595283533125, 0.00488261220949219, 0.000641261096696745, 0.00627934191941821, -0.00973015506569897, 0.00538688146044161, 0.00374409049013672, -0.0100727428242436, 0.00718779917815985, 0.00342816651105908, -0.0111059483092999, 0.00545866507761347, 0.00845804640862357, -0.0101429153332913, -0.00623656702102489, 0.0106976389017834, 0.00897070402338903, -0.00498997746846734, -0.0116974498789497, -0.00868346927883372, -0.00336613131364926, -0.00044134389208869, -0.00396584222120943, 0.00614373972287975, -0.00339980578207133, -0.00236143415321511, 0.00634739499903305, -0.00452442042658048, -0.0021549849286156, 0.00697019125717422, -0.00341955954666923, -0.00528732021462599, 0.00632559216709523, 0.00387935028119269, -0.00663590475685471, -0.00554876867303928, 0.00307777524720099, 0.00719573796231259, 0.00532942145187936, 0.0020623355848533, 0.000270120086158278, 0.00171829611161699, -0.00266156478699058, 0.0014724907446589, 0.00102239742261649, -0.00274684551782056, 0.00195678732299572, 0.00093134733982748, -0.00300982724591763, 0.00147515524318688, 0.00227832239387724, -0.00272230452674339, -0.00166725067994435, 0.00284780873353019, 0.00237770156979255, -0.00131690934677286, -0.00307464872900608, -0.00227449362044495, -0.00087937301688877, -0.000115117154006991).finished();
}
} // namespace mrcpp
} // namespace detail
