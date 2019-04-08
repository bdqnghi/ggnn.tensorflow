int bijiao(const void *x,const void *y)
{return *(int*)y-*(int*)x; 
}
int main()
{
	while(1)
	{   
		int n,i,j=0,k,temp=0,sum=0,tmax=0,tmin,qmax=0,qmin;
		scanf("%d",&n);
		if(n==0)
		return 0;
		else
		{  int a[1001]={0},b[1001]={0};
		   for(i=0;i<n;i++)
		   scanf("%d",&a[i]);
		   for(i=0;i<n;i++)
		   scanf("%d",&b[i]);
		   qsort(a,n,sizeof(a[0]),bijiao);
		   qsort(b,n,sizeof(b[0]),bijiao);
		   tmin=n-1;qmin=n-1;
		   for(i=0;i<n;i++)
		   {
			if(a[tmax]>b[qmax])
			{
				temp++;
				tmax++;
				qmax++;
			}
			else
			{
				if(a[tmax]<b[qmax])
				{
					temp--;
					tmin--;
					qmax++;
				}
				else
				{
					if(a[tmin]>b[qmin])
					{
						temp++;
						tmin--;
						qmin--;
					}
					else
					{
						if(a[tmin]<b[qmin])
						{
							temp--;tmin--;qmax++;
						}
						else
						{
							if(a[tmin]<b[qmax])
							{
								temp--;tmin--;qmax++;
							}
							else
							if(a[tmin]==b[qmax])
							break;
						}
					}
				}
			}
		   }	 
			printf("%d\n",temp*200);	
		} 
	}
} 