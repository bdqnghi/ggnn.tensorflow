int main()
{
   char a[110];
   char b[110];
   cin>>a;
   int k=strlen(a);
   if(k==1)
	   cout<<0<<endl<<a<<endl;
   else
   {
	   for(int i=0;i<k;i++)
	   a[i]=a[i]-48;
   int sum=0;
   sum=10*a[0]+a[1];
   b[0]=sum/13+48;
   sum=sum%13;
   a[0]=sum/10;
   a[1]=sum-10*a[0];
   for(int i=0;i<k-2;i++)
   {
   sum=100*a[i]+10*a[i+1]+a[i+2];
   b[i+1]=sum/13+48;
   sum=sum%13;
   a[i+1]=sum/10;
   a[i+2]=sum-10*a[i+1];
   }
   if(b[0]==48)
	  { 
		  if(k==2)
			  cout<<'0';
		  else  for(int i=1;i<k-1;i++)
		   cout<<b[i];
   }
   else
	  {
		  for(int i=0;i<k-1;i++)
		   cout<<b[i];
   }
   cout<<endl;
   cout<<a[k-1]+10*a[k-2]<<endl;
   }
   return 0;
}