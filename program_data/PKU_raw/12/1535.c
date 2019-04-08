int main ()
{
	int a[20],i,j,k,m;
	for(i=0;i<20;i++) 
	a[i]=1;
    while(1)  
	{
		i=0;k=0;
		while(a[i]!=0)
		{
			i++;
			scanf("%d",&a[i]);
			if(a[1]==-1) return 0;
		} m=i;
		for(i=1;i<m;i++)
		{
			for(j=i+1;j<m;j++)
			{
				if((a[j]==2*a[i])||(a[i]==2*a[j]))
                         k++;
			}
		}
		printf("%d\n",k);
	}
}
