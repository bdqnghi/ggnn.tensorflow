int main()
{  int num[5][5];
   int i,j;
   for(j=0;j<5;j++)                                         //???? 
      for(i=0;i<5;i++)
         {  cin>>num[j][i];
         }
   int maxhang;
   int minlie;
   int m;
   int k;
   int l=0;
    for(j=0;j<5;j++)                                        //?????? 
      for(i=0;i<5;i++)
         { k=0;
           maxhang=num[j][i];                                  
           for(m=0;m<5;m++)
             {  if(num[j][m]>maxhang)   k=k+1;             //????? 
             }
           minlie=num[j][i];
           for(m=0;m<5;m++)
              {  if(num[m][i]<minlie)   k=k+1;             //????? 
              }
           if(k==0)  
             {cout<<j+1<<' '<<i+1<<' '<<num[j][i];
              l=l+1;
             }                                                //??????? 
         }
   if(l==0)  cout<<"not found";
   return 0;
} 