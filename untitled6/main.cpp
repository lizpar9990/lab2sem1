#include <fstream>
#include <iostream>
#include <string>
#include "Ochkiit.h"
using namespace std;

int main(){

    int n=0;
    int stop=0;
    while (stop!=1){
        int key;
        cout<<"1-create, 2-load, 3-save, 4-search, 5-insert, 6-delete\n"<<endl;
        cin >> key;
        switch (key){


         case 1:{
           int i=0;
            int n;
             cout <<"n=";
             cin >> n;
             if (n< 1)
                cout << "неверное значение"<<endl;
             break;
              Ochki *arr= new Ochki[n];
             void  _create(Ochki *arr, int n);
              break;
}


        case 2:{
            void _load (int &n);

            break;}



        case 3:
           void _save(Ochki* arr, int n);
           break;


        case 4:
            void _search(Ochki* arr,int n);
            break;

        case 5:
           void _insert(Ochki* arr, int n);
           break;

        case 6:
           void _delete(Ochki* arr, int n);
           break;




        default:
            stop=1;
            break;
                }
        }
    return 0;}
