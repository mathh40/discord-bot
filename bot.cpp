#include <iostream>
#include <sleepy_discord/sleepy_discord.h>

class Bot : public SleepyDiscord::DiscordClient 
{
    public : using SleepyDiscord::DiscordClient::DiscordClient;

     void onMessage(SleepyDiscord::Message msg) override {
        if(msg.startsWith("test")) 
            sendMessage(msg.channelID, "im written in c++");
    }
};

int main()
{
    Bot bot("NzM0NDgwNzIxODE2ODQ2MzM2.XxSUjw.NZV-rVEDum2OxcmA04vDUddy59Y");
    bot.run();

    return 0;
}
