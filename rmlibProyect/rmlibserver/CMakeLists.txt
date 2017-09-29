cmake_minimum_required(VERSION 3.8)
project(rmlibserverBranch)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        list/List.cpp
        list/List.h
        list/Node.cpp
        list/Node.h main.cpp test.cpp list/ListHandler.cpp list/ListHandler.h encryption/encryption.h encryption/encryption.cpp server/Server.cpp server/Server.h container/InfoContainer.cpp container/InfoContainer.h cache/CacheHandler.cpp cache/CacheHandler.h cache/CacheHandler.cpp cache/CacheHandler.h)

add_executable(rmlibserverBranch ${SOURCE_FILES})