#include "generator.h"

void generator(int array[], int length){
    
    for (int i = 0;i<length/2;i++){
        array[i] = 1;
    }

    for (int j = length/2;j<length;j++){
        array[j] = -1;
    }

}

void fisher_yates(int array[], int length){

    for (int i = length-1;i>=1;i--){

        int j;
        int temp;

        j = rand() % length;
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;

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

int run(int number, int repetition){
        int x;
        int arr[2*number];

        x = 0;

        for(int i=0; i<repetition;i++){

            generator(arr, 2*number);
            fisher_yates(arr, 2*number);

            if (non_negative_prefix_sum(arr, number) == true){
                    x = x + 1;
            }
        }

        return x;

}
