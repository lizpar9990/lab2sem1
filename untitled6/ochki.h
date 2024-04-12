#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class Ochki{
private :
    string color;
    string country;
    int price;
    int size;

public:
    friend istream& operator >>(istream& in, Ochki& r);
        friend ostream& operator <<(ostream& out, const Ochki& r);
    string _color() const{
        return color;
                         }
    void setColor (const string &_color){
        if (color !=_color)
            color= _color;
                                          }
    string _country() const{
        return country;
                         }
    void setCountry (const string &_country){
        if (country !=_country)
            country= _country;
                                          }

    int _price() const{
        return price;
                     }
    void setPrice (const int &_price){
        if (price != _price)
            price = _price;
                                    }
        int _size() const{
            return size;
                         }
        void setSize (const int &_size){
            if (size != _size)
                size = _size;
    }









};
