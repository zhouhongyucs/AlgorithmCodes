//Source Code from [深基9.例1]


#include <bits/stdc++.h>
using namespace std;
const int N=2000005;
int n,t;
int m[N];
void quickSort(int m[],int l,int r)
{
    if (l>=r) return;
    int i=l-1,j=r+1,x=m[l+r>>1];
    while (i<j)
    {
        do i++; while (m[i]<x);
        do j--; while (m[j]>x);
        if (i<j) swap(m[i],m[j]);
    }
    quickSort(m,l,j);
    quickSort(m,j+1,r);
}

int main() {
    scanf("%d %d",&n,&t);
    for (int i=0;i<t;i++) scanf("%d",&m[i]);
    quickSort(m,0,t-1);
    for (int i=0;i<t;i++) printf("%d ",m[i]);
    return 0;
}
