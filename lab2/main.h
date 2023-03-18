#ifndef LAB2_CPP__MAIN_H
#define LAB2_CPP__MAIN_H
#include <iostream>
#include "main.h"
#include <fstream>
using namespace std;
class file {
public:
    ofstream file;
    string name_f = "";
    void start(){
        int a;
        bool While=true;
        while (While) {
            menu();
            cin >> a;
            switch (a){
                case 1:
                    open();
                    break;
                case 2:
                    close();
                    break;
                case 3:
                    get_name();
                    break;
                case 4:
                    open_file();
                    break;
                case 5:
                    write_file();
                    break;
                case 6:
                    write_numbers();
                    break;
                case 0:
                    cout << "The program has been closed.\nGood luck!\n";
                    While = false;
                    break;
                default:
                    cout << "No this command.\n";
                    break;
            }
        }
    };
    void open(){
        cout << "Enter file name: ";
        cin >> name_f;
        file.open(name_f , ios::app);

    };
    void close(){
        file.close();
    };
    int  open_file(){
        if (!file.is_open()){
            cout << "File closed \n";
            return -1;
        }
        else{
            cout << "File open \n";
            return 1;
        }
    }
    void get_name(){
        if (name_f != "") {
            cout << "Name file: " << name_f << "\n";
        }else{
            cout << "File not open\n";
        }
    }
    void write_file(){
        string s1;
        cout << "Enter: ";
        cin >> s1;

        if (file.is_open()){
            file << s1 << endl;
        } else{
            cout << "File not open";
        }
    }
    void write_numbers(){
        int kol_n , n;
        if (file.is_open()) {
            cout << "How many digits? " << "\n";
            cin >> kol_n;
            for (int i = 0; i < kol_n; i++) {
                cin >> n;
                file << n << " ";
            }
            file << "\n";
        }else{
            cout << "\n"
                    "File not open";
        }
    }
    void menu(){
        cout <<"Select an item:" << "\n";
        cout << "1 Opening a file." << "\n";
        cout << "2 Closing a file." << "\n";
        cout << "3 Getting the file name." << "\n";
        cout << "4 Checking if a file is open." << "\n";
        cout << "5 Writing to a string file." << "\n";
        cout << "6 Writing an integer to a file." << "\n";
        cout << "0 End of the program." << "\n";
    }

};


#endif //LAB2_CPP__MAIN_H
