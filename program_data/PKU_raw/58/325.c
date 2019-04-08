
//********************
int n=0,i=1,leg=1,len=0,flag=0;
char a[81]={0};
int b[81]={0};
//********************
int main()
{
    cin>>n;
    cin.get();
    while(i<=n)
    {
               cin.getline(a,81);
               
                   for(int m=0;a[m]!='\0';m++)
                    {
                       len++;
                       b[m]=a[m];
                    }
                    
                    
               
                    leg=1;
                    if(b[0]>=65&&b[0]<=90
                      ||b[0]>=97 && b[0]<=122
                      ||b[0]==95)
                    {
                        
                        for(int j=1;j<len;j++)
                        {
                        if(b[j]>=65 && b[j]<=90
                         ||b[j]>=97 && b[j]<=122
                         ||b[j]==95
                         ||b[j]>=48 && b[j]<=57)
                          {
                              flag=1;
                          }
                         else
                              flag=0;
                              
                         leg=leg*flag;
                         }
                    }
                    else 
                     leg=0;
   
               cout<<leg<<endl;
               for(int m1=0;m1<81;m1++)
               {
                  a[81]=0;
                  b[81]=0;}
               
                i++;
                len=0;
                leg=1;
                }
    
       return 0;
              
               
}
