//
//  58_Length_of_Last_Word.cpp
//  LeetcodeInXcode
//
//  Created by bedding early on 2018/12/3.
//  Copyright © 2018 bedding early. All rights reserved.
//
#include <stdio.h>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = (int)s.length();
        int left = 0;
        int right = len - 1;
        int count = 0;
        while (s[left] == ' '){
            left ++;
        }
        while (s[right] == ' ') {
            right --;
        }
        string ss = s.substr(left, right);
        for (int i = 0; i < ss.length(); i++){
            if (ss[i] == ' '){
                count = 0;
            }
            else{
                count ++;
            }
        }
        return count;
    }
};
int main(){
    string s = "a";
    cout << Solution().lengthOfLastWord(s) << endl;
    
}
