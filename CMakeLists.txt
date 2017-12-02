cmake_minimum_required(VERSION 3.8)
project(kingdom)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp object/Basic.cpp object/Basic.h material/Material.cpp material/Material.h object/Pohon.cpp object/Pohon.h object/Batu.cpp object/Batu.h object/Castle.cpp object/Castle.h camera/Camera.cpp camera/Camera.h object/WindMill.cpp object/WindMill.h util/Util.cpp util/Util.h object/Catapult.cpp object/Catapult.h other/R1.cpp other/R1.h other/R2.cpp other/R2.h object/Tent.cpp object/Tent.h object/Bridge.cpp object/Bridge.h)
add_executable(kingdom ${SOURCE_FILES})
target_link_libraries(kingdom glut32 glu32 opengl32)