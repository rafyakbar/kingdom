//
// Created by Rafy on 18/11/2017.
//

#include "Batu.h"
#include <GL/glut.h>
#include <GL/glu.h>

void Batu::model_0() {
    glBegin(GL_POLYGON);
    glVertex3f(-6.083834, 0.000000, 6.083834);
    glVertex3f(6.083834, 0.000000, 6.083834);
    glVertex3f(6.083834, 0.000000, -6.083834);
    glVertex3f(-6.083834, 0.000000, -6.083834);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.137636, 0.563411);
    glVertex3f(-0.630920, -0.226328, 0.592326);
    glTexCoord2f(0.058285, 0.569867);
    glVertex3f(-0.537873, -0.057997, 1.154378);
    glTexCoord2f(0.082613, 0.506661);
    glVertex3f(-1.052088, -0.064600, 0.954513);
    glTexCoord2f(0.152906, 0.498683);
    glVertex3f(-1.155731, -0.217847, 0.459469);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.155028, 0.344089);
    glVertex3f(-0.677921, 1.329703, 0.698183);
    glTexCoord2f(0.206316, 0.378186);
    glVertex3f(-1.176430, 1.281231, 0.646380);
    glTexCoord2f(0.155630, 0.402329);
    glVertex3f(-1.019775, 1.174950, 1.105961);
    glTexCoord2f(0.099783, 0.387655);
    glVertex3f(-0.610285, 1.147948, 1.327881);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.896175, 0.282885);
    glVertex3f(1.115930, 1.067893, 0.980967);
    glTexCoord2f(0.854473, 0.349296);
    glVertex3f(0.808457, 1.346412, 0.902078);
    glTexCoord2f(0.794976, 0.248970);
    glVertex3f(0.444005, 1.032712, 1.513821);
    glTexCoord2f(0.870663, 0.174892);
    glVertex3f(0.936321, 0.677546, 1.426494);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.949240, 0.587705);
    glVertex3f(-0.944509, 0.743625, 1.392342);
    glTexCoord2f(0.944083, 0.694636);
    glVertex3f(-0.610285, 1.147948, 1.327881);
    glTexCoord2f(0.905653, 0.682602);
    glVertex3f(-1.019775, 1.174950, 1.105961);
    glTexCoord2f(0.916733, 0.604517);
    glVertex3f(-1.281588, 0.883991, 1.218077);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.336809, 0.082005);
    glVertex3f(-1.719440, 0.916506, -0.699776);
    glTexCoord2f(0.369246, 0.000842);
    glVertex3f(-1.356023, 1.245036, -0.716849);
    glTexCoord2f(0.489191, 0.000000);
    glVertex3f(-0.681862, 1.180458, -1.481573);
    glTexCoord2f(0.460672, 0.063535);
    glVertex3f(-0.974527, 0.926074, -1.431442);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.485748, 0.254952);
    glVertex3f(-0.751048, 0.149059, -1.123006);
    glTexCoord2f(0.512673, 0.310590);
    glVertex3f(-0.321458, -0.060305, -0.702046);
    glTexCoord2f(0.481603, 0.323059);
    glVertex3f(-0.692441, -0.114299, -0.835835);
    glTexCoord2f(0.447322, 0.276247);
    glVertex3f(-1.063276, 0.074521, -1.015607);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.276846, 0.583529);
    glVertex3f(-0.359688, -0.219676, -0.596748);
    glTexCoord2f(0.215363, 0.578539);
    glVertex3f(-0.476225, -0.274043, -0.037390);
    glTexCoord2f(0.223692, 0.502410);
    glVertex3f(-1.094633, -0.254018, -0.118459);
    glTexCoord2f(0.270084, 0.523882);
    glVertex3f(-0.862364, -0.219203, -0.537108);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.288525, 0.695621);
    glVertex3f(0.548058, -0.284113, -0.657622);
    glTexCoord2f(0.226456, 0.694739);
    glVertex3f(0.480423, -0.312115, -0.111060);
    glTexCoord2f(0.220811, 0.635843);
    glVertex3f(-0.015789, -0.312706, -0.060242);
    glTexCoord2f(0.266533, 0.646047);
    glVertex3f(0.172793, -0.188473, -0.532460);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.149628, 0.688747);
    glVertex3f(0.383454, -0.298149, 0.533170);
    glTexCoord2f(0.060049, 0.668982);
    glVertex3f(0.243586, -0.141476, 1.191072);
    glTexCoord2f(0.053708, 0.620010);
    glVertex3f(-0.154563, -0.114500, 1.228987);
    glTexCoord2f(0.140662, 0.629249);
    glVertex3f(-0.106274, -0.274351, 0.595963);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.046020, 0.277128);
    glVertex3f(0.342781, 1.370886, 0.863692);
    glTexCoord2f(0.115533, 0.299946);
    glVertex3f(-0.198010, 1.360380, 0.630818);
    glTexCoord2f(0.042023, 0.402498);
    glVertex3f(-0.344848, 1.152380, 1.730000);
    glTexCoord2f(0.011393, 0.383384);
    glVertex3f(-0.065279, 1.102928, 1.796044);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.133867, 0.094672);
    glVertex3f(0.801564, 1.333314, -0.716665);
    glTexCoord2f(0.226136, 0.127633);
    glVertex3f(0.062998, 1.276304, -0.994314);
    glTexCoord2f(0.165692, 0.199396);
    glVertex3f(0.046107, 1.351565, -0.253730);
    glTexCoord2f(0.116225, 0.149680);
    glVertex3f(0.611501, 1.352344, -0.290780);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.273683, 0.187557);
    glVertex3f(-0.544178, 1.290048, -0.889409);
    glTexCoord2f(0.335575, 0.267841);
    glVertex3f(-1.356023, 1.245036, -0.716849);
    glTexCoord2f(0.258354, 0.321530);
    glVertex3f(-1.177093, 1.303243, 0.009798);
    glTexCoord2f(0.206193, 0.274302);
    glVertex3f(-0.603343, 1.343584, -0.011276);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.422948, 0.654063);
    glVertex3f(1.347667, 0.189763, 0.746821);
    glTexCoord2f(0.520455, 0.684734);
    glVertex3f(1.267461, 0.630730, 1.008356);
    glTexCoord2f(0.477461, 0.726331);
    glVertex3f(1.155268, 0.478039, 1.381585);
    glTexCoord2f(0.404599, 0.713241);
    glVertex3f(1.014587, 0.183491, 1.312948);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.422729, 0.459207);
    glVertex3f(1.323792, 0.127379, -0.856060);
    glTexCoord2f(0.529375, 0.479105);
    glVertex3f(1.267107, 0.600208, -0.689727);
    glTexCoord2f(0.539575, 0.580737);
    glVertex3f(1.175182, 0.692469, 0.169032);
    glTexCoord2f(0.439840, 0.553878);
    glVertex3f(1.268899, 0.241091, -0.063884);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.744126, 0.814485);
    glVertex3f(1.423543, 0.897206, -0.707035);
    glTexCoord2f(0.672331, 0.787452);
    glVertex3f(1.231954, 1.216866, -0.594471);
    glTexCoord2f(0.683844, 0.711964);
    glVertex3f(0.975431, 1.246559, 0.047895);
    glTexCoord2f(0.731678, 0.707183);
    glVertex3f(1.050912, 1.068503, 0.197512);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.016271, 0.536299);
    glVertex3f(-0.706694, 0.190636, 1.346937);
    glTexCoord2f(0.006598, 0.482318);
    glVertex3f(-1.043570, 0.402928, 1.289593);
    glTexCoord2f(0.054401, 0.402498);
    glVertex3f(-1.648060, 0.452009, 0.853586);
    glTexCoord2f(0.090851, 0.431859);
    glVertex3f(-1.571341, 0.110279, 0.770709);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.857058, 0.070133);
    glVertex3f(0.494274, 0.153436, 1.399456);
    glTexCoord2f(0.855242, 0.125920);
    glVertex3f(0.667029, 0.439932, 1.448684);
    glTexCoord2f(0.818683, 0.137473);
    glVertex3f(0.260077, 0.452640, 1.365451);
    glTexCoord2f(0.786060, 0.070157);
    glVertex3f(-0.135120, 0.156677, 1.505020);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.829103, 0.182611);
    glVertex3f(0.524189, 0.691410, 1.410453);
    glTexCoord2f(0.720806, 0.251159);
    glVertex3f(-0.065279, 1.102928, 1.796044);
    glTexCoord2f(0.693981, 0.268226);
    glVertex3f(-0.344848, 1.152380, 1.730000);
    glTexCoord2f(0.758736, 0.168010);
    glVertex3f(-0.066870, 0.652060, 1.602193);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.408067, 0.318081);
    glVertex3f(-1.346437, -0.078697, -0.808084);
    glTexCoord2f(0.348488, 0.225548);
    glVertex3f(-1.759897, 0.319614, -0.724614);
    glTexCoord2f(0.431026, 0.176751);
    glVertex3f(-1.185727, 0.481559, -1.133555);
    glTexCoord2f(0.447322, 0.276247);
    glVertex3f(-1.063276, 0.074521, -1.015607);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.834672, 0.401576);
    glVertex3f(-1.550380, 0.033513, 0.487642);
    glTexCoord2f(0.821728, 0.494375);
    glVertex3f(-1.646483, 0.462612, 0.459024);
    glTexCoord2f(0.758928, 0.488146);
    glVertex3f(-1.648881, 0.429819, -0.064031);
    glTexCoord2f(0.747834, 0.361119);
    glVertex3f(-1.548443, -0.153801, -0.255587);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.853441, 0.628842);
    glVertex3f(-1.434319, 1.017100, 0.746778);
    glTexCoord2f(0.844101, 0.700647);
    glVertex3f(-1.176430, 1.281231, 0.646380);
    glTexCoord2f(0.766741, 0.707183);
    glVertex3f(-1.177093, 1.303243, 0.009798);
    glTexCoord2f(0.766456, 0.640000);
    glVertex3f(-1.483055, 1.068517, 0.045330);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.554998, 0.057463);
    glVertex3f(-0.263198, 0.916780, -1.716774);
    glTexCoord2f(0.491069, 0.166304);
    glVertex3f(-0.775458, 0.497559, -1.402503);
    glTexCoord2f(0.431026, 0.176751);
    glVertex3f(-1.185727, 0.481559, -1.133555);
    glTexCoord2f(0.460672, 0.063535);
    glVertex3f(-0.974527, 0.926074, -1.431442);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.661203, 0.071636);
    glVertex3f(0.802037, 0.850318, -1.528586);
    glTexCoord2f(0.642437, 0.169965);
    glVertex3f(0.556317, 0.449266, -1.496503);
    glTexCoord2f(0.565426, 0.199969);
    glVertex3f(-0.199824, 0.336820, -1.536424);
    glTexCoord2f(0.608937, 0.072162);
    glVertex3f(0.153226, 0.839249, -1.832230);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.628288, 0.255903);
    glVertex3f(0.512712, 0.114694, -1.198383);
    glTexCoord2f(0.619708, 0.321108);
    glVertex3f(0.468949, -0.142859, -1.026806);
    glTexCoord2f(0.560004, 0.310321);
    glVertex3f(0.067265, -0.072713, -0.783522);
    glTexCoord2f(0.556413, 0.271543);
    glVertex3f(-0.180515, 0.060946, -1.233899);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.215363, 0.578539);
    glVertex3f(-0.476225, -0.274043, -0.037390);
    glTexCoord2f(0.137636, 0.563411);
    glVertex3f(-0.630920, -0.226328, 0.592326);
    glTexCoord2f(0.152906, 0.498683);
    glVertex3f(-1.155731, -0.217847, 0.459469);
    glTexCoord2f(0.223692, 0.502410);
    glVertex3f(-1.094633, -0.254018, -0.118459);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.220811, 0.635843);
    glVertex3f(-0.015789, -0.312706, -0.060242);
    glTexCoord2f(0.140662, 0.629249);
    glVertex3f(-0.106274, -0.274351, 0.595963);
    glTexCoord2f(0.137636, 0.563411);
    glVertex3f(-0.630920, -0.226328, 0.592326);
    glTexCoord2f(0.215363, 0.578539);
    glVertex3f(-0.476225, -0.274043, -0.037390);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.140662, 0.629249);
    glVertex3f(-0.106274, -0.274351, 0.595963);
    glTexCoord2f(0.053708, 0.620010);
    glVertex3f(-0.154563, -0.114500, 1.228987);
    glTexCoord2f(0.058285, 0.569867);
    glVertex3f(-0.537873, -0.057997, 1.154378);
    glTexCoord2f(0.137636, 0.563411);
    glVertex3f(-0.630920, -0.226328, 0.592326);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.115533, 0.299946);
    glVertex3f(-0.198010, 1.360380, 0.630818);
    glTexCoord2f(0.155028, 0.344089);
    glVertex3f(-0.677921, 1.329703, 0.698183);
    glTexCoord2f(0.099783, 0.387655);
    glVertex3f(-0.610285, 1.147948, 1.327881);
    glTexCoord2f(0.042023, 0.402498);
    glVertex3f(-0.344848, 1.152380, 1.730000);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.165692, 0.199396);
    glVertex3f(0.046107, 1.351565, -0.253730);
    glTexCoord2f(0.206193, 0.274302);
    glVertex3f(-0.603343, 1.343584, -0.011276);
    glTexCoord2f(0.155028, 0.344089);
    glVertex3f(-0.677921, 1.329703, 0.698183);
    glTexCoord2f(0.115533, 0.299946);
    glVertex3f(-0.198010, 1.360380, 0.630818);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.206193, 0.274302);
    glVertex3f(-0.603343, 1.343584, -0.011276);
    glTexCoord2f(0.258354, 0.321530);
    glVertex3f(-1.177093, 1.303243, 0.009798);
    glTexCoord2f(0.206316, 0.378186);
    glVertex3f(-1.176430, 1.281231, 0.646380);
    glTexCoord2f(0.155028, 0.344089);
    glVertex3f(-0.677921, 1.329703, 0.698183);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.934356, 0.187628);
    glVertex3f(1.267461, 0.630730, 1.008356);
    glTexCoord2f(0.896175, 0.282885);
    glVertex3f(1.115930, 1.067893, 0.980967);
    glTexCoord2f(0.870663, 0.174892);
    glVertex3f(0.936321, 0.677546, 1.426494);
    glTexCoord2f(0.907061, 0.133559);
    glVertex3f(1.155268, 0.478039, 1.381585);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.539575, 0.580737);
    glVertex3f(1.175182, 0.692469, 0.169032);
    glTexCoord2f(0.622627, 0.581780);
    glVertex3f(1.050912, 1.068503, 0.197512);
    glTexCoord2f(0.617335, 0.678426);
    glVertex3f(1.115930, 1.067893, 0.980967);
    glTexCoord2f(0.520455, 0.684734);
    glVertex3f(1.267461, 0.630730, 1.008356);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.622627, 0.581780);
    glVertex3f(1.050912, 1.068503, 0.197512);
    glTexCoord2f(0.662917, 0.562066);
    glVertex3f(0.975431, 1.246559, 0.047895);
    glTexCoord2f(0.672331, 0.661064);
    glVertex3f(0.808457, 1.346412, 0.902078);
    glTexCoord2f(0.617335, 0.678426);
    glVertex3f(1.115930, 1.067893, 0.980967);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.939564, 0.506329);
    glVertex3f(-1.043570, 0.402928, 1.289593);
    glTexCoord2f(0.949240, 0.587705);
    glVertex3f(-0.944509, 0.743625, 1.392342);
    glTexCoord2f(0.916733, 0.604517);
    glVertex3f(-1.281588, 0.883991, 1.218077);
    glTexCoord2f(0.869574, 0.490922);
    glVertex3f(-1.648060, 0.452009, 0.853586);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.791582, 0.866218);
    glVertex3f(0.260077, 0.452640, 1.365451);
    glTexCoord2f(0.744126, 0.821215);
    glVertex3f(-0.066870, 0.652060, 1.602193);
    glTexCoord2f(0.752056, 0.707183);
    glVertex3f(-0.944509, 0.743625, 1.392342);
    glTexCoord2f(0.791426, 0.711743);
    glVertex3f(-1.043570, 0.402928, 1.289593);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(1.000000, 0.606532);
    glVertex3f(-0.066870, 0.652060, 1.602193);
    glTexCoord2f(0.999879, 0.706758);
    glVertex3f(-0.344848, 1.152380, 1.730000);
    glTexCoord2f(0.944083, 0.694636);
    glVertex3f(-0.610285, 1.147948, 1.327881);
    glTexCoord2f(0.949240, 0.587705);
    glVertex3f(-0.944509, 0.743625, 1.392342);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.348488, 0.225548);
    glVertex3f(-1.759897, 0.319614, -0.724614);
    glTexCoord2f(0.336809, 0.082005);
    glVertex3f(-1.719440, 0.916506, -0.699776);
    glTexCoord2f(0.460672, 0.063535);
    glVertex3f(-0.974527, 0.926074, -1.431442);
    glTexCoord2f(0.431026, 0.176751);
    glVertex3f(-1.185727, 0.481559, -1.133555);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.758928, 0.488146);
    glVertex3f(-1.648881, 0.429819, -0.064031);
    glTexCoord2f(0.766456, 0.640000);
    glVertex3f(-1.483055, 1.068517, 0.045330);
    glTexCoord2f(0.672331, 0.596657);
    glVertex3f(-1.719440, 0.916506, -0.699776);
    glTexCoord2f(0.677773, 0.459778);
    glVertex3f(-1.759897, 0.319614, -0.724614);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.766456, 0.640000);
    glVertex3f(-1.483055, 1.068517, 0.045330);
    glTexCoord2f(0.766741, 0.707183);
    glVertex3f(-1.177093, 1.303243, 0.009798);
    glTexCoord2f(0.674914, 0.687648);
    glVertex3f(-1.356023, 1.245036, -0.716849);
    glTexCoord2f(0.672331, 0.596657);
    glVertex3f(-1.719440, 0.916506, -0.699776);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.491069, 0.166304);
    glVertex3f(-0.775458, 0.497559, -1.402503);
    glTexCoord2f(0.485748, 0.254952);
    glVertex3f(-0.751048, 0.149059, -1.123006);
    glTexCoord2f(0.447322, 0.276247);
    glVertex3f(-1.063276, 0.074521, -1.015607);
    glTexCoord2f(0.431026, 0.176751);
    glVertex3f(-1.185727, 0.481559, -1.133555);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.565426, 0.199969);
    glVertex3f(-0.199824, 0.336820, -1.536424);
    glTexCoord2f(0.556413, 0.271543);
    glVertex3f(-0.180515, 0.060946, -1.233899);
    glTexCoord2f(0.485748, 0.254952);
    glVertex3f(-0.751048, 0.149059, -1.123006);
    glTexCoord2f(0.491069, 0.166304);
    glVertex3f(-0.775458, 0.497559, -1.402503);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.387737, 0.801509);
    glVertex3f(-0.180515, 0.060946, -1.233899);
    glTexCoord2f(0.336809, 0.833560);
    glVertex3f(0.067265, -0.072713, -0.783522);
    glTexCoord2f(0.336920, 0.785916);
    glVertex3f(-0.321458, -0.060305, -0.702046);
    glTexCoord2f(0.384519, 0.726331);
    glVertex3f(-0.751048, 0.149059, -1.123006);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.512673, 0.310590);
    glVertex3f(-0.321458, -0.060305, -0.702046);
    glTexCoord2f(0.506205, 0.350977);
    glVertex3f(-0.359688, -0.219676, -0.596748);
    glTexCoord2f(0.448079, 0.354288);
    glVertex3f(-0.862364, -0.219203, -0.537108);
    glTexCoord2f(0.481603, 0.323059);
    glVertex3f(-0.692441, -0.114299, -0.835835);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.560004, 0.310321);
    glVertex3f(0.067265, -0.072713, -0.783522);
    glTexCoord2f(0.559475, 0.342029);
    glVertex3f(0.172793, -0.188473, -0.532460);
    glTexCoord2f(0.506205, 0.350977);
    glVertex3f(-0.359688, -0.219676, -0.596748);
    glTexCoord2f(0.512673, 0.310590);
    glVertex3f(-0.321458, -0.060305, -0.702046);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.266533, 0.646047);
    glVertex3f(0.172793, -0.188473, -0.532460);
    glTexCoord2f(0.220811, 0.635843);
    glVertex3f(-0.015789, -0.312706, -0.060242);
    glTexCoord2f(0.215363, 0.578539);
    glVertex3f(-0.476225, -0.274043, -0.037390);
    glTexCoord2f(0.276846, 0.583529);
    glVertex3f(-0.359688, -0.219676, -0.596748);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.619708, 0.321108);
    glVertex3f(0.468949, -0.142859, -1.026806);
    glTexCoord2f(0.609960, 0.361119);
    glVertex3f(0.548058, -0.284113, -0.657622);
    glTexCoord2f(0.559475, 0.342029);
    glVertex3f(0.172793, -0.188473, -0.532460);
    glTexCoord2f(0.560004, 0.310321);
    glVertex3f(0.067265, -0.072713, -0.783522);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.324683, 0.722893);
    glVertex3f(0.896930, -0.116701, -1.078061);
    glTexCoord2f(0.278588, 0.749240);
    glVertex3f(1.042022, -0.190494, -0.637866);
    glTexCoord2f(0.288525, 0.695621);
    glVertex3f(0.548058, -0.284113, -0.657622);
    glTexCoord2f(0.320949, 0.673747);
    glVertex3f(0.468949, -0.142859, -1.026806);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.278588, 0.749240);
    glVertex3f(1.042022, -0.190494, -0.637866);
    glTexCoord2f(0.218381, 0.752553);
    glVertex3f(1.045407, -0.157597, -0.147996);
    glTexCoord2f(0.226456, 0.694739);
    glVertex3f(0.480423, -0.312115, -0.111060);
    glTexCoord2f(0.288525, 0.695621);
    glVertex3f(0.548058, -0.284113, -0.657622);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.226456, 0.694739);
    glVertex3f(0.480423, -0.312115, -0.111060);
    glTexCoord2f(0.149628, 0.688747);
    glVertex3f(0.383454, -0.298149, 0.533170);
    glTexCoord2f(0.140662, 0.629249);
    glVertex3f(-0.106274, -0.274351, 0.595963);
    glTexCoord2f(0.220811, 0.635843);
    glVertex3f(-0.015789, -0.312706, -0.060242);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.218381, 0.752553);
    glVertex3f(1.045407, -0.157597, -0.147996);
    glTexCoord2f(0.143231, 0.752483);
    glVertex3f(1.008866, -0.126459, 0.470257);
    glTexCoord2f(0.149628, 0.688747);
    glVertex3f(0.383454, -0.298149, 0.533170);
    glTexCoord2f(0.226456, 0.694739);
    glVertex3f(0.480423, -0.312115, -0.111060);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.143231, 0.752483);
    glVertex3f(1.008866, -0.126459, 0.470257);
    glTexCoord2f(0.069266, 0.722735);
    glVertex3f(0.736314, -0.076033, 1.066762);
    glTexCoord2f(0.060049, 0.668982);
    glVertex3f(0.243586, -0.141476, 1.191072);
    glTexCoord2f(0.149628, 0.688747);
    glVertex3f(0.383454, -0.298149, 0.533170);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.854473, 0.349296);
    glVertex3f(0.808457, 1.346412, 0.902078);
    glTexCoord2f(0.808347, 0.361119);
    glVertex3f(0.342781, 1.370886, 0.863692);
    glTexCoord2f(0.720806, 0.251159);
    glVertex3f(-0.065279, 1.102928, 1.796044);
    glTexCoord2f(0.794976, 0.248970);
    glVertex3f(0.444005, 1.032712, 1.513821);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.056221, 0.145884);
    glVertex3f(0.975431, 1.246559, 0.047895);
    glTexCoord2f(0.116225, 0.149680);
    glVertex3f(0.611501, 1.352344, -0.290780);
    glTexCoord2f(0.046020, 0.277128);
    glVertex3f(0.342781, 1.370886, 0.863692);
    glTexCoord2f(0.000000, 0.241327);
    glVertex3f(0.808457, 1.346412, 0.902078);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.116225, 0.149680);
    glVertex3f(0.611501, 1.352344, -0.290780);
    glTexCoord2f(0.165692, 0.199396);
    glVertex3f(0.046107, 1.351565, -0.253730);
    glTexCoord2f(0.115533, 0.299946);
    glVertex3f(-0.198010, 1.360380, 0.630818);
    glTexCoord2f(0.046020, 0.277128);
    glVertex3f(0.342781, 1.370886, 0.863692);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.085645, 0.065345);
    glVertex3f(1.231954, 1.216866, -0.594471);
    glTexCoord2f(0.133867, 0.094672);
    glVertex3f(0.801564, 1.333314, -0.716665);
    glTexCoord2f(0.116225, 0.149680);
    glVertex3f(0.611501, 1.352344, -0.290780);
    glTexCoord2f(0.056221, 0.145884);
    glVertex3f(0.975431, 1.246559, 0.047895);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.116277, 0.014773);
    glVertex3f(1.303753, 1.083753, -1.023542);
    glTexCoord2f(0.187902, 0.035191);
    glVertex3f(0.770454, 1.122192, -1.299703);
    glTexCoord2f(0.133867, 0.094672);
    glVertex3f(0.801564, 1.333314, -0.716665);
    glTexCoord2f(0.085645, 0.065345);
    glVertex3f(1.231954, 1.216866, -0.594471);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.187902, 0.035191);
    glVertex3f(0.770454, 1.122192, -1.299703);
    glTexCoord2f(0.273048, 0.064123);
    glVertex3f(0.105258, 1.126820, -1.585067);
    glTexCoord2f(0.226136, 0.127633);
    glVertex3f(0.062998, 1.276304, -0.994314);
    glTexCoord2f(0.133867, 0.094672);
    glVertex3f(0.801564, 1.333314, -0.716665);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.226136, 0.127633);
    glVertex3f(0.062998, 1.276304, -0.994314);
    glTexCoord2f(0.273683, 0.187557);
    glVertex3f(-0.544178, 1.290048, -0.889409);
    glTexCoord2f(0.206193, 0.274302);
    glVertex3f(-0.603343, 1.343584, -0.011276);
    glTexCoord2f(0.165692, 0.199396);
    glVertex3f(0.046107, 1.351565, -0.253730);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.273048, 0.064123);
    glVertex3f(0.105258, 1.126820, -1.585067);
    glTexCoord2f(0.316518, 0.068429);
    glVertex3f(-0.174992, 1.147173, -1.801163);
    glTexCoord2f(0.273683, 0.187557);
    glVertex3f(-0.544178, 1.290048, -0.889409);
    glTexCoord2f(0.226136, 0.127633);
    glVertex3f(0.062998, 1.276304, -0.994314);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.316518, 0.068429);
    glVertex3f(-0.174992, 1.147173, -1.801163);
    glTexCoord2f(0.336809, 0.140426);
    glVertex3f(-0.681862, 1.180458, -1.481573);
    glTexCoord2f(0.335575, 0.267841);
    glVertex3f(-1.356023, 1.245036, -0.716849);
    glTexCoord2f(0.273683, 0.187557);
    glVertex3f(-0.544178, 1.290048, -0.889409);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.340137, 0.610197);
    glVertex3f(1.008866, -0.126459, 0.470257);
    glTexCoord2f(0.422948, 0.654063);
    glVertex3f(1.347667, 0.189763, 0.746821);
    glTexCoord2f(0.404599, 0.713241);
    glVertex3f(1.014587, 0.183491, 1.312948);
    glTexCoord2f(0.336809, 0.674909);
    glVertex3f(0.736314, -0.076033, 1.066762);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.339988, 0.536299);
    glVertex3f(1.045407, -0.157597, -0.147996);
    glTexCoord2f(0.439840, 0.553878);
    glVertex3f(1.268899, 0.241091, -0.063884);
    glTexCoord2f(0.422948, 0.654063);
    glVertex3f(1.347667, 0.189763, 0.746821);
    glTexCoord2f(0.340137, 0.610197);
    glVertex3f(1.008866, -0.126459, 0.470257);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.439840, 0.553878);
    glVertex3f(1.268899, 0.241091, -0.063884);
    glTexCoord2f(0.539575, 0.580737);
    glVertex3f(1.175182, 0.692469, 0.169032);
    glTexCoord2f(0.520455, 0.684734);
    glVertex3f(1.267461, 0.630730, 1.008356);
    glTexCoord2f(0.422948, 0.654063);
    glVertex3f(1.347667, 0.189763, 0.746821);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.336833, 0.476818);
    glVertex3f(1.042022, -0.190494, -0.637866);
    glTexCoord2f(0.422729, 0.459207);
    glVertex3f(1.323792, 0.127379, -0.856060);
    glTexCoord2f(0.439840, 0.553878);
    glVertex3f(1.268899, 0.241091, -0.063884);
    glTexCoord2f(0.339988, 0.536299);
    glVertex3f(1.045407, -0.157597, -0.147996);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.353162, 0.419686);
    glVertex3f(0.896930, -0.116701, -1.078061);
    glTexCoord2f(0.429528, 0.400325);
    glVertex3f(1.081272, 0.175115, -1.287556);
    glTexCoord2f(0.422729, 0.459207);
    glVertex3f(1.323792, 0.127379, -0.856060);
    glTexCoord2f(0.336833, 0.476818);
    glVertex3f(1.042022, -0.190494, -0.637866);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.429528, 0.400325);
    glVertex3f(1.081272, 0.175115, -1.287556);
    glTexCoord2f(0.517650, 0.412671);
    glVertex3f(1.200361, 0.538245, -1.221685);
    glTexCoord2f(0.529375, 0.479105);
    glVertex3f(1.267107, 0.600208, -0.689727);
    glTexCoord2f(0.422729, 0.459207);
    glVertex3f(1.323792, 0.127379, -0.856060);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.529375, 0.479105);
    glVertex3f(1.267107, 0.600208, -0.689727);
    glTexCoord2f(0.604166, 0.482239);
    glVertex3f(1.423543, 0.897206, -0.707035);
    glTexCoord2f(0.622627, 0.581780);
    glVertex3f(1.050912, 1.068503, 0.197512);
    glTexCoord2f(0.539575, 0.580737);
    glVertex3f(1.175182, 0.692469, 0.169032);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.517650, 0.412671);
    glVertex3f(1.200361, 0.538245, -1.221685);
    glTexCoord2f(0.586459, 0.423461);
    glVertex3f(1.385825, 0.807576, -1.181814);
    glTexCoord2f(0.604166, 0.482239);
    glVertex3f(1.423543, 0.897206, -0.707035);
    glTexCoord2f(0.529375, 0.479105);
    glVertex3f(1.267107, 0.600208, -0.689727);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.586459, 0.423461);
    glVertex3f(1.385825, 0.807576, -1.181814);
    glTexCoord2f(0.646477, 0.441109);
    glVertex3f(1.303753, 1.083753, -1.023542);
    glTexCoord2f(0.670954, 0.491413);
    glVertex3f(1.231954, 1.216866, -0.594471);
    glTexCoord2f(0.604166, 0.482239);
    glVertex3f(1.423543, 0.897206, -0.707035);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.058285, 0.569867);
    glVertex3f(-0.537873, -0.057997, 1.154378);
    glTexCoord2f(0.016271, 0.536299);
    glVertex3f(-0.706694, 0.190636, 1.346937);
    glTexCoord2f(0.090851, 0.431859);
    glVertex3f(-1.571341, 0.110279, 0.770709);
    glTexCoord2f(0.082613, 0.506661);
    glVertex3f(-1.052088, -0.064600, 0.954513);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.053708, 0.620010);
    glVertex3f(-0.154563, -0.114500, 1.228987);
    glTexCoord2f(0.000000, 0.608449);
    glVertex3f(-0.135120, 0.156677, 1.505020);
    glTexCoord2f(0.016271, 0.536299);
    glVertex3f(-0.706694, 0.190636, 1.346937);
    glTexCoord2f(0.058285, 0.569867);
    glVertex3f(-0.537873, -0.057997, 1.154378);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.786060, 0.070157);
    glVertex3f(-0.135120, 0.156677, 1.505020);
    glTexCoord2f(0.818683, 0.137473);
    glVertex3f(0.260077, 0.452640, 1.365451);
    glTexCoord2f(0.694133, 0.143704);
    glVertex3f(-1.043570, 0.402928, 1.289593);
    glTexCoord2f(0.736508, 0.092307);
    glVertex3f(-0.706694, 0.190636, 1.346937);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.060049, 0.668982);
    glVertex3f(0.243586, -0.141476, 1.191072);
    glTexCoord2f(0.012308, 0.682984);
    glVertex3f(0.494274, 0.153436, 1.399456);
    glTexCoord2f(0.000000, 0.608449);
    glVertex3f(-0.135120, 0.156677, 1.505020);
    glTexCoord2f(0.053708, 0.620010);
    glVertex3f(-0.154563, -0.114500, 1.228987);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.069266, 0.722735);
    glVertex3f(0.736314, -0.076033, 1.066762);
    glTexCoord2f(0.019832, 0.742597);
    glVertex3f(1.014587, 0.183491, 1.312948);
    glTexCoord2f(0.012308, 0.682984);
    glVertex3f(0.494274, 0.153436, 1.399456);
    glTexCoord2f(0.060049, 0.668982);
    glVertex3f(0.243586, -0.141476, 1.191072);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.913859, 0.076969);
    glVertex3f(1.014587, 0.183491, 1.312948);
    glTexCoord2f(0.907061, 0.133559);
    glVertex3f(1.155268, 0.478039, 1.381585);
    glTexCoord2f(0.855242, 0.125920);
    glVertex3f(0.667029, 0.439932, 1.448684);
    glTexCoord2f(0.857058, 0.070133);
    glVertex3f(0.494274, 0.153436, 1.399456);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.855242, 0.125920);
    glVertex3f(0.667029, 0.439932, 1.448684);
    glTexCoord2f(0.829103, 0.182611);
    glVertex3f(0.524189, 0.691410, 1.410453);
    glTexCoord2f(0.758736, 0.168010);
    glVertex3f(-0.066870, 0.652060, 1.602193);
    glTexCoord2f(0.818683, 0.137473);
    glVertex3f(0.260077, 0.452640, 1.365451);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.907061, 0.133559);
    glVertex3f(1.155268, 0.478039, 1.381585);
    glTexCoord2f(0.870663, 0.174892);
    glVertex3f(0.936321, 0.677546, 1.426494);
    glTexCoord2f(0.829103, 0.182611);
    glVertex3f(0.524189, 0.691410, 1.410453);
    glTexCoord2f(0.855242, 0.125920);
    glVertex3f(0.667029, 0.439932, 1.448684);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.870663, 0.174892);
    glVertex3f(0.936321, 0.677546, 1.426494);
    glTexCoord2f(0.794976, 0.248970);
    glVertex3f(0.444005, 1.032712, 1.513821);
    glTexCoord2f(0.720806, 0.251159);
    glVertex3f(-0.065279, 1.102928, 1.796044);
    glTexCoord2f(0.829103, 0.182611);
    glVertex3f(0.524189, 0.691410, 1.410453);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.448079, 0.354288);
    glVertex3f(-0.862364, -0.219203, -0.537108);
    glTexCoord2f(0.408067, 0.318081);
    glVertex3f(-1.346437, -0.078697, -0.808084);
    glTexCoord2f(0.447322, 0.276247);
    glVertex3f(-1.063276, 0.074521, -1.015607);
    glTexCoord2f(0.481603, 0.323059);
    glVertex3f(-0.692441, -0.114299, -0.835835);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.223692, 0.502410);
    glVertex3f(-1.094633, -0.254018, -0.118459);
    glTexCoord2f(0.232244, 0.440506);
    glVertex3f(-1.548443, -0.153801, -0.255587);
    glTexCoord2f(0.291247, 0.454530);
    glVertex3f(-1.346437, -0.078697, -0.808084);
    glTexCoord2f(0.270084, 0.523882);
    glVertex3f(-0.862364, -0.219203, -0.537108);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.747834, 0.361119);
    glVertex3f(-1.548443, -0.153801, -0.255587);
    glTexCoord2f(0.758928, 0.488146);
    glVertex3f(-1.648881, 0.429819, -0.064031);
    glTexCoord2f(0.677773, 0.459778);
    glVertex3f(-1.759897, 0.319614, -0.724614);
    glTexCoord2f(0.685316, 0.388716);
    glVertex3f(-1.346437, -0.078697, -0.808084);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.152906, 0.498683);
    glVertex3f(-1.155731, -0.217847, 0.459469);
    glTexCoord2f(0.130148, 0.436240);
    glVertex3f(-1.550380, 0.033513, 0.487642);
    glTexCoord2f(0.232244, 0.440506);
    glVertex3f(-1.548443, -0.153801, -0.255587);
    glTexCoord2f(0.223692, 0.502410);
    glVertex3f(-1.094633, -0.254018, -0.118459);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.082613, 0.506661);
    glVertex3f(-1.052088, -0.064600, 0.954513);
    glTexCoord2f(0.090851, 0.431859);
    glVertex3f(-1.571341, 0.110279, 0.770709);
    glTexCoord2f(0.130148, 0.436240);
    glVertex3f(-1.550380, 0.033513, 0.487642);
    glTexCoord2f(0.152906, 0.498683);
    glVertex3f(-1.155731, -0.217847, 0.459469);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.867108, 0.417288);
    glVertex3f(-1.571341, 0.110279, 0.770709);
    glTexCoord2f(0.869574, 0.490922);
    glVertex3f(-1.648060, 0.452009, 0.853586);
    glTexCoord2f(0.821728, 0.494375);
    glVertex3f(-1.646483, 0.462612, 0.459024);
    glTexCoord2f(0.834672, 0.401576);
    glVertex3f(-1.550380, 0.033513, 0.487642);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.821728, 0.494375);
    glVertex3f(-1.646483, 0.462612, 0.459024);
    glTexCoord2f(0.853441, 0.628842);
    glVertex3f(-1.434319, 1.017100, 0.746778);
    glTexCoord2f(0.766456, 0.640000);
    glVertex3f(-1.483055, 1.068517, 0.045330);
    glTexCoord2f(0.758928, 0.488146);
    glVertex3f(-1.648881, 0.429819, -0.064031);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.869574, 0.490922);
    glVertex3f(-1.648060, 0.452009, 0.853586);
    glTexCoord2f(0.916733, 0.604517);
    glVertex3f(-1.281588, 0.883991, 1.218077);
    glTexCoord2f(0.853441, 0.628842);
    glVertex3f(-1.434319, 1.017100, 0.746778);
    glTexCoord2f(0.821728, 0.494375);
    glVertex3f(-1.646483, 0.462612, 0.459024);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.916733, 0.604517);
    glVertex3f(-1.281588, 0.883991, 1.218077);
    glTexCoord2f(0.905653, 0.682602);
    glVertex3f(-1.019775, 1.174950, 1.105961);
    glTexCoord2f(0.844101, 0.700647);
    glVertex3f(-1.176430, 1.281231, 0.646380);
    glTexCoord2f(0.853441, 0.628842);
    glVertex3f(-1.434319, 1.017100, 0.746778);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.563922, 0.000091);
    glVertex3f(-0.174992, 1.147173, -1.801163);
    glTexCoord2f(0.554998, 0.057463);
    glVertex3f(-0.263198, 0.916780, -1.716774);
    glTexCoord2f(0.460672, 0.063535);
    glVertex3f(-0.974527, 0.926074, -1.431442);
    glTexCoord2f(0.489191, 0.000000);
    glVertex3f(-0.681862, 1.180458, -1.481573);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.582099, 0.007382);
    glVertex3f(0.105258, 1.126820, -1.585067);
    glTexCoord2f(0.608937, 0.072162);
    glVertex3f(0.153226, 0.839249, -1.832230);
    glTexCoord2f(0.554998, 0.057463);
    glVertex3f(-0.263198, 0.916780, -1.716774);
    glTexCoord2f(0.563922, 0.000091);
    glVertex3f(-0.174992, 1.147173, -1.801163);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.608937, 0.072162);
    glVertex3f(0.153226, 0.839249, -1.832230);
    glTexCoord2f(0.565426, 0.199969);
    glVertex3f(-0.199824, 0.336820, -1.536424);
    glTexCoord2f(0.491069, 0.166304);
    glVertex3f(-0.775458, 0.497559, -1.402503);
    glTexCoord2f(0.554998, 0.057463);
    glVertex3f(-0.263198, 0.916780, -1.716774);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.187902, 0.035191);
    glVertex3f(0.770454, 1.122192, -1.299703);
    glTexCoord2f(0.207942, 0.000000);
    glVertex3f(0.802037, 0.850318, -1.528586);
    glTexCoord2f(0.293309, 0.025246);
    glVertex3f(0.153226, 0.839249, -1.832230);
    glTexCoord2f(0.273048, 0.064123);
    glVertex3f(0.105258, 1.126820, -1.585067);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.646477, 0.441109);
    glVertex3f(1.303753, 1.083753, -1.023542);
    glTexCoord2f(0.586459, 0.423461);
    glVertex3f(1.385825, 0.807576, -1.181814);
    glTexCoord2f(0.579472, 0.365264);
    glVertex3f(0.802037, 0.850318, -1.528586);
    glTexCoord2f(0.639569, 0.392860);
    glVertex3f(0.770454, 1.122192, -1.299703);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.586459, 0.423461);
    glVertex3f(1.385825, 0.807576, -1.181814);
    glTexCoord2f(0.517650, 0.412671);
    glVertex3f(1.200361, 0.538245, -1.221685);
    glTexCoord2f(0.477201, 0.361119);
    glVertex3f(0.556317, 0.449266, -1.496503);
    glTexCoord2f(0.579472, 0.365264);
    glVertex3f(0.802037, 0.850318, -1.528586);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.642437, 0.169965);
    glVertex3f(0.556317, 0.449266, -1.496503);
    glTexCoord2f(0.628288, 0.255903);
    glVertex3f(0.512712, 0.114694, -1.198383);
    glTexCoord2f(0.556413, 0.271543);
    glVertex3f(-0.180515, 0.060946, -1.233899);
    glTexCoord2f(0.565426, 0.199969);
    glVertex3f(-0.199824, 0.336820, -1.536424);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.693981, 0.150197);
    glVertex3f(1.200361, 0.538245, -1.221685);
    glTexCoord2f(0.693822, 0.237100);
    glVertex3f(1.081272, 0.175115, -1.287556);
    glTexCoord2f(0.628288, 0.255903);
    glVertex3f(0.512712, 0.114694, -1.198383);
    glTexCoord2f(0.642437, 0.169965);
    glVertex3f(0.556317, 0.449266, -1.496503);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.693822, 0.237100);
    glVertex3f(1.081272, 0.175115, -1.287556);
    glTexCoord2f(0.668575, 0.311882);
    glVertex3f(0.896930, -0.116701, -1.078061);
    glTexCoord2f(0.619708, 0.321108);
    glVertex3f(0.468949, -0.142859, -1.026806);
    glTexCoord2f(0.628288, 0.255903);
    glVertex3f(0.512712, 0.114694, -1.198383);
    glEnd();
}

void Batu::batu(GLfloat posX, GLfloat posY, GLfloat posZ){
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    glScalef(2,2,2);
    glColor3ub(135,123,123);
    Batu::model_0();
    glPopMatrix();
}
void Batu::susunBatu(){
    Batu::batu(0,0,0);
    Batu::batu(8,0,0);
    Batu::batu(5,0,10);
    Batu::batu(5,2,5);
    Batu::batu(0,0,5);
}

void Batu::pindahBatu(GLfloat posX, GLfloat posY, GLfloat posZ){
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    Batu::susunBatu();
    glPopMatrix();
}
void Batu::letakBatu(){
    Batu::pindahBatu(-93,0,-30);
    Batu::pindahBatu(85,0,-30);
    Batu::pindahBatu(85,0,-170);
    Batu::pindahBatu(-93,0,-170);
    Batu::pindahBatu(105,0,-74);
    Batu::batu(-105,0,-75);
}

