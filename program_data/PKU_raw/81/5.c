int main()
{
   int n,m,a[5][5],(*p)[5],i,j,temp[5];
   p=a;
   for(i=0;i<5;i++)
   {
	   for(j=0;j<5;j++)
       {
		   cin>>*(*(p+i)+j);
	   }
   }
   cin>>n>>m;
   if(n>=5 || n<0 || m>=5 || m<0)
   {
      cout<<"error";
   }
   else 
   {
      for(j=0;j<5;j++)
		  temp[j]=*(*(p+n)+j);
	  for(j=0;j<5;j++)
		  *(*(p+n)+j)=*(*(p+m)+j);
	  for(j=0;j<5;j++)
		  *(*(p+m)+j)=temp[j];
   for(i=0;i<5;i++)
   {
          for(j=0;j<5;j++)
          {
             if(j==0)
             cout<<*(*(p+i)+j);
             else cout<<' '<<*(*(p+i)+j);
             if(j==4) cout<<endl;
          }

    }
 }
   return 0;
}