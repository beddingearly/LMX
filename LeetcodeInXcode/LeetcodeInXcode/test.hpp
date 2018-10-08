//
//  test.hpp
//  LeetcodeInXcode
//
//  Created by bedding early on 2018/9/21.
//  Copyright © 2018年 bedding early. All rights reserved.
//

#ifndef test_hpp
#define test_hpp

class A{
private:
    const int a;
public:
    //A(){};
    A(int x):a(x){};
    
    int getvalue(){return a;};
    int getvalue() const;
    
    
};

#endif /* test_hpp */
