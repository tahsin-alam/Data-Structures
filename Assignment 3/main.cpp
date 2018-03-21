#include <iostream>
#include "temp.h"
#include<string>
using namespace std;
using namespace tahsin_data_structures;


int main() {
    cout << "checking all elements";
    temp<int> S;
    S.insert(12);
    S.insert(1);
    S.insert(3);

    S.insert_first(5);
    S.insert_first(7);

    S.insert_at(8,3);
    S.insert_at(9,2);
    S.insert_at(2,1);


    cout<< "lets do all the erase functions"<< endl;
    cout<< S<<endl;

    cout<<"Erasing the first index"<<endl;
    S.erase_first();
    cout<<S<<endl;

    cout<<"Erasing the last index"<<endl;
    S.erase_last();
    cout<<S<<endl;

    cout<< "Erasing from any index"<<endl;
    S.erase_from(0);
    cout<<S<<endl;
    S.erase_from(3);
    cout<<S<<endl;

    cout<< "Erasing any occurence of value"<<endl;
    S.erase_occurance(3,2);
    cout<<S<<endl;

    cout<< "count function"<<endl;
    cout << "We have" << S.count(5)<<"numbers of 6";
    S.insert(6);
    cout<<"\n"<<endl;

    return 0;
}


