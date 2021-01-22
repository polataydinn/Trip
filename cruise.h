/*
* @Yazar
        * Öğrenci adı: Sena Seda Gök
        * Öğrenci Kimliği : 170504032
* Tarih: 21.01.2021
*/
#ifndef UNTITLED_CRUISE_H
#define UNTITLED_CRUISE_H

#endif //UNTITLED_CRUISE_H
class Cruise{
private:
    string konum;
    double fiyat;
public:

    Cruise(string konum, double fiyat){
        this->konum = konum;
        this-> fiyat = fiyat;
    }

    void setDiscounts(double indirim){
        if(indirim <= 0 && indirim <=40){
            fiyat = fiyat - indirim;
        }else{
            cout << "hatalı aralıkta değer girdiniz.";
        }
    }

    void getCustomers(int i){
        cout << i +1 << " Cruisor name " << konum << " Cost " << fiyat << endl;
    }

    double getPrice(){
        return fiyat;
    }

};