add_library(good Config.cpp
    ConfigUserA.cpp
    ConfigUserB.cpp
    ConfigUserC.cpp
    ConfigUserD.cpp
    ConfigUserE.cpp
    ConfigUserF.cpp
    ConfigUserG.cpp
    ConfigUserH.cpp
    ConfigUserI.cpp
    ConfigUserJ.cpp
    ConfigUserK.cpp
    ConfigUserL.cpp
    ConfigUserM.cpp
    ConfigUserN.cpp
    ConfigUserO.cpp
    ConfigUserP.cpp
    ConfigUserQ.cpp
    ConfigUserR.cpp
    ConfigUserS.cpp
    ConfigUserT.cpp
    ConfigUserU.cpp
    ConfigUserV.cpp
    ConfigUserW.cpp
    ConfigUserX.cpp
    ConfigUserY.cpp
    ConfigUserZ.cpp)

target_include_directories(good PUBLIC ${Boost_INCLUDE_DIRS})
target_link_libraries(good ${Boost_LIBRARIES})
