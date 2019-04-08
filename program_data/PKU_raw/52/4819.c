int main()
{
     int n,m,i,j;
     cin>>n>>m;
     int a[n];
     for (i=0;i<n;i++)
          cin>>a[i]; 
     int *p=a,*q=&a[n-m],*t=NULL;
     for (t=q;t<q+m;t++)
         cout<<*t<<' ';
     for (t=p;t<p+n-m-1;t++)
         cout<<*t<<' ';
     cout<<*t<<endl;
     return 0;
}