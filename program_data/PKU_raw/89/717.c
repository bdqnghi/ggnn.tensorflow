int main()
{
	int n,a[10000][2],i,j,t=0,s,k=0;
	scanf("%d",&n);
    for(i=0;;i++)
	{
	     scanf("%d %d",&a[i][0],&a[i][1]);
		 t++;
		 if((a[i][0]==0)&&(a[i][1]==0))
		 {
			 break;
		 }
	}
	for(i=0;i<n;i++)
	{
		s=0;
		for(j=0;j<t-1;j++)
		{
			if(a[j][0]!=i)
			{
			   if(a[j][1]==i)
				  s++;
			}
			else
				break;
		}
		if(s==n-1)
		{
			k++;
			printf("%d\n",i);
		}
	}
	if(k==0)
	{
		printf("NOT FOUND");
	}
    return 0;
}
