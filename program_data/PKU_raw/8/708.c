void input(int *n1,int data1[],int *n2,int data2[])
{
     cin>>*n1>>*n2;
     for (int i=0;i<*n1;++i)
         cin>>data1[i];
     for (int i=0;i<*n2;++i)
         cin>>data2[i];
     return;
     }
void bubblesort(int n,int data[])
{
     for (int i=n-1;i>0;--i)
         for (int j=0;j<i;++j)
             if (data[j]>data[j+1])
             {
                int temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;                      
                }
     return;
     }
int combine(int n1,int data1[],int n2,int data2[],int data3[])
{
     for (int i=0;i<n1;++i)
         data3[i]=data1[i];
     for (int i=n1;i<n1+n2;++i)
         data3[i]=data2[i-n1];
     return n1+n2;
     }
void print(int n,int data[])
{
     cout<<data[0];
     for (int i=1;i<n;++i)
         cout<<' '<<data[i];
     cout<<endl;
     return;
     }
int main()
{
    int n1,n2,a1[101],a2[101],a3[201];
    input(&n1,a1,&n2,a2);
    bubblesort(n1,a1);
    bubblesort(n2,a2);
//    print(n1,a1);
//    print(n2,a2);
    int n3=combine(n1,a1,n2,a2,a3);
    print(n3,a3);
    return 0;
    }
