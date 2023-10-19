#include <iostream>
using namespace std;
void selection(int*arr,int size){


	 for (int i=0;i<size;i++){
	    for (int j=1+i;j<size;j++){
	    	if(arr[i]>arr[j])
	    	swap(arr[i],arr[j]);
	    }
	    
	}
}

int main(){
	int arr[5]={3,6,2,1,9};
	int size =5;
	selection(arr,size);
	 

    for(int i=0;i<size;i++){
    	cout<<arr[i]<<" ";
	}
}
