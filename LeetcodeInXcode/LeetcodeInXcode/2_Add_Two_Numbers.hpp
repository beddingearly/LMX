//
//  2_Add_Two_Numbers.hpp
//  LeetcodeInXcode
//
//  Created by bedding early on 2018/10/7.
//  Copyright © 2018 bedding early. All rights reserved.
//

#ifndef __Add_Two_Numbers_hpp
#define __Add_Two_Numbers_hpp

#include <stdio.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr){};
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *a = new ListNode(-1);
        ListNode* p = a;
        //p = p->next;
        int flag = 0;
        while (l1 && l2) {
            int tmp = l1->val + l2->val +flag;
            if (tmp > 9){
                tmp -= 10;
                flag = 1;
            }
            else{
                flag = 0;
            }
            p->next = new ListNode(tmp);
            p = p->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1) {
            if (flag == 1){
                l1->val += 1;
                if (l1->val > 9) {
                    l1->val -= 10;
                    flag = 1;
                }
                else{
                    flag =  0;
                }
                p->next = new ListNode(l1->val);
                p = p->next;
                l1 = l1->next;
            }
            else{
                p->next = l1;
                break;
            }
        }
        while (l2) {
            if (flag == 1){
                l2->val += 1;
                if (l2->val > 9) {
                    l2->val -= 10;
                    flag = 1;
                }
                else{
                    flag =  0;
                }
                p->next = new ListNode(l2->val);
                p = p->next;
                l2 = l2->next;
            }
            else{
                p->next = l2;
                break;
            }
        }
        if(flag == 1){
            p->next = new ListNode(1);
        }
        return a->next;
    }
    // 2
    ListNode *addTwoNumberss(ListNode *l1, ListNode *l2) {
        ListNode dummy(-1);
        int carry = 0;
        ListNode *prev = &dummy;
        for (ListNode *pa = l1, *pb = l2;
             pa != nullptr || pb != nullptr;
             pa = pa == nullptr ? nullptr : pa->next,
             pb = pb == nullptr ? nullptr : pb->next,
             prev = prev->next) {
            const int ai = pa == nullptr ? 0 : pa->val;//重新初始化const修饰的变量
            const int bi = pb == nullptr ? 0 : pb->val;
            const int value = (ai + bi + carry) % 10;
            carry = (ai + bi + carry) / 10;
            prev->next = new ListNode(value);
        }
        if (carry > 0)
            prev->next = new ListNode(carry);
        return dummy.next;
    }
};

#endif /* __Add_Two_Numbers_hpp */
