/**
hello_matrix.cpp
Colton Fowler
Hello, world for github
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

#ifdef _WIN32
    #define CLEAR "cls" /*Win*/
#else
    #define CLEAR "clear" /*Linux*/
#endif

int main() {
    string chars = "01abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string msg = "Hello World this is MrBoxxHead";

    srand(time(0));

    for (size_t i = 0; i < msg.size(); i++) {
        // show random chars
        for (size_t j = 0; j < msg.size(); j++) {
            cout << chars[rand() % chars.size()];
        }
        cout << endl;

        this_thread::sleep_for(chrono::milliseconds(200));

        // show polished message
        cout << msg.substr(0, i + 1) << endl;

        this_thread::sleep_for(chrono::milliseconds(200));
        system(CLEAR); // for Windows and Linux
    }

    cout << msg << endl;
    return 0;
}
