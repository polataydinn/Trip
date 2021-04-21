
#include "flight.h"
#ifndef UNTITLED_TRIP_H
#define UNTITLED_TRIP_H

using namespace std;
template<class T>
class Trip {
private:
    int kapasite;
    int anlikIndis;
    T **dizi;

public:
    Trip(const T &obj);
    ~Trip();
    void tanimla(int basla=0);
    void cogalt();
    void add(const T &obj);
    const int& size() const{return this ->kapasite;}

  T& operator[] (const int index);


    Trip();
};
template<typename T>
Trip<T>::Trip(const T &obj) {
    this -> kapasite = 10;
    this -> anlikIndis = 0;
    this -> dizi = new T*[this->kapasite];
    tanimla();
}

template<typename T>
void Trip<T>::tanimla(int basla) {
    for(size_t i = basla ; i < kapasite; i++){
        this -> dizi[i] = nullptr;
    }
}

template<class T>
void Trip<T>::cogalt() {
    this -> kapasite *=2;
    T **geciciDizi = new T*[this-> kapasite];

    for(size_t i=0; i< this-> anlikIndis; i++){
        geciciDizi[i] = new T(*this->dizi[i]);
    }

    for(size_t i = 0; i< this-> anlikIndis; i++){
        delete this->dizi[i];
    }
    delete[]this->dizi;

    this-> dizi = geciciDizi;

    tanimla();

}

template<class T>
void Trip<T>::add(const T &obj) {
    if(this-> anlikIndis >= this ->kapasite){
        this->cogalt();
    }

    this -> dizi[this->anlikIndis++]  = new T(obj);
}

template<class T>
T& Trip<T>::operator[](const int index) {
    if(index <0 || index >=anlikIndis){
        //throw("Hatalı İndis Değeri");
    }
        return *this->dizi[index];

}

template<class T>
Trip<T>::~Trip() {
    for(size_t i = 0; i < this ->anlikIndis;i++){
        delete this -> dizi[i];
    }
    delete[]this -> dizi;

}

template<class T>
Trip<T>::Trip() {

}

#endif //UNTITLED_TRIP_H
