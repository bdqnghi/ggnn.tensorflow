void shuru(int a[],int m)
{int i;
 for(i=0;i<m;i++)
  cin>>a[i];
}
void paixu(int b[],int m)
{int i,j,t;
 for(i=0;i<m-1;i++)
   {for(j=0;j<m-i-1;j++)
     {if(b[j]>b[j+1])
       {t=b[j];
        b[j]=b[j+1];
        b[j+1]=t;}}}}
void hebing(int a[],int b[],int m,int n)
 { int i;
   for(i=0;i<m;i++)
    cout<<a[i]<<" ";
   for(i=0;i<n-1;i++)
    cout<<b[i]<<" ";
   cout<<b[n-1];
   }
int main()
{int m,n;
 cin>>m>>n;
 int a[m],b[n];
 shuru(a,m);
 shuru(b,n);
 paixu(a,m);
 paixu(b,n);
 hebing(a,b,m,n);
 return 0;
}
