 int wuguan(int e)
  {
	 if(e%7==0)
	 {return 0;}
	  for(int t=e;t>0;t=t/10)
	  {int q;
		  q=t%10;
		  if(q==7)
		  {return 0;}
 }return 1;}
	
int main()
{ 
	int n,sum=0;
	scanf("%d",&n);
	for( int i=1;i<=n;i++)
	{
		if(wuguan(i))
		{  
			sum+=i*i;
		}
	}printf("%d",sum);
}
 
