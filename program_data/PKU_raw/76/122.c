int main()
{


	int n,i;
	double k;
   int a[500];
   int b[500];
   int s,e;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
	   scanf("%d",&a[i]);
	   scanf("%d",&b[i]);
   }
   s=a[0];
   e=b[0];
    for(i=0;i<n;i++)
   {
	   if(a[i]<s)
	   {
	       s=a[i];
	   }
	   else if(b[i]>e)
	   {
		   e=b[i];
	   }
   }
	for(k=s;k<=e;k+=0.5)
	{
		for(i=0;i<n;i++)
		{
			if(k>=a[i]&&b[i]>=k)
			{
				
				break;
			}
			else if(i==n-1)
			{
				printf("no");
				return 0;
			}

		}
		if(k==e){printf("%d %d",s,e);}
	}
	
	
	return 0;

}