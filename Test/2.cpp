//
//  2.cpp
//  Test
//
//  Created by 王一 on 10/6/14.
//  Copyright (c) 2014 王一. All rights reserved.
//

#include <iostream>
using namespace std;
int main( )
{
    int a[11];
    int i, j, t;
    cout<<"input 10 numbers ："<<endl;
    for (i=1;i<11;i++)  //输入a[1]~a[10]
        cin>>a[i];
    cout<<endl;
    for (j=1;j<=9;j++) //共进行9趟比较
        for(i=1;i<=10-j;i++)//在每趟中要进行(10-j)次两两比较
            if (a[i]>a[i+1]) //如果前面的数大于后面的数
            {
                t=a[i];a[i]=a[i+1];a[i+1]=t;
            }//交换两个数的位置, 使小数上浮
    cout<<"the sorted numbers ："<<endl;
    for(i=1;i<11;i++) //输出10个数
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
