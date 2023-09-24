#include <iostream>

void three_max(int& a, int& b, int& c) {
    int max_value = std::max(std::max(a, b), c); 
    a = max_value; 
    b = max_value;
    c = max_value;
}
int& find_first_negative_or_first_element(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        if (arr[i] < 0) {
            return arr[i]; 
        }
    }
    return arr[0]; 
}
void zero_common_elements(int arr1[], int length1, int arr2[], int length2) {
    for (int i = 0; i < length1; i++) {
        for (int j = 0; j < length2; j++) {
            if (arr1[i] == arr2[j]) {
                arr2[j] = 0; 
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");


    //Задача 1
    int A = 3, B = 5, C = 4;
    three_max(A, B, C);
    std::cout << A << ' ' << B << ' ' << C << std::endl;


    //Задача 2
    int arr1[] = { 2, 4, 6, 8, -5, 10 };
    int length1 = sizeof(arr1) / sizeof(arr1[0]);
    int& result1 = find_first_negative_or_first_element(arr1, length1);
    std::cout << "Результат 1: " << result1 << std::endl; 
    int arr2[] = { 3, 6, 9, 12, 15 };
    int length2 = sizeof(arr2) / sizeof(arr2[0]);
    int& result2 = find_first_negative_or_first_element(arr2, length2);
    std::cout << "Результат 2: " << result2 << std::endl;


    //Задача 3
    int arr1[] = { 3, 6, 4, 1, 4, 8, 2 };
    int length1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = { 5, 3, 1, 5, 10, 8 };
    int length2 = sizeof(arr2) / sizeof(arr2[0]);
    zero_common_elements(arr1, length1, arr2, length2);    
    for (int i = 0; i < length2; i++) {
        std::cout << arr2[i] << ' ';
    }
    std::cout << std::endl;
    

    return 0;
}