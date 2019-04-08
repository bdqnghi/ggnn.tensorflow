int pow(int m,int n)
{
   int pi=1,i;
   for(i=1;i<=n;i++)
   {
      pi=pi*m ;             
                    } 
    return pi;
    }
    
void Get(int sum,int b)
{
  int t;
  if (!sum)
    return;
  Get(sum/b,b);       
  t=sum%b;
  if (t<10)
    printf("%1d",t);
  else
    printf("%1c",t-10+'A');
}    
int main()             
{
    int a,b,k=0,sum=0,i,j=0;//a???????,b???????,k???????,sum????????
    char num[10000];//???????? 
    char other[10000];//???????? 
    int another[10000];
          cin>>a;
          cin>>num;
          cin>>b;
      k=strlen(num);
    for(i=0;i<=k-1;i++)//?????? 
         { if(num[i]>=65&&num[i]<=90)
          {
              sum=sum+(num[i]-55)*pow(a,(k-i-1));                  
              }                     
          else if(num[i]>=97&&num[i]<=122)
             {
               sum=sum+(num[i]-87)*pow(a,(k-i-1));                     
                                     }
           else if(num[i]>=48&&num[i]<=57)
              {
                sum=sum+(num[i]-48)*pow(a,(k-i-1));                     
                                     }
          }
        
   /**   do//???b?? 
      {
        another[j]=sum%b;               
        sum=sum/b;               
        if(another[j]>=0&&another[j]<=9)
           {other[j]=another[j]+48;}            
        else               
            {other[j]=another[j]+55;}
            j=j+1;          
             }while(sum>0);
        for(i=j;i>=0;i--)     
       {      
              cout<<other[i];//??
                             }*/
  if (sum){
  Get(sum,b);                           
  cout<<endl;}
  else
    cout<<"0"<<endl;
    return 0;
    }
