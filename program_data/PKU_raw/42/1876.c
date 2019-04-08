/**
*@file 2.cpp
*@author ???
*@date 2013-10-30
*@description ????????
*/


int a[100001];
int main()
{
    int  n, i, j, k, count;
    cin >> n;
    for(i=0;i<=n-1;i++)
    scanf("%d ",&a[i]);
    cin >> k;
    count=0;
    for(i=0; i<=n-count-1; i++)
    {
        if(a[i]==k)
        {
            for(j=i; j<n-count-1; j++)
            a[j]=a[j+1];
            count++;
            i--;
        }
      
    }
    for(i=0; i<n-count-1; i++)
    printf("%d ",a[i]);
   printf("%d\n",a[n-count-1]);
    return 0;
}