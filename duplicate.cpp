#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool duplicate_within_k(int arr[], int n, int k)
{
    bool flag = false;
    for(int i=0;i<n;i++)
    {
            for(int j=i+1;j<=k;j++)
            {
                    if(arr[i] == arr[j])
                    {
                        printf("duplicate element at distance :%d\n",j);
                        flag = true;
                    }
            }
    }
    return flag;
}

bool duplicate_at_k(int arr[], int n, int k)
{
        bool flag = false;
        for(int i=0;i<n;i++)
        {
                if(arr[i] == arr[i+k])
                {
                        printf("duplicate element at k distance\n");
                        flag = true;
                }
        }
        return flag;
}

int main()
{
        int arr[] = {1, 2, 3, 4, 1, 2, 3, 4};
        int size = sizeof(arr)/sizeof(arr[0]);
        if(duplicate_within_k(arr, size, 3) == false)
                        printf("no duplicate elements within k distance\n");
}
