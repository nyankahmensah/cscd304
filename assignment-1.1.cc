#include <iostream>

int min(int a, int b){
    return a < b? a: b;
}

int max(int a, int b){
    return a > b? a: b;
}

int findMin(int arr[],int n){
    if(n == 1){
        return arr[0];
    }
    return min(arr[n - 1], findMin(arr, n- 1));
}

int findMax(int arr[],int n){
    if(n == 1){
        return arr[0];
    }
    return max(arr[n - 1], findMax(arr, n- 1));
}

int main(){
    int arrLength;
    cout << "Enter the size of the array: ";
    cin >> arrLength;
    cout << endl;

    int arr[arrLength];

    for(int i=0; i<arrLength; i++){
        cout << "Enter Element " << i+1 << " : ";
        cin >> arr[i];
        cout << endl;
    }
    
    int min = findMin(arr, arrLength);
    int max = findMax(arr, arrLength);  
    cout << " Min : " << min << endl;
    cout << " Max : " << max << endl;
    return 0;
}
