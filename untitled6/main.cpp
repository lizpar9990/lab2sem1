#include <fstream>
#include <iostream>
#include <string>
#include "Ochkiit.h"
using namespace std;

int main(){
    Ochki *arr=NULL;
    int n=0;
    int stop=0;
    while (stop!=1){
        int key;
        cout<<"1-create, 2-load, 3-save, 4-search, 5-insert, 6-delete, 7-add, 8- print\n"<<endl;
       cin >> key;
        switch (key){


         case 1:

            int n;
             cout <<"n=";
             cin >> n;
             if (n< 1)
                cout << "неверное значение"<<endl;
             else
              Ochki *arr= new Ochki[n];
             Ochkiit::_create(arr, n);
              break;



        case 2:
            arr = Ochkiit:: _load (n);
            for (int i=0; i<n; i++)
                cout << arr[i];
            break;


        case 3:
            arr = Ochkiit:: _load (n);
           Ochkiit::_save(arr, n);
           break;


        case 4:
            arr = Ochkiit:: _load (n);
            Ochkiit:: _search ( arr, n);
            break;

        case 5:
           arr = Ochkiit:: _load (n);
           Ochkiit::_insert(arr, n);
           Ochkiit::_save(arr, n);
           break;

        case 6:
           arr = Ochkiit:: _load (n);
           Ochkiit:: _delete(arr,  n);
            Ochkiit::_save(arr, n);
           break;
        case 7:
           arr = Ochkiit:: _load (n);
           Ochkiit:: _add(arr,  n);
            Ochkiit::_save(arr, n);
           break;
        case 8:
           arr = Ochkiit:: _load (n);

           for (int i=0; i<n; i++)
               cout<<arr[i]._color()<<" "<<arr[i]._country()<<" "<<arr[i]._price()<<" "<<arr[i]._size()<<endl;

            break;




        default:
            stop=1;
            break;
                }
        }
    return 0;
}
