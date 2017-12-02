//
// Created by Rafy on 20/11/2017.
//

#include "WindMill.h"

void WindMill::home(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat scaleX, GLfloat scaleY, GLfloat scaleZ) {
    float vertices[][3] = {
            {0.543308, 0.921337, 0.551248},
            {0.543120, 0.921337, 0.499450},
            {0.543120, -0.523742, 0.499450},
            {0.543308, -0.523742, 0.551247},
            {-0.044851, 0.921337, 0.553380},
            {-0.045039, 0.921337, 0.501582},
            {-0.606777, 0.921337, 0.555416},
            {-0.606965, 0.921337, 0.503619},
            {0.498869, -1.781075, 0.678599},
            {0.469139, -1.062680, 0.601159},
            {0.067562, -1.062680, 0.602614},
            {0.038394, -1.781075, 0.680268},
            {0.704212, 1.034895, -0.835602},
            {-0.049876, 1.746530, -0.832868},
            {-0.044504, 1.746530, 0.649074},
            {0.709583, 1.034894, 0.646340},
            {-0.915184, -1.841878, -0.966690},
            {0.840671, -1.841878, -0.973055},
            {0.847036, -1.841878, 0.782800},
            {-0.908819, -1.841878, 0.789165},
            {0.711209, -0.638171, -0.842651},
            {0.608864, -0.593976, -0.739561},
            {0.613542, -0.593976, 0.550993},
            {0.716632, -0.638171, 0.653338},
            {-0.784780, -0.638171, -0.837228},
            {-0.681690, -0.593976, -0.734883},
            {-0.779357, -0.638171, 0.658761},
            {-0.677012, -0.593976, 0.555671},
            {-0.606777, -0.523742, 0.555416},
            {-0.606965, -0.523742, 0.503619},
            {0.609119, -0.523742, -0.669327},
            {0.557321, -0.523742, -0.669139},
            {0.561490, -0.523742, 0.480946},
            {0.613288, -0.523742, 0.480759},
            {0.609119, 0.921337, -0.669326},
            {0.557321, 0.921337, -0.669139},
            {0.613288, 0.921337, 0.480759},
            {0.561490, 0.921337, 0.480947},
            {-0.677266, -0.523742, 0.485437},
            {-0.625468, -0.523742, 0.485249},
            {-0.629637, -0.523741, -0.664836},
            {-0.681435, -0.523741, -0.664649},
            {-0.777730, 1.034895, -0.830230},
            {-0.772359, 1.034895, 0.651712},
            {0.608864, 0.991572, -0.739561},
            {0.613542, 0.991572, 0.550993},
            {-0.049529, 0.991572, -0.737174},
            {-0.044851, 0.991572, 0.553380},
            {-0.681689, 0.991572, -0.734883},
            {-0.677011, 0.991572, 0.555671},
            {-0.677266, 0.921337, 0.485437},
            {-0.625468, 0.921337, 0.485249},
            {-0.681435, 0.921337, -0.664648},
            {-0.629637, 0.921337, -0.664836},
            {0.499224, -1.770522, 0.776359},
            {0.038748, -1.770522, 0.778028},
            {0.469493, -1.052127, 0.698919},
            {0.067917, -1.052127, 0.700374},
            {-0.611456, -0.523741, -0.735137},
            {0.538630, -0.523742, -0.739306},
            {-0.611455, 0.921337, -0.735137},
            {-0.049529, 0.921337, -0.737174},
            {0.538630, 0.921337, -0.739306},
            {-0.611268, -0.523741, -0.683340},
            {0.538818, -0.523742, -0.687508},
            {-0.611267, 0.921337, -0.683340},
            {-0.049341, 0.921337, -0.685376},
            {0.538818, 0.921337, -0.687508},
    };
    float tex_coords[][3] = {
            {0.000000, 1.000000},
            {0.084817, 0.915183},
            {0.084817, 0.084817},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {0.110357, 0.931338},
            {0.110357, 0.931338},
            {0.889643, 0.931338},
            {0.889643, 0.931338},
            {0.068662, 0.117557},
            {0.068662, 0.514406},
            {0.068662, 0.889829},
            {0.068662, 0.897904},
            {0.068662, 0.110494},
            {1.000000, 0.000000},
            {1.000000, 0.000000},
            {0.000000, 1.000000},
            {0.889643, 0.068662},
            {0.889643, 0.068662},
            {0.110357, 0.068662},
            {0.110357, 0.068662},
            {0.931338, 0.514406},
            {0.931338, 0.117557},
            {0.931338, 0.110494},
            {0.931338, 0.897904},
            {0.931338, 0.889829},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.830180, 0.169820},
            {0.831653, 0.831653},
            {0.168347, 0.831653},
            {0.169820, 0.169820},
            {0.931338, 0.068662},
            {0.931338, 0.508768},
            {0.068662, 0.508768},
            {0.068662, 0.068662},
            {1.000000, 1.000000},
            {1.000000, 0.000000},
            {0.931338, 0.068662},
            {0.068662, 0.068662},
            {0.000000, 0.000000},
            {0.931338, 0.931338},
            {0.068662, 0.931338},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.931338, 0.931338},
            {0.068662, 0.931338},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {0.931338, 0.931338},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.068662, 0.910524},
            {1.000000, 1.000000},
            {0.068662, 0.931338},
            {0.068662, 0.908385},
            {1.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {0.000000, 0.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.000000, 1.000000},
            {1.000000, 0.000000},
            {1.000000, 1.000000},
            {0.931338, 0.508768},
    };
    float normals[][3] = {
            {0.6057, -0.5211, 0.6013},
            {-0.2971, 0.3842, 0.8742},
            {0.3034, 0.3842, 0.8720},
            {-0.6013, -0.5211, 0.6057},
            {0.6013, -0.5211, -0.6057},
            {0.5862, 0.5547, -0.5905},
            {0.5905, 0.5547, 0.5862},
            {-0.6057, -0.5211, -0.6013},
            {-0.5905, 0.5547, -0.5862},
            {-0.5862, 0.5547, 0.5905},
            {-0.5794, 0.5774, -0.5753},
            {-0.5794, -0.5773, -0.5753},
            {-0.5753, -0.5774, 0.5794},
            {-0.5753, 0.5774, 0.5794},
            {0.0026, -0.7071, 0.7071},
            {0.5794, -0.5774, 0.5753},
            {0.5794, 0.5774, 0.5753},
            {0.5667, -0.5223, 0.6372},
            {-0.5621, -0.5223, 0.6413},
            {0.5753, -0.5774, -0.5794},
            {0.5753, 0.5774, -0.5794},
            {-0.0026, -0.7071, -0.7071},
            {-0.2982, -0.3015, 0.9056},
            {-0.2982, 0.3015, 0.9056},
            {0.3048, -0.3015, 0.9034},
            {-0.5882, 0.6250, 0.5133},
            {0.5919, 0.6250, 0.5090},
            {0.7462, 0.0533, -0.6636},
            {-0.0104, 0.7723, -0.6352},
            {-0.0058, 0.7723, 0.6352},
            {0.7509, 0.0533, 0.6582},
            {0.4489, 0.7707, -0.4522},
            {0.4522, 0.7707, 0.4489},
            {-0.4522, 0.7707, -0.4489},
            {-0.4489, 0.7707, 0.4522},
            {0.3048, 0.3015, 0.9034},
            {0.9056, 0.3015, 0.2982},
            {0.9034, 0.3015, -0.3048},
            {0.9056, -0.3015, 0.2982},
            {0.9034, -0.3015, -0.3048},
            {-0.9056, 0.3015, -0.2982},
            {-0.9034, 0.3015, 0.3048},
            {-0.7528, 0.0412, -0.6570},
            {-0.7480, 0.0412, 0.6624},
            {0.4758, -0.4954, -0.7267},
            {0.4811, -0.4954, 0.7233},
            {-0.4758, -0.4954, 0.7267},
            {0.0036, -0.1108, 0.9938},
            {-0.4811, -0.4954, -0.7233},
            {-0.9056, -0.3015, -0.2982},
            {-0.9034, -0.3015, 0.3048},
            {0.2982, 0.3015, -0.9056},
            {-0.3048, 0.3015, -0.9034},
            {0.2982, -0.3015, -0.9056},
            {-0.0036, -0.1108, -0.9938},
            {-0.3048, -0.3015, -0.9034},
    };
    int faces[][10][3] = {
            {{19, 1, 1}, {55, 2, 2}, {56, 3, 3}, {20, 4, 4}, },
            {{18, 5, 5}, {21, 6, 6}, {24, 7, 7}, {19, 8, 1}, },
            {{17, 9, 8}, {25, 10, 9}, {21, 11, 6}, {18, 12, 5}, },
            {{20, 13, 4}, {27, 14, 10}, {25, 15, 9}, {17, 16, 8}, },
            {{40, 17, 11}, {52, 18, 12}, {54, 19, 13}, {41, 20, 14}, },
            {{2, 21, 13}, {6, 22, 15}, {8, 23, 16}, {30, 24, 17}, {3, 25, 14}, },
            {{20, 4, 4}, {56, 3, 3}, {58, 26, 18}, {57, 27, 19}, {55, 2, 2}, {19, 1, 1}, {24, 7, 7}, {27, 28, 10}, },
            {{32, 29, 17}, {36, 30, 16}, {38, 31, 20}, {33, 32, 21}, },
            {{67, 33, 22}, {68, 34, 12}, {65, 35, 11}, {64, 36, 21}, {66, 37, 20}, },
            {{1, 38, 23}, {2, 39, 13}, {3, 40, 14}, {4, 41, 24}, },
            {{5, 42, 15}, {6, 43, 15}, {2, 44, 13}, {1, 45, 23}, },
            {{7, 46, 25}, {8, 47, 16}, {6, 48, 15}, {5, 49, 15}, },
            {{9, 50, 26}, {10, 51, 19}, {11, 52, 18}, {12, 53, 27}, },
            {{13, 54, 28}, {14, 55, 29}, {15, 56, 30}, {16, 57, 31}, },
            {{17, 9, 8}, {18, 58, 5}, {19, 1, 1}, {20, 4, 4}, },
            {{21, 59, 6}, {22, 60, 32}, {23, 61, 33}, {24, 62, 7}, },
            {{25, 10, 9}, {26, 63, 34}, {22, 60, 32}, {21, 59, 6}, },
            {{27, 28, 10}, {28, 64, 35}, {26, 63, 34}, {25, 10, 9}, },
            {{24, 62, 7}, {23, 61, 33}, {28, 64, 35}, {27, 28, 10}, },
            {{29, 65, 36}, {30, 66, 17}, {8, 67, 16}, {7, 68, 25}, },
            {{31, 69, 37}, {32, 70, 17}, {33, 71, 21}, {34, 72, 38}, },
            {{35, 73, 39}, {36, 74, 16}, {32, 75, 17}, {31, 76, 37}, },
            {{37, 77, 40}, {38, 78, 20}, {36, 79, 16}, {35, 80, 39}, },
            {{34, 81, 38}, {33, 82, 21}, {38, 83, 20}, {37, 84, 40}, },
            {{39, 85, 41}, {40, 86, 11}, {41, 87, 14}, {42, 88, 42}, },
            {{14, 55, 29}, {43, 89, 43}, {44, 90, 44}, {15, 56, 30}, },
            {{45, 91, 45}, {13, 92, 28}, {16, 93, 31}, {46, 94, 46}, },
            {{15, 95, 30}, {44, 96, 44}, {50, 97, 47}, {48, 98, 48}, {46, 99, 46}, {16, 100, 31}, },
            {{50, 101, 47}, {44, 102, 44}, {43, 89, 43}, {49, 103, 49}, },
            {{51, 104, 50}, {52, 105, 12}, {40, 106, 11}, {39, 107, 41}, },
            {{53, 108, 51}, {54, 109, 13}, {52, 110, 12}, {51, 111, 50}, },
            {{42, 112, 42}, {41, 113, 14}, {54, 114, 13}, {53, 115, 51}, },
            {{55, 116, 2}, {9, 117, 26}, {12, 118, 27}, {56, 119, 3}, },
            {{57, 120, 19}, {10, 121, 19}, {9, 122, 26}, {55, 123, 2}, },
            {{58, 124, 18}, {11, 125, 18}, {10, 126, 19}, {57, 127, 19}, },
            {{56, 128, 3}, {12, 129, 27}, {11, 130, 18}, {58, 131, 18}, },
            {{26, 132, 34}, {59, 133, 52}, {60, 134, 53}, {22, 135, 32}, },
            {{49, 136, 49}, {61, 137, 54}, {59, 138, 52}, {26, 139, 34}, },
            {{47, 140, 55}, {62, 141, 22}, {61, 142, 54}, {49, 143, 49}, },
            {{45, 91, 45}, {63, 144, 56}, {62, 145, 22}, {47, 146, 55}, },
            {{22, 147, 32}, {60, 148, 53}, {63, 149, 56}, {45, 150, 45}, },
            {{23, 151, 33}, {4, 152, 24}, {29, 153, 36}, {28, 154, 35}, },
            {{46, 99, 46}, {1, 155, 23}, {4, 156, 24}, {23, 157, 33}, },
            {{48, 158, 48}, {5, 159, 15}, {1, 160, 23}, {46, 94, 46}, },
            {{50, 101, 47}, {7, 161, 25}, {5, 162, 15}, {48, 98, 48}, },
            {{28, 163, 35}, {29, 164, 36}, {7, 165, 25}, {50, 97, 47}, },
            {{22, 147, 32}, {31, 166, 37}, {34, 167, 38}, {23, 157, 33}, },
            {{45, 91, 45}, {35, 168, 39}, {31, 169, 37}, {22, 135, 32}, },
            {{46, 99, 46}, {37, 170, 40}, {35, 171, 39}, {45, 150, 45}, },
            {{23, 151, 33}, {34, 172, 38}, {37, 173, 40}, {46, 94, 46}, },
            {{28, 64, 35}, {39, 174, 41}, {42, 175, 42}, {26, 139, 34}, },
            {{50, 176, 47}, {51, 177, 50}, {39, 174, 41}, {28, 64, 35}, },
            {{49, 136, 49}, {53, 178, 51}, {51, 177, 50}, {50, 176, 47}, },
            {{26, 132, 34}, {42, 179, 42}, {53, 180, 51}, {49, 143, 49}, },
            {{59, 181, 52}, {64, 182, 21}, {65, 183, 11}, {60, 184, 53}, },
            {{61, 185, 54}, {66, 186, 20}, {64, 187, 21}, {59, 188, 52}, },
            {{62, 189, 22}, {67, 190, 22}, {66, 191, 20}, {61, 192, 54}, },
            {{63, 193, 56}, {68, 194, 12}, {67, 195, 22}, {62, 196, 22}, },
            {{60, 197, 53}, {65, 198, 11}, {68, 199, 12}, {63, 200, 56}, },
            {{4, 201, 24}, {3, 202, 14}, {30, 203, 17}, {29, 204, 36}, },
            {{49, 103, 49}, {43, 89, 43}, {14, 205, 29}, {13, 206, 28}, {45, 150, 45}, {47, 207, 55}, },
    };
    for (int i = 0; i < (sizeof(faces))/ sizeof(faces[0]); ++i) {
        glBegin(GL_POLYGON);
        for (int j = 0; j < (sizeof(faces[0]))/ sizeof(faces[0][0]); ++j) {
            if (faces[i][j][0] != NULL) {
                glVertex3fv(vertices[faces[i][j][0] - 1]);
                if (faces[i][j][1] != NULL) {
                    if(tex_coords[faces[i][j][1] - 1][2] == NULL)
                        glTexCoord2f(tex_coords[faces[i][j][1] - 1][0], tex_coords[faces[i][j][1] - 1][1]);
                    else
                        glTexCoord3fv(tex_coords[faces[i][j][1] - 1]);
                }
                if (faces[i][j][2] != NULL) {
                    glNormal3fv(normals[faces[i][j][2] - 1]);
                }
            }
        }
        glEnd();
    }
}

void WindMill::fan(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat scaleX, GLfloat scaleY, GLfloat scaleZ) {
    glPushMatrix();
    glScalef(scaleX,scaleY,scaleZ);
    Basic::kubus(-5,-1.25,0,10,1,2.5,5);
    glRotatef(90, 0, 0, 1);
    Basic::kubus(-5,-1.25,0,10,1,2.5,5);
    glPopMatrix();
}