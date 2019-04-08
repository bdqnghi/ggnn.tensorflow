int a[1000],b[1000],n1,n2;
void get(int a[],int b[])
{
     int i;
     cin>>n1>>n2;
     for (i=0;i<n1;i++) cin>>a[i];
     for (i=0;i<n2;i++) cin>>b[i];
}
void sort(int a[],int b[])
{
     int i,j,temp;
     for (i=0;i<n1;i++)
     {
         for (j=i;j<n1;j++)
         {
             if (a[i]>a[j])
             {
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
             }
         }
     }
     for (i=0;i<n2;i++)
     {
         for (j=i;j<n2;j++)
         {
             if (b[i]>b[j])
             {
                 temp=b[i];
                 b[i]=b[j];
                 b[j]=temp;
             }
         }
     }
}
void combine(int a[],int b[])
{
     int i;
     for (i=0;i<n2;i++) a[i+n1]=b[i];
}
void print(int a[],int b[])
{
     int i;
     for (i=0;i<n1+n2-1;i++) cout<<a[i]<<" ";
     cout<<a[n1+n2-1];
}
int main()
{
    get(a,b);
    sort(a,b);
    combine(a,b);
    print(a,b);
    return 0;
}
