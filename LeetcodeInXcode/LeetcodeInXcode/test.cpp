//
//  test.cpp
//  LeetcodeInXcode
//
//  Created by bedding early on 2018/9/21.
//  Copyright © 2018年 bedding early. All rights reserved.
//

#include "test.hpp"
#include <stdio.h>

int main(){
    int a[7] = {1,7,3,8,5,9,0};
    for(int i=7; i>0; i --){
        bool flag = false;
        for(int j=0; j<i-1; j ++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = true;
            }
        }
        if(!flag){
            break;
        }
    }
    for(int i=0;i<7;i++){
        printf("%d\n", a[i]);
    }
}
