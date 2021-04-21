
#include <iostream>
#include "trip.h"
#include "cruise.h"

void customerPrintCruise(Trip<Cruise> trip){
    cout << "**********************************************" << endl;
    for(int i= 0; i< 100; i++){
        if(trip[i].getPrice() != 0.0){
            trip[i].getCustomers(i);
        }
        else{
            break;
        }
    }
}

void customerPrintFlight(Trip<Flight> trip){
    cout << "**********************************************" << endl;
    for(int i= 0; i< 100; i++){
        if(trip[i].getPrice() != 0.0){
            trip[i].getCustomers(i);
        }
        else{
            break;
        }
    }
}


using namespace std;
int main() {
    Flight flight1("Istanbul-Ankara","TK124",244.7);
    Flight flight2("Istanbul-Sanliurfa","TK235",132.7);
    Flight flight3("Osmaniye-Ankara","TK243",124.2);
    Flight flight4("Istanbul-Hatay","TK113",241.1);
    Cruise cruise("Mersin-Ankara",172.3);
    Cruise cruise2("Istanbul-Ankara",219.2);
    Cruise cruise3("Izmir-Kayseri",150.5);
    Trip<Flight> flightTrip(flight1);
    Trip<Cruise> cruiseTrip(cruise);

    Flight *flightArray = new Flight[2];
    flightArray[0] = Flight("Istanbul - Izmir","TK113",183.6);
    flightArray[1] = Flight("Izmir - Istanbul","TK311",162.5);
    cout << "**********************************************" << endl;
    flightArray[0].getCustomers(0);
    cout << "**********************************************" << endl;
    flightArray[1].getCustomers(1);

    delete [] flightArray;


    flightTrip.add(flight1);
    flightTrip.add(flight2);
    flightTrip.add(flight3);

    cruiseTrip.add(cruise);
    cruiseTrip.add(cruise2);
    cruiseTrip.add(cruise3);


    cruiseTrip[0].getCustomers(0);
    customerPrintFlight(flightTrip);
    customerPrintCruise(cruiseTrip);

    Trip<Flight> flightTrip2(flight4);
    flightTrip2.add(flight4);


    Trip<Trip<Flight>> multipleTrips;
    multipleTrips.add(flightTrip);

    Cruise c("Istanbul - Izmir",180.2);
    Trip<Cruise> cruiseTrip1(c);
    cruiseTrip.add(c);
    cruiseTrip[1].setDiscounts(15);
}

