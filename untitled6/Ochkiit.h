#include <fstream>
#include <iostream>
#include <string>
#include "ochki.h"

using namespace std;

class Ochkiit{
public:

void _create (Ochki* arr, int n);
void _load (int &n);
void _save(Ochki* arr, int n);
void _search(Ochki* arr,int n);
//void _print(Ochki* arr);
void _delete(Ochki* arr,int n);
void _insert(Ochki* arr,int n);
};
