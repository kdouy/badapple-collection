#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
#include <vector>
#include <mmsystem.h>
#include <filesystem>

#pragma comment(lib, "winmm.lib");

using namespace std;

int main()
{
    SetConsoleTitleA("Bad-Apple");

    ifstream f;

    filesystem::path cwd = filesystem::current_path() / "init.txt";

    f.open(cwd.string());

    PlaySound(TEXT("init.wav"), NULL, SND_FILENAME | SND_ASYNC);

    if (f.is_open())
    {
        std::string sentence;
        std::vector<std::string> strlist;

        while (getline(f, sentence, 'E')) {
            strlist.push_back(sentence);
        }

        for (std::string data: strlist)
        {
            std::cout << data;
            Sleep(70);
            system("cls");
        }

        f.close();
    }
}