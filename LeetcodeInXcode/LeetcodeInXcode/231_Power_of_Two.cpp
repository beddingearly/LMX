//
//  231_Power_of_Two.cpp
//  LeetcodeInXcode
//
//  Created by bedding early on 2018/10/9.
//  Copyright © 2018 bedding early. All rights reserved.
//

#include <stdio.h>
class Solution{
public:
    bool isPowerOfTwo(int n) {
        if(n == 0){
            return false;
        }
        while (n) {
            if(n == 1){
                return true;
            }
            else if (n % 2 != 0){
                return false;
            }
            n /= 2;
        }
        return true;
    };
    
};
