#include <iostream>
#include "sequence.h"
using namespace std;
using namespace tahsin_data_structures;

int main() {
    cout<< "Let's put some values in for all the insert functions"<<endl;
    sequence seq;// creating an object for sequence.

    seq.insert(12);
    seq.insert(1);
    seq.insert(3);

    seq.insert_first(5);
    seq.insert_first(7);

    seq.insert_at(8,3);
    seq.insert_at(9,2);
    seq.insert_at(2,1);


cout<< "lets do all the erase functions"<< endl;
    cout<< seq<<endl;

    cout<<"Erasing the first index"<<endl;
    seq.erase_first();
    cout<<seq<<endl;

    cout<<"Erasing the last index"<<endl;
    seq.erase_last();
    cout<<seq<<endl;

    cout<< "Erasing from any index"<<endl;
    seq.erase_from(0);
    cout<<seq<<endl;
    seq.erase_from(3);
    cout<<seq<<endl;

    cout<< "Erasing any occurence of value"<<endl;
    seq.erase_occurance(3,2);
    cout<<seq<<endl;

    cout<< "count function"<<endl;
    cout << "We have" << seq.count(5)<<"numbers of 6";
    seq.insert(6);
    cout<<"\n"<<endl;

    return 0;
}





