int f(int a[40])                             //???????“??”?“2?” 
{   int i;
    int b[40]={0};
    for(i=1;i<=39;i++)
       {  b[i]=2*a[i];
          a[i]=b[i]%10+b[i-1];
          b[i]=b[i]/10;
       }
    return 0;
}
int main()
{   int a[40]={0};
    a[1]=1;
    int n;
    cin>>n;                        //?? 
    int i;
    for(i=1;i<=n;i++)                //??N?2? 
       {  f(a);
       }
    int t=0;
    for(i=39;i>=1;i--)                //?? 
       {   if(t==1)
              {  cout<<a[i];
                 continue;
              }
           if(a[i]!=0)  
              {   t=1;
                  cout<<a[i];
              }
       }
    return 0;
}