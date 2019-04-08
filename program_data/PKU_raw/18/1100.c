int main()
{
int n,i,j,k,min,sum,m;
cin>>n;
int a[101][101]={0};
m=n;
while(m)
{  m--;
   for(i=1;i<=n;i++)
      for(j=1;j<=n;j++)
         cin>>a[i][j];                                                           //???? 
   sum=0;
for(k=n;k>1;k--)
   {
   
   for(i=1;i<=k;i++)
      {
	  min=98000; 				
      for(j=1;j<=k;j++)
         if(a[i][j]<min)
            min=a[i][j];
      for(j=1;j<=k;j++)
          a[i][j]=a[i][j]-min;
      }
   for(i=1;i<=k;i++)
       {
       min=98098;
	   for(j=1;j<=k;j++)
	         if(a[j][i]<min)
			    min=a[j][i];
		for(j=1;j<=k;j++)
		    a[j][i]=a[j][i]-min;                                            //???????? 
	   }
  sum=sum+a[2][2];                                                             //??sum 
   if(k>=3)
      {for(i=3;i<=k;i++)
         for(j=1;j<=k;j++)
            a[i-1][j]=a[i][j];
      for(i=3;i<=k;i++)
         for(j=1;j<=k;j++)
            a[j][i-1]=a[j][i];                                             //???????? 
      }
   }
cout<<sum<<endl;                                                           //??sum 
}
return 0;
}