/*
time complexity = O(nlogn),
space complexity = O(n)
*/

#include<iostream>
using namespace std;

void merge(int *a,int l,int mid,int h)
{
    int i,j,k;

    int n1,n2;
    n1=mid-l+1;
    n2=h-mid;
    int left[n1],right[n2];

    for(i=0;i<n1;i++)
    left[i]=a[i+l];

    for(i=0;i<n2;i++)
    right[i]=a[i+mid+1];


    i=0;
    j=0;
    k=l;

    while (i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            a[k]=left[i];
            i++;
            k++;
        }
        else
        {
            a[k]=right[j];
            j++;
            k++;
        }
    }
    for(i;i<n1;i++,k++)
    a[k]=left[i];

    for(j;j<n2;j++,k++)
    a[k]=right[j];
    
}
