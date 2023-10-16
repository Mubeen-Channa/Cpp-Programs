#include <iostream>
using namespace std;

int main(){
    int array[] = {1,2,3,4,5,6};
    int item=1;
    int loc=-1;
    int i=0, N= sizeof(array) / sizeof(array[0]);

    while (i<N){
        if (item==array[i]){
            loc=i;
            break;
        }
        i++;
    }

    if(loc>=0){
        cout<<"Location of item "<<item<<" is : "<<loc;
    }
    else {
        cout<<"item "<<item<<" not present in array";
    }
}