#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <time.h>
#include <iostream>
#include "simplevar.hpp"
#include "dynamicVar.hpp"
#include <fstream>

using namespace std;

namespace stdLib
{
    void cmd(const char *text)
    {
        system(text);
    }

    string len(string i)
    {
        char *output = new char[i.length()];
        std::string out(output);
        return out;
    }

    void sleepTime(int time)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(time));
    }

    void prnt(string text, string op = "null")
    {
        if (op == "outLine")
        {
            cout << text << endl;
        }
        else if (op == "null")
        {
            cout << text;
        }
        else if (op == "2xoutline")
        {
            cout << text << endl
                 << endl;
        }
    }
    string input(string inputOutText, bool outline = false)
    {
        if (outline)
        {
            cout << inputOutText << endl;
            string input_variable;
            cin >> input_variable;
            return input_variable;
        }
        else
        {
            cout << inputOutText;
            string input_variable;
            cin >> input_variable;
            return input_variable;
        }
    }
    void write(string WRITETEXT, string WRITEPATH)
    {
        ofstream myWriteR(WRITEPATH);
        myWriteR << WRITETEXT;
        auto close = [&]()
        {
            myWriteR.close();
        };
    }

    string read(string READPATH)
    {
        ifstream myReader(READPATH);

        string RETURNREADER;
        while (getline(myReader, RETURNREADER))
        {
            RETURNREADER = RETURNREADER;
        }

        auto close = [&]()
        {
            myReader.close();
        };

        return RETURNREADER;
    }

    template <typename T>
    void loopTime(int time, T &&lambda)
    {
        while (true)
        {
            this_thread::sleep_for(chrono::milliseconds(time));
            lambda();
            continue;
        }
    }

    int RandomInt(int min, int max) {
        srand(time(NULL));
        int randomOUTVARLIB = min - max;
        int randomNUMselector = rand() % randomOUTVARLIB + 1;
        return randomNUMselector;
    }

    string RandomList(string LIST[], int listSize) {
        srand(time(NULL));
        int RandomNumSelect = rand() % listSize;
        return LIST[RandomNumSelect];
    }
    template<typename T>
    void loopNumber(T&& fun, int count) {
        int i;
        for (i = 0; i < count; ++i) {
            fun();
        }
    }
}

// * Git kullanımı : https://discord.com/channels/735843488880394411/845315416788303922/949663566292721695