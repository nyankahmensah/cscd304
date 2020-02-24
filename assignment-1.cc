#include <iostream>
using namespace std;

int linearSearch(int array[],int element,int arrLength){
    arrLength = arrLength-1;
    if(arrLength < 0){
        return -1;
    }
	else if(array[arrLength] == element){
        return arrLength;
    }
    else{
        return linearSearch(array,element,arrLength);
    }
}

int main(){
    int arrLength;
    cout << "Enter the size of the array: ";
    cin >> arrLength;
    cout << endl;

    int arr[arrLength], element;

    for(int i=0; i<arrLength; i++){
        cout << "Enter Element " << i+1 << " : ";
        cin >> arr[i];
        cout << endl;
    }

    cout << "Enter Element To Search  in List: ";
    cin >> element;
    cout << endl;
    
    int result;
    result = linearSearch(arr, element, arrLength);
    if(result == -1){
        cout << "Element not found in Array";
    }
    else{
        cout << "Element found in Array at index: " << result;
    }
    return 0;
}
