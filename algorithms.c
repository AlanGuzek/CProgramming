void insertion_sort(int array[], int length){
    int key;
    int i;
    for(int j = 1; j < length; j++){
        key = array[j];
        i = j-1;
        while(i > 0 && array[i] > key){
            array[i+1] = array[i];
            i--;
        }
        array[i+1] = key;
    }
}

void bubble_sort(int array[], int lenght){
    int i, j, temp;
    for(i = 0; i < lenght; i++){
        for(j = 0; j < n-lenght-1; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void move_array2D(int n, int m, char array[n][m], int n_times){
    char temp;
    for(int i = 0; i < n_times; i++){
        temp = array[n-1][m-1];
        for(char* p = (char*)array + N*M -2; p >= (char*)array; p--){
            *(p+1) = *p;
        }
        **array = temp;
    }
}

int max_sum_subarray(int array[], int n){
    int max_sum = *array;
    int temp_sum = max_sum;
    for(int *p = array + 1; p < array + n; p++){
        temp_sum += *p;
        if(temp_sum > max_sum){
            max_sum = temp_sum;
        }
        if(temp_sum < 0){
            temp_sum = 0;
        }
    }
    return max_sum;
}