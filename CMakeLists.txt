cmake_minimum_required (VERSION 3.6)
project(discord-bot)

add_executable(discord-bot bot.cpp)

add_subdirectory(libs/sleepy-discord)
target_link_libraries(discord-bot sleepy-discord)
