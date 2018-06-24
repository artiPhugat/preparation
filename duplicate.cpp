#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool duplicate(int arr[], int n, int k)
{
        bool flag = false;
        for(int i=0;i<n;i++)
        {
                if(arr[i] == arr[i+k])
                {
                        printf("duplicate elements\n");
                        flag = true;
                }
        }
        return flag;
}

int main()
{
        int arr[] = {1,4,3,1,2};
        int size = sizeof(arr)/sizeof(arr[0]);
        duplicate(arr, size, 2);
}
