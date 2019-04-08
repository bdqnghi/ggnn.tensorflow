int main()
{
int i,j,i0,j0,k,l=0,max,flag;
int a[6][6];
for(i=1;i<=5;i++)
  for(j=1;j<=5;j++)
    cin>>a[i][j];
    

for(i=1;i<=5;i++)
   {max=0;
   for(j=1;j<=5;j++)
      {
       flag=0;
       if(a[i][j]>max)
         {max=a[i][j];
         i0=i;j0=j;}                                                             //???????????????? 
       if(j==5)
	     {for(k=1;k<=5;k++)                                                       //???????????????? 
		     if(a[k][j0]<max)
		        {flag=1;                                                         
		        break;                                                             //?????????????? 
				}
		  
         if(flag==0)
		   {cout<<i0<<" "<<j0<<" "<<a[i0][j0]<<endl;
		   l=8;
		   break;                                                                  //????????????????????? 
		   } 
		   }
     }
	 if(flag==0)
	    break;
	 }
     
if(l==0)
   cout<<"not found"<<endl;                                                           //??????????not found 
return 0;
}