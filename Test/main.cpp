//
//  main.cpp
//  Test
//
//  Created by 王一 on 10/6/14.
//  Copyright (c) 2014 王一. All rights reserved.
//

#include <iostream>
using namespace std;

void insertSort(int a[],int n)
{
    for(int i=1;i<n;++i)
    {
        for(int j=i;j>0 && a[j-1]>a[j];--j)
        {
                swap(a[j],a[j-1]);
        }
    }
}

void quickSort(int a[],int l,int r)
{
    if((r-l)>100)
    {
        //int random=rand()%r;
        //swap(a[l],a[random]);
        int pivot = a[l];
        
        int j=r,i = l;
        for(;i<j;)
            {
                for(;i<j&&a[j]>=pivot;)
                {
                     j--;
                }
                if (i<j) a[i++]=a[j];
                for(;i<j&&a[i]<pivot;)
                {
                    i++;
                }
                if (i<j) a[j--]=a[i];
            }
        a[i]=pivot;
        quickSort(a, l, i-1);
        quickSort(a,i+1 , r);
    }
    else insertSort(a,r);
}


int main() {
    // insert code here...
    //cout << "Hello, World!\n";
    int n;
    cout<<"n=?"<<endl;
    cin>>n;
    int array[n];
    for(int j=0;j<n;++j)
    {
        array[j]=rand()%1000;
    }
    cout<<"done"<<endl;
    //insertSort(array,n);
    quickSort(array,0,n);
    for(int i=0;i<n;++i)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}

