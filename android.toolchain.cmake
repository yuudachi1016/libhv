set(CMAKE_SYSTEM_NAME Android)

#set(CMAKE_SYSTEM_VERSION 21)

set(CMAKE_ANDROID_API 24)

set(ANDROID_ABI "arm64-v8a")

set(CMAKE_ANDROID_NDK /home/hongxin/android-ndk-r21e)

set(CMAKE_ANDROID_STL_TYPE c++_static)

include(/home/hongxin/android-ndk-r21e/build/cmake/android.toolchain.cmake)
