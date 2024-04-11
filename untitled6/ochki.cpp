#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
#include "Ochkiit.h"

using namespace std;

void Ochkiit :: _save (Ochki* arr, int n){
    ofstream out("a.txt");
    if (!out.is_open())
        return;
    out <<n<< endl;
    for (int i=0; i<n; i++)
        out <<arr[i]._size()<<" "<<arr[i]._color()<<" "<<arr[i]._price()<<" "<<arr[i]._country()<<endl;
    out.close();
    delete []arr;
    }

void Ochkiit :: _create (Ochki* arr, int n){
int i=0;

    for (int i=0; i<n; i++){

    cout<< "color=";
    string _color;
    cin >>_color;
    arr[i].setColor(_color);

    cout<< "country=";
    string _country;
    cin >>_country;
    arr[i].setCountry(_country);

    cout<< "color=";
    int _price;
    cin >>_price;
    arr[i].setPrice(_price);

    cout<< "color=";
    int _size;
    cin >>_size;
    arr[i].setSize(_size);}
    _save(arr,n);
    delete [] arr;
    return;
    }

void Ochkiit :: _load (int &n){
    ifstream in("a.txt");
    if (!in.is_open())
        cout << "неверное значение";
    Ochki *arr = new Ochki[n];
    for (int i=0; i<n; i++){
        string _color;
        string _country;
        int _price;
        int _size;
        in>>_color>> _country>> _price>> _size;
         arr[i].setColor(_color);
          arr[i].setCountry(_country);
           arr[i].setPrice(_price);
            arr[i].setSize(_size);}
    in.close();}


void Ochkiit ::_search (Ochki *arr,int n){
   cout<<"vvedite nomer dlya poiska:\n"
          " 1 - color\n"
          " 2 - country\n"
          " 3 - price\n"
          " 4 - size\n"<<endl;
          int key;
          string r;
          int t;
  cin >> key;
   printf("vvedite iskomoe znachenie: ");

   switch (key)
   {
      case 1:
         cin >> r;
         for (int i = 0; i < n; i++)
         {
            if ((arr[i]._color()== r))
            {
            cout<<arr[i]._color(), arr[i]._country(), arr[i]._price(), arr[i]._size();
            }
         }
         break;

      case 2:
       cin >> r;
       for (int i = 0; i < n; i++)
       {
          if ((arr[i]._country()== r))
          {
          cout<<arr[i]._color(), arr[i]._country(), arr[i]._price(), arr[i]._size();
          }
       }
       break;

      case 3:
       cin >> t;
       for (int i = 0; i < n; i++)
       {
          if ((arr[i]._price()== t))
          {
          cout<<arr[i]._color(), arr[i]._country(), arr[i]._price(), arr[i]._size();
          }
       }
       break;


      case 4:
       cin >> t;
       for (int i = 0; i < n; i++)
       {
          if ((arr[i]._size()== t))
          {
          cout<<arr[i]._color(), arr[i]._country(), arr[i]._price(), arr[i]._size();
          }
       }
       break;

      default:
        cout<<"error!\n";
  break;}}

   void Ochkiit :: _insert(Ochki* arr, int n){
       string r;
       string t;
      cout<<"введите значение color, которое хотите заменить"<<endl;
      cin>>t;
      cout<<"введите значение color, которым хотите заменить"<< t<<endl;
      cin>>r;

      for (int i = 0; i < n; i++)
      {
         if (arr[i]._color()== t)
         {
             arr[i]._color()=r;

         cout<<arr[i]._color(), arr[i]._country(), arr[i]._price(), arr[i]._size();}

      }}


   void Ochkiit :: _delete(Ochki* arr,int n){



   }







