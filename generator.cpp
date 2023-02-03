#include <iostream>
#include "generator.h"

using namespace std;

void generator(int arr[], int n){
    
    for (int i = 0;i<n/2;i++){
        arr[i] = 1;
    }

    for (int j = n/2;j<n;j++){
        arr[j] = -1;
    }

}

void fisher_yates(int arr[], int n){

    for (int i = n-1;i>=1;i--){

        int j;
        int temp;

        j = rand() % n;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

    }
}

bool non_negative_prefix_sum(int array[], int length) {
        bool result = true;
        int sum = 0;
        for (int i = 0; i < length; i++) {
                sum += array[i];
                if (sum <= -1) {
                        result = false;
                }
        }
        return result;
}

int run(int n, int r){
        int x;
        int arr[2*n];

        x = 0;

        for(int i=0; i<r;i++){

            generator(arr, 2*n);
            fisher_yates(arr, 2*n);

            if (non_negative_prefix_sum(arr, n) == true){
                    x = x + 1;
            }
        }

        return x;

}

int main(){
        int value;
        int repetitions;

        cout << "Number: " << endl;
        cin >> value;
        cout << "Repetitions: " << endl;
        cin >> repetitions;

        int outp = run(value, repetitions);
        cout << "Balanced Lists & repetitions: " << outp << " ; " << repetitions << endl;
        cout << "Percent Success: " << (outp / float(repetitions) * 100) << endl;

        return 0;
}
