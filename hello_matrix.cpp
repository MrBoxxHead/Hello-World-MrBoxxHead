#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    string chars = "01abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string msg = "Hello World this is MrBoxxHead";

    srand(time(0));

    for (size_t i = 0; i < msg.size(); i++) {
        // show random chars first a little flair
        for (size_t j = 0; j < msg.size(); j++) {
            cout << chars[rand() % chars.size()];
        }
        cout << endl;

        this_thread::sleep_for(chrono::milliseconds(200));

        // Show polished message
        cout << msg.substr(0, i + 1) << endl;

        this_thread::sleep_for(chrono::milliseconds(200));
        system("cls"); // Clear
    }

    cout << msg << endl;
    return 0;
}
