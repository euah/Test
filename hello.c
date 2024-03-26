#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//#define arrSIZE 6

int main() {
    int answer = 0;
    int a_num = 0;
    int arr1[] = {0};
    
    scanf("%d", &a_num);
    //int arr1[6] = {12, 15, 46, 38, -2, 15};
    //int arr2[6] = {13, 22, 53, 24, 15, 6};
    for(int i=0; i<a_num; i++) {
        scanf("%d",&arr1[i]);
    }

    for(int i=0; i<a_num; i++) {
        int j=arr1[i];
        printf("j : %d\n", j);
        if(j<0) {
            answer = j;
            printf("answer : %d\n", answer);
        } 
    }

    if(answer == 0) {
        answer = -1;
    }

    printf("answer = %d", answer);
    return answer;
}

// num_list_len은 배열 num_list의 길이입니다.
/*int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    
    int arr1[6] = {12, 4, 15, 46, 38, -2, 15};
    int arr2[6] = {13, 22, 53, 24, 15, 6};
    
    for(int i=0; i<arrSIZE; i++) {
        int j=arr1[i];
        if(j<0) {
            answer = j;
        }
    }
    return answer;
} */