void f1(int a[],int b[],int m,int n)
{
int i;
for(i=0;i<m;i++)
cin>>a[i];
for(i=0;i<n;i++)
cin>>b[i];     
     }
void f2(int a[],int b[],int m,int n)
{
int i,j;
int t;
     for(i=0;i<m;i++)
     {for(j=0;j<m-1;j++)
     {if(a[j+1]<a[j])
      {t=a[j];
      a[j]=a[j+1];
      a[j+1]=t;
      } 
       }
     }
     for(i=0;i<n;i++)
     {for(j=0;j<n-1;j++)
     {if(b[j+1]<b[j])
      {t=b[j];
      b[j]=b[j+1];
      b[j+1]=t;
      } 
       }
     }
     }
void f3(int a[],int b[],int m,int n)
{int i,j;
for(i=0;i<n;i++)
{a[m+i]=b[i];}
     }
void f4(int a[],int m,int n)
{int i;
     for(i=0;i<m+n-1;i++)
{cout<<a[i]<<" ";}
cout<<a[m+n-1];
     
     }
int main()
{int m,n;
cin>>m>>n;     
int a[1000];
int b[1000];

f1(a,b,m,n);
f2(a,b,m,n);
f3(a,b,m,n);
f4(a,m,n);
return 0;

    
    
    }
