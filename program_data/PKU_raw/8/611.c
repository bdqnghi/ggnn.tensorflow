
void input(int,int,int*,int*);//???? 
void paixu(int *,int);//????? 
void output(int,int,int*,int*);//????
 
int main()
{
    int num1,num2,shu1[10000],shu2[10000];
    cin>>num1>>num2;//?????? 
    input(num1,num2,shu1,shu2);//???? 
    paixu(shu1,num1);//???1?? 
    paixu(shu2,num2);//???2?? 
    output(num1,num2,shu1,shu2);//???? 
    cin.get();cin.get();cin.get();cin.get();
    return 0;
}
void input(int m,int n,int shu1[],int shu2[])//???? 
{
     int i;
     for(i=0;i<m;i++) cin>>shu1[i];
     for(i=0;i<n;i++) cin>>shu2[i];
}
void paixu(int shu[],int m)
{
     int i,j,temp;
     for(i=0;i<m-1;i++)//???? 
     {
                          for(j=0;j<m-i-1;j++)
                          {
                                            if (shu[j]>shu[j+1])
                                            {
                                                                temp=shu[j+1];
                                                                shu[j+1]=shu[j];
                                                                shu[j]=temp;
                                            }
                          }
     }
}
void output(int m,int n,int a[],int b[])
{
     int i;
     for(i=0;i<m;i++) cout<<a[i]<<" ";
     for(i=0;i<n-1;i++) cout<<b[i]<<" ";
     cout<<b[n-1];
}
