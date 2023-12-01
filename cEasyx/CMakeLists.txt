cmake_minimum_required(VERSION 3.26)
set(EasyX_INC D:\\VS IDE\\VC\\Auxiliary\\VS\\include) # 你的include地址
set(EasyX_LINK D:\\VS IDE\\VC\\Auxiliary\\VS\\lib\\x64) # 找与自己的环境配置对应的版本
include_directories(${EasyX_INC})
link_directories(${EasyX_LINK})
#在lib对应的文件夹里面找lib文件（一般只有EasyXa和EasyXw这两个，进行链接）
link_libraries(EasyXa)
link_libraries(EasyXw)
project(cEasyx C)

set(CMAKE_C_STANDARD 11)


add_executable(cEasyx
        test1.c)
