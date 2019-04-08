int n,out[50]={0},mark=0;
int count(int a)
{
	int i;
   if(a==n)
   {
	   for(i=49;i>=0;i--)
	   {
		
		   if(out[i]!=0)
		   {
			   mark=1;
		   }
		   if(mark==1)
			   cout<<out[i];
	   }
	   return 0;
   }
   else
   {
	   for(i=0;i<50;i++)
	   {
		   out[i]=out[i]*2;
		  
	   }
	   for(i=0;i<50;i++)
	   {
       	if(out[i]>=10)
		{
			  out[i+1]+=out[i]/10;
		      out[i]=out[i]%10;
		 }
	   }
	   count(a+1);
   }
   return 0;
}
	   

int main()
{
	cin>>n;
	out[0]=1;
	count(0);
		return 0;
}