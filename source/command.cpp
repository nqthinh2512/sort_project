#include "command.h"

// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// int main(int argc, char *argv[])
// {
//     if (argv[1] == "-a")
//     {
//         cout << "ALGORITHM MODE" << endl;
//         cout << "Algorithm: " << argv[2] << endl;
//         char *temp = argv[3];
//         bool isFile = false;
//         while (*temp != '\0' && *temp != '.')
//         {
//             isFile = true;
//             break;
//             temp += 1;
//         }
//         if (isFile)
//         {
//             cout << "Input file: " << argv[3] << endl;
//             fstream fin(argv[3], ios::in);
//             int n;
//             fin >> n;
//         }
//     }
//     else if (argv[1] == "-c")
//     {
//     }
//     else
//     {
//         cout << "check the argv[1] is really correct?" << endl;
//         return 1;
//     }
// }