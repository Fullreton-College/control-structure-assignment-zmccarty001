/* create the code yourself */
/* Use Switch Statement */
#include <iostream>
using namespace std; 
int main() {
    int quant;
    int price_One, price_Two, price_Three, price_Four, price_Five;
    int count = 1;
    double base_Price = 199.00;
    while (count <= 5) {
        cout<<"Enter quantity of units (will need to enter five times for five quantities): ";
        cin>>quant;
        switch (quant) {
            case 12:
                price_One = (base_Price * quant * 0.8);
                break;
            case 29:
                price_Two = (base_Price * quant * 0.7);
                break;
            case 55:
                price_Three = (base_Price * quant * 0.6);
                break;
            case 150:
                price_Four = (base_Price * quant * 0.5);
                break;
            case 5:
                price_Five = (base_Price * quant);
                break;
        }

        count++;
    }
    cout<<"Total price is: "<< price_One + price_Two + price_Three + price_Four + price_Five<< endl;
    return 0;


    }





