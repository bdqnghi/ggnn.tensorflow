void input(int m,int a[100])//?? 
{
     int i;
     for(i=0;i<m;i++)
     cin>>a[i];
}
void arrange(int m,int a[100])//?? 
{
     int i,j,c;
     for(i=1;i<m;i++)
       for(j=0;j<m-i;j++)
       {
         if(a[j]>a[j+1])
         {
           c=a[j];
           a[j]=a[j+1];
           a[j+1]=c;
         }
       }
}
void  puttogether(int a,int b,int m[2][100])//?? 
{
      int i;
      for(i=0;i<b;i++)
      m[0][a+i]=m[1][i];
}
void output(int a,int m[100])//?? 
{
     int i;
     cout<<m[0];
     for(i=1;i<a;i++)
     cout<<" "<<m[i];
}
int main()
{
    int a,b;
    cin>>a>>b;
    int number[2][100];
    input(a,number[0]);
    input(b,number[1]);
    arrange(a,number[0]);
    arrange(b,number[1]);
    puttogether(a,b,number);
    output(a+b,number[0]);
    cin>>a;
    return 0;
}
