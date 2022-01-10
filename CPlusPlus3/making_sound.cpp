//
// Created by angel on 10/01/2022.
//
#include <iostream>
#include <windows.h>                     // WinApi header

using namespace std;

int main()
{
    Beep(1568, 200);
    Beep(1568, 200);
    Beep(1568, 200);
    Beep(1245, 1000);
    Beep(1397, 200);
    Beep(1397, 200);
    Beep(1397, 200);
    Beep(1175, 1000);

    cout << "Program complete\a";
    return 0;
}