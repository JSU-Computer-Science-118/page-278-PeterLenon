//Peter lenon Goshomi
//J00972650
//Chapter 5 

#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

const string SENTINEL = "-1";

int main()
{
    string name;
    int numOfVolunteers;
    int numOfBoxesSold;
    int totalNumOfBoxesSold;
    double costOfOneBox;
    
    cout<<fixed<<showpoint<<setprecision(2);
    totalNumOfBoxesSold =0;
    numOfVolunteers = 0;
    
    cin>>name;
    
    while(name != SENTINEL)
    {
        cin>>numOfBoxesSold;
        totalNumOfBoxesSold = totalNumOfBoxesSold + numOfBoxesSold;
        numOfVolunteers++;
        cin>>name;
    }
    
    cout<<"Total number of boxes sold: "<<totalNumOfBoxesSold<<endl;
    
    cin>>costOfOneBox;
    
    cout<<"Total money made: "<<totalNumOfBoxesSold*costOfOneBox<<endl;
    
    if (numOfVolunteers != 0 )
    {
        cout<<"Average number of boxes sold by each person: "<<totalNumOfBoxesSold/numOfVolunteers<<endl;
    }

    return 0;
}

