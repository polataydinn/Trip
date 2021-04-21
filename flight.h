
#ifndef UNTITLED_FLIGHT_H
#define UNTITLED_FLIGHT_H
using namespace std;
class Flight : public error_code {
private:
    string konum;
    string ucusBilgi;
    double fiyat;
public:
    Flight(string konum,string ucusBilgi, double fiyat){
        this -> konum = konum;
        this -> ucusBilgi = ucusBilgi;
        this -> fiyat = fiyat;
    }
    Flight(){

    }
    void setCost(double fiyat){
        this -> fiyat = fiyat;
    }

    void getCustomers(int i){
        cout << i +1 << " Flight name " << konum << " # " << ucusBilgi << " Cost " << fiyat << endl;
    }

    double getPrice(){
        return fiyat;
    }


};
#endif //UNTITLED_FLIGHT_H
