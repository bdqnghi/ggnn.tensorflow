int main()
{   int n;
    cin>>n;
    char a[1000][50]={0};
    int i;
    int j;
    char b;
    cin.get(b);
    int num[1000]={0};
    for(i=1;i<n;i++)
       {     j=1;
             while(1)
           { 
             cin.get(b);
             if(b==' ')   
                {    *(num+i)=j-1;
                    break;
                }
             else
               {   *(*(a+i)+j)=b;
                   j=j+1;
               }
           }
       }
    j=1;
     while(1)
           { 
             cin.get(b);
             if(b=='\n')   
                {    *(num+i)=j-1;
                    break;
                }
             else
               {   *(*(a+i)+j)=b;
                   j=j+1;
               }
           }
    int sum=0;
    
    for(i=1;i<=n;i++)
      {    if(sum==0)
             {for(j=1;j<=*(num+i);j++)
                {  cout<<*(*(a+i)+j);
                   
                }
              sum=sum+*(num+i);
             }
           else if(sum+*(num+i)+1<=80)
             { cout<<' ';
               for(j=1;j<=*(num+i);j++)
                {  cout<<*(*(a+i)+j);
                    
                }
                sum=sum+*(num+i)+1;
             } 
           else if(sum+*(num+i)+1>80)
              {  cout<<endl;
                 i=i-1;
                 sum=0;
              }
      }
    return 0;
}