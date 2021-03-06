#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;

void rndFiller(int *arr,int n){
       
     int randed;
     
     srand(time(0));
     for(int i=0;i<n;i++){
                 randed = rand();
                 arr[i] = abs(randed);
     }
}

void arrPrint(int *arr,int n){
     for(int i=0;i<n;i++){
             cout << arr[i] << endl;
     }     
}

int itemsInRange(int *arr, int n, int p, int q){
    int count=0;
    for(int i=0;i<n;i++){
            if(arr[i]>=p && arr[i]<q){
                         count++;     
            }   
    }
    
    return count;    
}

void itemsInRangeSwap(int *arr, int n, int p, int q){
    for(int i=0;i<n;i++){
            if(arr[i]>=p && arr[i]<q){
                         arr[i] = sqrt(arr[i]);
                         cout << "--------- In range change     ----------" << endl;
            } else{ 
                    arr[i]+=sqrt(i);
                    cout << "--------- Out of range change ----------" << endl;
              }  
    }
    
}



int main(){
	int N=8;
    int *arr = new int[N];
    rndFiller(arr,N);
    arrPrint(arr,N);
    
     
    cout << "-----------*****************------------" << endl;
    itemsInRangeSwap(arr,N,2000,10000);
    arrPrint(arr,N);
    return 0;
}
