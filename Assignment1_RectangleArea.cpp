#include <iostream>

using namespace std;

int main()
{
	int length_One, width_One, length_Two, width_Two;
    cout<<"Enter length one, width one, length two, and width two of the rectangles: \n";
    cin>>length_One>>width_One>>length_Two>>width_Two;
    int area_One = length_One * width_One;
    int area_Two = length_Two * width_Two;

    if (area_One > area_Two) {
        cout<<"The 1st rectangle has the greater area";
    }
    else if (area_One < area_Two) {
        cout<<"The 2nd rectangle has the greater area";
    }
    else {
        cout<<"The areas are the same";
    }

    return 0;
}

