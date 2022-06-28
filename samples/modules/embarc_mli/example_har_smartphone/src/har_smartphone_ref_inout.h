/*
 * Copyright (c) 2022 Synopsys.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _HAR_SMARTPHONE_REF_INOUT_H_
#define _HAR_SMARTPHONE_REF_INOUT_H_

#define QIN(val)  (val)
#define QOUT(val) (val)
/* -------------- Model input sequence #300 ------------- */
#define IN_SEQ_300_SHAPE                                                       \
	{                                                                      \
		128, 9                                                         \
	}
#define IN_SEQ_300_RANK (2)

#define IN_SEQ_300                                                             \
	{                                                                      \
		QIN(-0.2656475902), QIN(+0.0890502930), QIN(+0.1197386011),    \
			QIN(-0.0667721480), QIN(+0.4174869061),                \
			QIN(+0.2140996009), QIN(+0.6703897119),                \
			QIN(-0.3859587908), QIN(+0.1485508978),                \
			QIN(-0.2110211998), QIN(+0.0181621592),                \
			QIN(+0.1266867965), QIN(+0.1041293964),                \
			QIN(+0.4281758964), QIN(+0.1799957007),                \
			QIN(+0.7255204916), QIN(-0.4566025138),                \
			QIN(+0.1542800963), QIN(-0.2325468957),                \
			QIN(+0.0509771183), QIN(+0.1706945002),                \
			QIN(+0.1526388973), QIN(+0.3316060007),                \
			QIN(+0.1891131997), QIN(+0.7044278979),                \
			QIN(-0.4235166013), QIN(+0.1970617026),                \
			QIN(-0.2120518982), QIN(+0.0316495411),                \
			QIN(+0.1931414008), QIN(+0.1044277996),                \
			QIN(+0.2308353037), QIN(+0.1877626926),                \
			QIN(+0.7252774835), QIN(-0.4425474107),                \
			QIN(+0.2182870060), QIN(-0.2187959999),                \
			QIN(+0.0507996492), QIN(+0.1960123926),                \
			QIN(+0.1107641980), QIN(-0.0227899607),                \
			QIN(+0.2093421966), QIN(+0.7188023925),                \
			QIN(-0.4230752885), QIN(+0.2199532986),                \
			QIN(-0.1951511055), QIN(+0.0751518309),                \
			QIN(+0.2100867927), QIN(+0.1291911006),                \
			QIN(-0.1842302978), QIN(+0.1357845068),                \
			QIN(+0.7426252961), QIN(-0.3983761072),                \
			QIN(+0.2328516990), QIN(-0.1345258951),                \
			QIN(+0.0597319901), QIN(+0.2112257034),                \
			QIN(+0.1355870962), QIN(-0.2685300112),                \
			QIN(+0.0506675690), QIN(+0.8033332825),                \
			QIN(-0.4134238064), QIN(+0.2328549027),                \
			QIN(-0.1198687032), QIN(+0.0775187686),                \
			QIN(+0.2239865959), QIN(+0.1154244021),                \
			QIN(-0.4446629882), QIN(+0.0555619001),                \
			QIN(+0.8179762959), QIN(-0.3952391148),                \
			QIN(+0.2445316017), QIN(-0.0432972796),                \
			QIN(+0.0566516407), QIN(+0.2203126997),                \
			QIN(+0.1054249033), QIN(-0.5256443024),                \
			QIN(+0.0682887807), QIN(+0.8944370747),                \
			QIN(-0.4156818986), QIN(+0.2398355007),                \
			QIN(+0.0821044520), QIN(+0.0524857081),                \
			QIN(+0.2138659954), QIN(+0.0824190974),                \
			QIN(-0.5327308774), QIN(+0.0498909391),                \
			QIN(+1.0196360350), QIN(-0.4193969965),                \
			QIN(+0.2324381024), QIN(+0.2042192072),                \
			QIN(+0.0203578696), QIN(+0.2046318948),                \
			QIN(+0.0004588800), QIN(-0.5695121288),                \
			QIN(+0.0593195893), QIN(+1.1414630413),                \
			QIN(-0.4510478079), QIN(+0.2223332971),                \
			QIN(+0.2933427095), QIN(-0.0791534483),                \
			QIN(+0.1500453055), QIN(-0.0404464491),                \
			QIN(-0.6735122204), QIN(+0.1121978983),                \
			QIN(+1.2302290201), QIN(-0.5500578284),                \
			QIN(+0.1669631004), QIN(+0.3778696060),                \
			QIN(-0.2203941941), QIN(+0.1159992963),                \
			QIN(+0.1325228065), QIN(-0.6608399153),                \
			QIN(+0.1486075073), QIN(+1.3143479824),                \
			QIN(-0.6907784939), QIN(+0.1322256029),                \
			QIN(+0.4881280065), QIN(-0.3349061012),                \
			QIN(+0.1328293979), QIN(+0.3515259027),                \
			QIN(-0.2550627887), QIN(+0.1427921057),                \
			QIN(+1.4241679907), QIN(-0.8047620058),                \
			QIN(+0.1484586000), QIN(+0.3992249966),                \
			QIN(-0.2311879992), QIN(+0.1512475014),                \
			QIN(+0.2319906056), QIN(+0.1130649969),                \
			QIN(+0.0921131074), QIN(+1.3348230124),                \
			QIN(-0.7005221248), QIN(+0.1663756967),                \
			QIN(+0.1379908025), QIN(-0.1045235023),                \
			QIN(+0.1504042000), QIN(-0.0359510891),                \
			QIN(-0.2067123950), QIN(+0.0594448596),                \
			QIN(+1.0731639862), QIN(-0.5733563900),                \
			QIN(+0.1651290953), QIN(-0.0178286098),                \
			QIN(-0.1554913968), QIN(+0.1415144950),                \
			QIN(-0.1149939001), QIN(-0.6622985005),                \
			QIN(+0.0601811185), QIN(+0.9169512987),                \
			QIN(-0.6238530874), QIN(+0.1559353024),                \
			QIN(-0.0576180816), QIN(-0.2445766032),                \
			QIN(+0.0949139223), QIN(+0.0707482621),                \
			QIN(-0.5656766295), QIN(-0.0143456198),                \
			QIN(+0.8768023252), QIN(-0.7125043869),                \
			QIN(+0.1091307998), QIN(-0.0442987084),                \
			QIN(-0.3136160970), QIN(+0.0014718201),                \
			QIN(+0.3817450106), QIN(-0.5261825919),                \
			QIN(-0.1709485948), QIN(+0.8897941113),                \
			QIN(-0.7811563015), QIN(+0.0155836903),                \
			QIN(-0.0882683992), QIN(-0.2919239104),                \
			QIN(-0.0451374501), QIN(+0.3643963933),                \
			QIN(-0.7265639901), QIN(-0.3201371133),                \
			QIN(+0.8455246091), QIN(-0.7591341138),                \
			QIN(-0.0310359802), QIN(-0.2000100017),                \
			QIN(-0.2302749008), QIN(-0.0392248295),                \
			QIN(+0.2861497104), QIN(-0.8016495109),                \
			QIN(-0.4210231900), QIN(+0.7335056067),                \
			QIN(-0.6972243190), QIN(-0.0250465106),                \
			QIN(-0.1951138973), QIN(-0.2635810971),                \
			QIN(-0.0416220315), QIN(+0.5443431735),                \
			QIN(-0.8820257187), QIN(-0.4875521958),                \
			QIN(+0.7381386161), QIN(-0.7303482294),                \
			QIN(-0.0272880606), QIN(-0.1351938993),                \
			QIN(-0.2425062060), QIN(-0.0529685318),                \
			QIN(+0.7606136203), QIN(-0.7527505159),                \
			QIN(-0.4922575951), QIN(+0.7978006005),                \
			QIN(-0.7091774940), QIN(-0.0384084508),                \
			QIN(-0.0885908604), QIN(-0.1608140022),                \
			QIN(-0.0834470391), QIN(+0.9868586063),                \
			QIN(-0.4923514128), QIN(-0.4535337985),                \
			QIN(+0.8441426158), QIN(-0.6274822950),                \
			QIN(-0.0685987473), QIN(-0.0191943794),                \
			QIN(-0.1337234974), QIN(-0.1004637033),                \
			QIN(+1.1976350546), QIN(-0.4554896057),                \
			QIN(-0.4575757980), QIN(+0.9132704139),                \
			QIN(-0.6004850864), QIN(-0.0852739736),                \
			QIN(-0.0310226995), QIN(-0.0382971391),                \
			QIN(-0.0690582916), QIN(+1.1554960012),                \
			QIN(-0.5362299085), QIN(-0.4581052065),                \
			QIN(+0.9011636972), QIN(-0.5052487254),                \
			QIN(-0.0534829907), QIN(-0.0840685293),                \
			QIN(+0.0702307969), QIN(-0.0449373908),                \
			QIN(+1.1019020081), QIN(-0.7145488858),                \
			QIN(-0.4193001091), QIN(+0.8478294015),                \
			QIN(-0.3970037997), QIN(-0.0289408099),                \
			QIN(-0.1145346984), QIN(+0.0937020630),                \
			QIN(-0.0659724772), QIN(+0.9819340110),                \
			QIN(-0.7569308877), QIN(-0.3364942968),                \
			QIN(+0.8170629144), QIN(-0.3739007115),                \
			QIN(-0.0495259315), QIN(-0.1320517063),                \
			QIN(+0.1024082005), QIN(-0.0866726637),                \
			QIN(+0.8841025829), QIN(-0.6709676981),                \
			QIN(-0.2452495992), QIN(+0.7992305756),                \
			QIN(-0.3656370938), QIN(-0.0697538927),                \
			QIN(-0.0995409563), QIN(+0.0654229298),                \
			QIN(-0.0905213282), QIN(+0.9535663724),                \
			QIN(-0.6601170897), QIN(-0.2994473875),                \
			QIN(+0.8314070106), QIN(-0.4031279981),                \
			QIN(-0.0731148496), QIN(-0.0924342722),                \
			QIN(+0.0234495606), QIN(-0.1189953014),                \
			QIN(+0.9680472016), QIN(-0.5412766933),                \
			QIN(-0.4231497049), QIN(+0.8381568789),                \
			QIN(-0.4456599951), QIN(-0.1010927036),                \
			QIN(-0.1297371984), QIN(+0.0200669598),                \
			QIN(-0.1350937933), QIN(+1.0340139866),                \
			QIN(-0.4719437063), QIN(-0.4643484950),                \
			QIN(+0.8004717827), QIN(-0.4496465027),                \
			QIN(-0.1166941002), QIN(-0.1641584039),                \
			QIN(+0.0255268998), QIN(-0.1103812978),                \
			QIN(+1.1617449522), QIN(-0.5075417161),                \
			QIN(-0.4166294932), QIN(+0.7656400800),                \
			QIN(-0.4448294044), QIN(-0.0914912000),                \
			QIN(-0.1878011972), QIN(+0.0502869785),                \
			QIN(-0.1083427966), QIN(+1.2451879978),                \
			QIN(-0.5501217246), QIN(-0.2849363983),                \
			QIN(+0.7415540218), QIN(-0.4207448959),                \
			QIN(-0.0889760926), QIN(-0.1649620980),                \
			QIN(+0.0676814690), QIN(-0.1367082000),                \
			QIN(+1.3017400503), QIN(-0.6537361145),                \
			QIN(-0.2291426063), QIN(+0.7639119029),                \
			QIN(-0.4040527046), QIN(-0.1168849021),                \
			QIN(-0.1191997007), QIN(+0.1075545028),                \
			QIN(-0.1582393944), QIN(+1.2703950405),                \
			QIN(-0.6656227112), QIN(-0.3092459142),                \
			QIN(+0.8091508150), QIN(-0.3649016023),                \
			QIN(-0.1379859000), QIN(-0.0456611700),                \
			QIN(+0.1497063041), QIN(-0.1519397944),                \
			QIN(+1.2340409756), QIN(-0.6175370812),                \
			QIN(-0.3557515144), QIN(+0.8821207285),                \
			QIN(-0.3234832883), QIN(-0.1312890053),                \
			QIN(+0.0365611315), QIN(+0.1431072056),                \
			QIN(-0.1291957051), QIN(+1.2272889614),                \
			QIN(-0.5430480242), QIN(-0.3273841143),                \
			QIN(+0.9637303948), QIN(-0.3308182061),                \
			QIN(-0.1081871018), QIN(+0.0443097986),                \
			QIN(+0.1442663074), QIN(-0.1098084971),                \
			QIN(+1.2235000134), QIN(-0.4518702924),                \
			QIN(-0.2861733139), QIN(+0.9708263874),                \
			QIN(-0.3303878903), QIN(-0.0884865671),                \
			QIN(+0.0257391408), QIN(+0.1626687944),                \
			QIN(-0.0741774589), QIN(+1.2350660563),                \
			QIN(-0.4717526138), QIN(-0.2371567041),                \
			QIN(+0.9515693784), QIN(-0.3126978874),                \
			QIN(-0.0525907613), QIN(+0.0293648094),                \
			QIN(+0.1855563074), QIN(-0.0418377705),                \
			QIN(+1.2319760323), QIN(-0.4829497933),                \
			QIN(-0.1523288935), QIN(+0.9544810057),                \
			QIN(-0.2904978991), QIN(-0.0200365093),                \
			QIN(+0.0419792682), QIN(+0.2079448998),                \
			QIN(-0.0227391403), QIN(+1.1957340240),                \
			QIN(-0.4147813916), QIN(-0.0913603902),                \
			QIN(+0.9663591981), QIN(-0.2687627971),                \
			QIN(-0.0007736100), QIN(+0.0555077195),                \
			QIN(+0.2451000065), QIN(+0.0103797000),                \
			QIN(+1.0830750465), QIN(-0.3628757894),                \
			QIN(-0.0504157506), QIN(+0.9791349769),                \
			QIN(-0.2322175056), QIN(+0.0324607491),                \
			QIN(+0.0417791903), QIN(+0.2947795093),                \
			QIN(+0.0370952114), QIN(+0.9190669060),                \
			QIN(-0.3670567870), QIN(+0.0635142326),                \
			QIN(+0.9646427035), QIN(-0.1830938011),                \
			QIN(+0.0592459701), QIN(+0.0315776505),                \
			QIN(+0.2948555052), QIN(+0.0587538593),                \
			QIN(+0.7451037765), QIN(-0.3886077106),                \
			QIN(+0.1545642018), QIN(+0.9536718130),                \
			QIN(-0.1835082024), QIN(+0.0809328184),                \
			QIN(+0.0574905686), QIN(+0.2730753124),                \
			QIN(+0.0735078901), QIN(+0.5775508881),                \
			QIN(-0.4303005040), QIN(+0.1613312960),                \
			QIN(+0.9788143039), QIN(-0.2057023048),                \
			QIN(+0.0956788734), QIN(+0.1276187003),                \
			QIN(+0.2407142967), QIN(+0.0725604817),                \
			QIN(+0.4999884963), QIN(-0.4951117933),                \
			QIN(+0.1006285995), QIN(+1.0481760502),                \
			QIN(-0.2383904010), QIN(+0.0946932137),                \
			QIN(+0.2855378091), QIN(+0.1609333009),                \
			QIN(+0.0969936773), QIN(+0.5379897952),                \
			QIN(-0.4806537926), QIN(+0.0019770500),                \
			QIN(+1.2053400278), QIN(-0.3184044063),                \
			QIN(+0.1190640032), QIN(+0.4534774125),                \
			QIN(+0.0955826119), QIN(+0.1161539033),                \
			QIN(+0.5690580010), QIN(-0.4215407968),                \
			QIN(+0.0229604896), QIN(+1.3725479841),                \
			QIN(-0.3838899136), QIN(+0.1381441951),                \
			QIN(+0.4977749884), QIN(+0.0812088475),                \
			QIN(+0.0572791584), QIN(+0.4836356044),                \
			QIN(-0.3152456880), QIN(+0.1389508992),                \
			QIN(+1.4161570072), QIN(-0.3983001113),                \
			QIN(+0.0791781619), QIN(+0.5024124980),                \
			QIN(+0.0450215712), QIN(-0.0544903688),                \
			QIN(+0.2474302948), QIN(-0.0811441168),                \
			QIN(+0.2317773998), QIN(+1.4201710224),                \
			QIN(-0.4344277084), QIN(-0.0326892212),                \
			QIN(+0.5201023817), QIN(-0.0985125303),                \
			QIN(-0.1353908926), QIN(-0.0727999285),                \
			QIN(+0.1288394928), QIN(+0.2618817985),                \
			QIN(+1.4373250008), QIN(-0.5778107047),                \
			QIN(-0.1136934981), QIN(+0.3952515125),                \
			QIN(-0.3216347098), QIN(-0.1858758926),                \
			QIN(-0.0844976977), QIN(+0.2586385906),                \
			QIN(+0.2781639993), QIN(+1.3120460510),                \
			QIN(-0.8007000089), QIN(-0.1642917991),                \
			QIN(+0.2072754949), QIN(-0.4248689115),                \
			QIN(-0.2511956990), QIN(+0.2645102143),                \
			QIN(+0.4048095942), QIN(+0.5090767741),                \
			QIN(+1.1237649918), QIN(-0.9036368728),                \
			QIN(-0.2297417969), QIN(+0.1394252926),                \
			QIN(-0.2757815123), QIN(-0.2513191998),                \
			QIN(+0.3934491873), QIN(+0.4926173091),                \
			QIN(+0.7139701247), QIN(+1.0557420254),                \
			QIN(-0.7542098165), QIN(-0.2300217003),                \
			QIN(+0.0797736868), QIN(-0.0880192816),                \
			QIN(-0.1845089048), QIN(+0.1903046966),                \
			QIN(+0.4164687097), QIN(+0.4316881001),                \
			QIN(+0.9960498214), QIN(-0.5660858750),                \
			QIN(-0.1634037942), QIN(-0.0169613808),                \
			QIN(-0.0372902006), QIN(-0.1481841952),                \
			QIN(+0.0303205308), QIN(+0.2004300058),                \
			QIN(+0.1319307983), QIN(+0.8994022012),                \
			QIN(-0.5149856806), QIN(-0.1273154020),                \
			QIN(-0.0254220292), QIN(-0.0111154197),                \
			QIN(-0.0734806210), QIN(+0.1531725973),                \
			QIN(+0.0023833399), QIN(+0.2992928922),                \
			QIN(+0.8911496997), QIN(-0.4884364009),                \
			QIN(-0.0528966598), QIN(+0.0461228490),                \
			QIN(-0.0128835896), QIN(-0.0178159401),                \
			QIN(+0.4528285861), QIN(+0.0158409309),                \
			QIN(+0.4463008046), QIN(+0.9630138874),                \
			QIN(-0.4898295105), QIN(+0.0024333100),                \
			QIN(+0.0687106177), QIN(-0.0122057796),                \
			QIN(-0.0641407892), QIN(+0.6759648919),                \
			QIN(+0.2377867997), QIN(+0.4079461992),                \
			QIN(+0.9860240817), QIN(-0.4887779057),                \
			QIN(-0.0442747101), QIN(-0.0417291000),                \
			QIN(+0.0891274363), QIN(-0.0427151807),                \
			QIN(+0.7506473064), QIN(+0.4308066964),                \
			QIN(+0.4389455914), QIN(+0.8761029840),                \
			QIN(-0.3870730102), QIN(-0.0232784897),                \
			QIN(-0.1982847005), QIN(+0.1787834018),                \
			QIN(+0.0057739299), QIN(+0.5306590796),                \
			QIN(+0.3839665055), QIN(+0.3426539004),                \
			QIN(+0.7201533914), QIN(-0.2970458865),                \
			QIN(+0.0247373693), QIN(-0.2461317033),                \
			QIN(+0.2159367949), QIN(+0.0023979000),                \
			QIN(+0.2291450948), QIN(+0.2091954052),                \
			QIN(+0.2580429018), QIN(+0.6729859114),                \
			QIN(-0.2595162988), QIN(+0.0208476298),                \
			QIN(-0.2078769058), QIN(+0.1951469928),                \
			QIN(+0.0346674286), QIN(+0.1121103987),                \
			QIN(+0.1602147073), QIN(+0.3657785952),                \
			QIN(+0.7119762897), QIN(-0.2799169123),                \
			QIN(+0.0525674298), QIN(-0.2253376991),                \
			QIN(+0.1421473026), QIN(+0.0568141192),                \
			QIN(-0.0083422596), QIN(+0.3014419973),                \
			QIN(+0.4005055130), QIN(+0.6952896118),                \
			QIN(-0.3325062096), QIN(+0.0741335973),                \
			QIN(-0.2725518942), QIN(+0.1487036943),                \
			QIN(+0.0850437880), QIN(-0.0183507595),                \
			QIN(+0.4553044140), QIN(+0.4159404039),                \
			QIN(+0.6488714218), QIN(-0.3255121112),                \
			QIN(+0.1017581001), QIN(-0.2745529115),                \
			QIN(+0.1598750055), QIN(+0.1159967035),                \
			QIN(-0.0268087201), QIN(+0.3901863992),                \
			QIN(+0.3964569867), QIN(+0.6476716995),                \
			QIN(-0.3138709068), QIN(+0.1320883930),                \
			QIN(-0.2807449102), QIN(+0.1926115006),                \
			QIN(+0.1079557016), QIN(-0.1814955026),                \
			QIN(+0.3337635100), QIN(+0.3289914131),                \
			QIN(+0.6422700286), QIN(-0.2806279957),                \
			QIN(+0.1234152988), QIN(-0.2572388947),                \
			QIN(+0.2120421976), QIN(+0.1158076972),                \
			QIN(-0.3112066090), QIN(+0.5026739836),                \
			QIN(+0.3315207958), QIN(+0.6665396094),                \
			QIN(-0.2606492043), QIN(+0.1306336969),                \
			QIN(-0.2086185962), QIN(+0.1305048019),                \
			QIN(+0.1049508974), QIN(-0.5969355106),                \
			QIN(+0.5675467253), QIN(+0.2029964030),                \
			QIN(+0.7158833146), QIN(-0.3415915966),                \
			QIN(+0.1191494986), QIN(-0.2168498933),                \
			QIN(+0.0316480994), QIN(+0.1016096994),                \
			QIN(-0.8523073792), QIN(+0.5062056184),                \
			QIN(+0.0395632200), QIN(+0.7083237767),                \
			QIN(-0.4398033917), QIN(+0.1151937991),                \
			QIN(-0.2060534954), QIN(-0.0735258982),                \
			QIN(+0.1329194009), QIN(-0.8207464814),                \
			QIN(+0.4825141132), QIN(+0.0099110398),                \
			QIN(+0.7197309732), QIN(-0.5442839265),                \
			QIN(+0.1459082961), QIN(-0.1448891014),                \
			QIN(-0.1429540068), QIN(+0.1820722967),                \
			QIN(-0.6665701270), QIN(+0.4061841071),                \
			QIN(-0.0322135910), QIN(+0.7814376950),                \
			QIN(-0.6129763126), QIN(+0.1944921017),                \
			QIN(-0.1028947979), QIN(-0.1399344951),                \
			QIN(+0.2621628046), QIN(-0.4079408944),                \
			QIN(+0.3079011142), QIN(-0.1335622072),                \
			QIN(+0.8239002824), QIN(-0.6091886759),                \
			QIN(+0.2740474939), QIN(-0.0482120104),                \
			QIN(-0.1324304938), QIN(+0.2633360922),                \
			QIN(-0.1787818074), QIN(+0.1984429061),                \
			QIN(-0.2006787062), QIN(+0.8789749742),                \
			QIN(-0.6008958220), QIN(+0.2747299969),                \
			QIN(+0.1213262975), QIN(-0.1134257019),                \
			QIN(+0.1893837005), QIN(-0.1939388067),                \
			QIN(+0.1064065993), QIN(-0.1269997954),                \
			QIN(+1.0488300323), QIN(-0.5810915232),                \
			QIN(+0.2003418058), QIN(+0.3289873004),                \
			QIN(-0.1013054028), QIN(+0.1332052052),                \
			QIN(-0.4234102964), QIN(+0.0708893612),                \
			QIN(+0.0460077599), QIN(+1.2567410469),                \
			QIN(-0.5681707263), QIN(+0.1437907964),                \
			QIN(+0.3689554930), QIN(-0.1221271977),                \
			QIN(+0.1165795028), QIN(-0.4957529902),                \
			QIN(+0.0495592803), QIN(+0.3237713873),                \
			QIN(+1.2969059944), QIN(-0.5881987214),                \
			QIN(+0.1268611997), QIN(+0.4686045945),                \
			QIN(-0.1974558979), QIN(+0.1583057046),                \
			QIN(-0.1521193981), QIN(+0.1061991006),                \
			QIN(+0.4246593118), QIN(+1.3967200518),                \
			QIN(-0.6627486944), QIN(+0.1683551073),                \
			QIN(+0.7351449728), QIN(-0.2762236893),                \
			QIN(+0.1780664027), QIN(+0.0806530192),                \
			QIN(+0.2327684015), QIN(-0.0732393563),                \
			QIN(+1.6634190083), QIN(-0.7407624125),                \
			QIN(+0.1879575998), QIN(+0.5789796710),                \
			QIN(-0.2339449972), QIN(+0.1335424036),                \
			QIN(-0.5055475235), QIN(+0.2572959065),                \
			QIN(-0.4860169888), QIN(+1.5074349642),                \
			QIN(-0.6977658868), QIN(+0.1433530003),                \
			QIN(+0.0042536501), QIN(-0.1321880966),                \
			QIN(+0.0220429096), QIN(-1.4291960001),                \
			QIN(+0.0233216994), QIN(-0.1628479958),                \
			QIN(+0.9329380989), QIN(-0.5953387022),                \
			QIN(+0.0318520218), QIN(-0.3459522128),                \
			QIN(-0.0759712681), QIN(-0.1101349965),                \
			QIN(-1.5716559887), QIN(-0.2050054073),                \
			QIN(+0.1029646024), QIN(+0.5830203891),                \
			QIN(-0.5385072231), QIN(-0.1002504975),                \
			QIN(-0.2609218061), QIN(-0.1037274003),                \
			QIN(-0.0971169993), QIN(-1.1313079596),                \
			QIN(-0.0834295079), QIN(-0.1429843009),                \
			QIN(+0.6683878899), QIN(-0.5657078028),                \
			QIN(-0.0870873109), QIN(+0.0111403205),                \
			QIN(-0.2040051073), QIN(-0.0399196707),                \
			QIN(-0.7029201984), QIN(+0.1254294068),                \
			QIN(-0.2892923951), QIN(+0.9408199191),                \
			QIN(-0.6654921770), QIN(-0.0296847895),                \
			QIN(+0.0382577889), QIN(-0.2615900040),                \
			QIN(-0.0718281865), QIN(-0.2360392064),                \
			QIN(+0.2323192954), QIN(-0.3457179070),                \
			QIN(+0.9683297873), QIN(-0.7226508260),                \
			QIN(-0.0613367893), QIN(-0.0298399404),                \
			QIN(-0.2240210027), QIN(-0.0476018898),                \
			QIN(+0.0095592299), QIN(+0.2991425991),                \
			QIN(-0.4856218100), QIN(+0.9006435275),                \
			QIN(-0.6847301126), QIN(-0.0368101709),                \
			QIN(-0.0298455805), QIN(-0.1132171005),                \
			QIN(-0.0161917899), QIN(-0.0103249401),                \
			QIN(+0.1889798045), QIN(-0.3944608867),                \
			QIN(+0.9010657072), QIN(-0.5736560225),                \
			QIN(-0.0050626202), QIN(-0.1757639050),                \
			QIN(+0.0299571995), QIN(-0.0357348397),                \
			QIN(-0.0550531782), QIN(+0.0323153287),                \
			QIN(-0.3501367867), QIN(+0.7555872798),                \
			QIN(-0.4302959144), QIN(-0.0242366605),                \
			QIN(-0.1495935023), QIN(+0.1287572980),                \
			QIN(-0.0026748099), QIN(-0.1535681039),                \
			QIN(-0.0048961202), QIN(-0.3563711047),                \
			QIN(+0.7822024822), QIN(-0.3313908875),                \
			QIN(+0.0092193298), QIN(-0.0532612912),                \
			QIN(+0.1685840040), QIN(-0.0062601198),                \
			QIN(-0.2936849892), QIN(-0.0649805367),                \
			QIN(-0.1504694968), QIN(+0.8789759278),                \
			QIN(-0.2915312946), QIN(+0.0060530002),                \
			QIN(-0.0980535969), QIN(+0.1814137995),                \
			QIN(-0.0313833691), QIN(-0.4484235942),                \
			QIN(-0.0813367218), QIN(-0.1281892955),                \
			QIN(+0.8346146941), QIN(-0.2787283063),                \
			QIN(-0.0186316893), QIN(-0.0976704508),                \
			QIN(+0.1559333056), QIN(-0.0101197297),                \
			QIN(-0.5217608809), QIN(-0.0395261012),                \
			QIN(-0.2099640965), QIN(+0.8354136944),                \
			QIN(-0.3042821884), QIN(+0.0030866601),                \
			QIN(-0.2343408018), QIN(+0.1098911017),                \
			QIN(-0.0129867299), QIN(-0.5012130737),                \
			QIN(-0.0490402915), QIN(-0.2476934940),                \
			QIN(+0.6991385221), QIN(-0.3504326940),                \
			QIN(+0.0006872000), QIN(-0.2920975089),                \
			QIN(+0.1042241976), QIN(+0.0075492999),                \
			QIN(-0.4226956069), QIN(-0.0344696194),                \
			QIN(-0.3196173012), QIN(+0.6417474151),                \
			QIN(-0.3562327027), QIN(+0.0217007492),                \
			QIN(-0.2435331941), QIN(+0.1189737990),                \
			QIN(+0.0103586903), QIN(-0.2609229982),                \
			QIN(-0.1024376005), QIN(-0.1896630973),                \
			QIN(+0.6906368136), QIN(-0.3416331112),                \
			QIN(+0.0249955207), QIN(-0.2693848014),                \
			QIN(+0.1419634074), QIN(-0.0232768394),                \
			QIN(-0.1779949963), QIN(-0.2330262065),                \
			QIN(-0.0075666201), QIN(+0.6650580764),                \
			QIN(-0.3188028038), QIN(-0.0081485501),                \
			QIN(-0.1492920965), QIN(+0.1989396065),                \
			QIN(-0.0238140598), QIN(-0.2222785950),                \
			QIN(-0.2211845964), QIN(+0.0355959497),                \
			QIN(+0.7853618860), QIN(-0.2619870007),                \
			QIN(-0.0081903804), QIN(-0.0719862282),                \
			QIN(+0.2355622947), QIN(-0.0483098701),                \
			QIN(-0.3323700130), QIN(-0.1450973004),                \
			QIN(-0.0425109118), QIN(+0.8628106117),                \
			QIN(-0.2255166024), QIN(-0.0321896598),                \
			QIN(-0.0427478887), QIN(+0.2296411991),                \
			QIN(-0.0419617407), QIN(-0.4894013107),                \
			QIN(-0.0975472778), QIN(-0.1193626970),                \
			QIN(+0.8921219110), QIN(-0.2315710932),                \
			QIN(-0.0253471304), QIN(+0.0281786397),                \
			QIN(+0.1892742962), QIN(-0.0008907100),                \
			QIN(-0.5617328286), QIN(-0.1305903047),                \
			QIN(-0.0020934499), QIN(+0.9630535245),                \
			QIN(-0.2720418870), QIN(+0.0162130706),                \
			QIN(+0.0917771310), QIN(+0.1196502969),                \
			QIN(+0.0100723300), QIN(-0.5425502062),                \
			QIN(-0.1455024928), QIN(+0.1000444964),                \
			QIN(+1.0265940428), QIN(-0.3417319953),                \
			QIN(+0.0276580006), QIN(+0.2096678019),                \
			QIN(+0.0756062791), QIN(+0.0293410607),                \
			QIN(-0.6310783029), QIN(+0.0298243500),                \
			QIN(+0.0758653209), QIN(+1.1443710327),                \
			QIN(-0.3857986927), QIN(+0.0474006794),                \
			QIN(+0.2114084065), QIN(+0.0369949602),                \
			QIN(+0.0409190990), QIN(-0.8065826893),                \
			QIN(+0.1992612034), QIN(-0.0027721100),                \
			QIN(+1.1459549665), QIN(-0.4243873060),                \
			QIN(+0.0594450012), QIN(+0.2294919938),                \
			QIN(-0.0249587093), QIN(+0.0798142478),                \
			QIN(-0.7689995766), QIN(+0.1720775962),                \
			QIN(-0.0514038391), QIN(+1.1638519764),                \
			QIN(-0.4862732887), QIN(+0.0987999812),                \
			QIN(+0.3143360019), QIN(-0.0783887431),                \
			QIN(+0.0908083022), QIN(-0.4577291012),                \
			QIN(+0.0666963086), QIN(+0.1577087045),                \
			QIN(+1.2484949827), QIN(-0.5395941138),                \
			QIN(+0.1102498025), QIN(+0.3431007862),                \
			QIN(-0.1389016062), QIN(-0.0517618209),                \
			QIN(-0.3025518954), QIN(+0.0098070996),                \
			QIN(+0.2911565900), QIN(+1.2770589590),                \
			QIN(-0.5999618769), QIN(-0.0318664797),                \
			QIN(+0.4412865043), QIN(-0.2569588125),                \
			QIN(-0.2371809036), QIN(-0.8125813007),                \
			QIN(-0.0167744793), QIN(-0.1484522969),                \
			QIN(+1.3750629425), QIN(-0.7178475261),                \
			QIN(-0.2168349028), QIN(+0.4432004094),                \
			QIN(-0.4632470906), QIN(-0.3245913088),                \
			QIN(-1.2719889879), QIN(+0.0517359897),                \
			QIN(-0.4499576986), QIN(+1.3768320084),                \
			QIN(-0.9239510894), QIN(-0.3038058877),                \
			QIN(+0.3302367926), QIN(-0.5890976191),                \
			QIN(-0.3366658092), QIN(-0.5122547746),                \
			QIN(+0.3907009065), QIN(+0.3051530123),                \
			QIN(+1.2637799978), QIN(-1.0496239662),                \
			QIN(-0.3154661059), QIN(+0.2597191036),                \
			QIN(-0.4758968055), QIN(-0.3430603147),                \
			QIN(+0.2520701885), QIN(+0.8867024183),                \
			QIN(+0.9611166120), QIN(+1.1932469606),                \
			QIN(-0.9362775087), QIN(-0.3214873075),                \
			QIN(+0.1782809943), QIN(-0.3264746070),                \
			QIN(-0.2736436129), QIN(-0.1402277052),                \
			QIN(+1.1055860519), QIN(+0.2194132954),                \
			QIN(+1.1118760109), QIN(-0.7867653966),                \
			QIN(-0.2517530918), QIN(+0.0563404895),                \
			QIN(-0.1709644943), QIN(-0.1074554995),                \
			QIN(-0.2935062945), QIN(+0.9354770184),                \
			QIN(-0.4696958959), QIN(+0.9900889993),                \
			QIN(-0.6312379241), QIN(-0.0853153095),                \
			QIN(-0.0896820799), QIN(+0.0987752974),                \
			QIN(-0.0086891698), QIN(-0.1112049967),                \
			QIN(+0.7963472009), QIN(-0.1114028022),                \
			QIN(+0.8443065882), QIN(-0.3615601063),                \
			QIN(+0.0136278300), QIN(-0.1008946970),                \
			QIN(+0.2104444057), QIN(-0.0051551801),                \
			QIN(-0.4489387870), QIN(+0.7591922879),                \
			QIN(+0.1579363048), QIN(+0.8334133029),                \
			QIN(-0.2500286102), QIN(+0.0172663406),                \
			QIN(-0.0459029712), QIN(+0.1617795974),                \
			QIN(-0.0200922899), QIN(-0.5539835095),                \
			QIN(+0.7058495879), QIN(+0.2747004032),                \
			QIN(+0.8887932897), QIN(-0.2988946140),                \
			QIN(+0.0023653801), QIN(-0.0871870294),                \
			QIN(+0.1841800958), QIN(-0.0131892702),                \
			QIN(-0.5217393041), QIN(+0.7727879286),                \
			QIN(+0.4647017121), QIN(+0.8479561806),                \
			QIN(-0.2767449021), QIN(+0.0092404103),                \
			QIN(-0.0704399571), QIN(+0.1764580011),                \
			QIN(+0.0010990601), QIN(-0.7658683062),                \
			QIN(+0.7526674867), QIN(+0.3143477142),                \
			QIN(+0.8651999235), QIN(-0.2847538888),                \
			QIN(+0.0234406702), QIN(-0.0860383511),                \
			QIN(+0.1415528059), QIN(-0.0053642299),                \
			QIN(-0.7467436790), QIN(+0.6881737113),                \
			QIN(+0.3150467873), QIN(+0.8501390219),                \
			QIN(-0.3199695945), QIN(+0.0168334302),                \
			QIN(-0.2741228938), QIN(+0.0925097466),                \
			QIN(+0.0150461802), QIN(-0.6010261178),                \
			QIN(+0.6850335002), QIN(+0.3985449076),                \
			QIN(+0.6626229286), QIN(-0.3693364859),                \
			QIN(+0.0370484106), QIN(-0.4333316982),                \
			QIN(-0.0115791801), QIN(+0.0394772105),                \
			QIN(-0.4042774141), QIN(+0.5112752914),                \
			QIN(+0.2572372854), QIN(+0.5039994717),                \
			QIN(-0.4737550020), QIN(+0.0612372383),                \
			QIN(-0.3954609931), QIN(-0.0027206601),                \
			QIN(+0.0536586009), QIN(-0.1602662057),                \
			QIN(+0.4638422132), QIN(+0.3216418922),                \
			QIN(+0.5424528718), QIN(-0.4652279913),                \
			QIN(+0.0751350820), QIN(-0.2625564933),                \
			QIN(+0.0754469931), QIN(+0.0707490221),                \
			QIN(-0.1674813032), QIN(+0.5288094282),                \
			QIN(+0.3037227094), QIN(+0.6759164929),                \
			QIN(-0.3873920143), QIN(+0.0919067636),                \
			QIN(-0.2271386981), QIN(+0.1258119941),                \
			QIN(+0.0647053123), QIN(-0.2626194954),                \
			QIN(+0.4543505013), QIN(+0.2297088057),                \
			QIN(+0.7118530869), QIN(-0.3373557031),                \
			QIN(+0.0855156109), QIN(-0.2186605930),                \
			QIN(+0.1941799074), QIN(+0.0745466799),                \
			QIN(-0.4820325971), QIN(+0.3946112096),                \
			QIN(+0.3591769040), QIN(+0.7207975984),                \
			QIN(-0.2693077922), QIN(+0.0949873179),                \
			QIN(-0.2101507932), QIN(+0.1809459031),                \
			QIN(+0.0710635483), QIN(-0.7000405192),                \
			QIN(+0.3028666079), QIN(+0.3474473059),                \
			QIN(+0.7297123075), QIN(-0.2828449011),                \
			QIN(+0.0911185518), QIN(-0.2418739945),                \
			QIN(+0.0872296914), QIN(+0.0627904013),                \
			QIN(-0.7155905962), QIN(+0.3099313974),                \
			QIN(+0.2933515906), QIN(+0.6983246803),                \
			QIN(-0.3768391013), QIN(+0.0824496523),                \
			QIN(-0.2126151025), QIN(+0.0193814896),                \
			QIN(+0.1162045971), QIN(-0.6822509766),                \
			QIN(+0.3669199049), QIN(+0.1604927033),                \
			QIN(+0.7278422117), QIN(-0.4449347854),                \
			QIN(+0.1354635954)                                     \
	}
/* Output classes scores vector: reference for sequence #300 */

#define OUT_SCORES_300_SHAPE                                                   \
	{                                                                      \
		6                                                              \
	}
#define OUT_SCORES_300_RANK (1)
#define OUT_SCORES_300                                                         \
	{                                                                      \
		QOUT(+0.8041442037), QOUT(+5.4898014069), QOUT(-1.6693688631), \
			QOUT(-1.5586402416), QOUT(-2.1470985413),              \
			QOUT(-1.3802480698)                                    \
	}

#endif /* _HAR_SMARTPHONE_REF_INOUT_H_ */
