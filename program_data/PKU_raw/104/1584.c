int main()
{
	int x,y;
	int a[20],b[20],i=0,j=0;
	int k,m,flag=0;
	scanf("%d %d",&x,&y);
	while(x)
	{
		a[i]=x;
		i++;
		x=x/2;
	}
	while(y)
	{
		b[j]=y;
		j++;
		y=y/2;
	}
	for(k=0;k<i;k++)
	{
		for(m=0;m<j;m++)
		{
			if(a[k]==b[m])
			{
				printf("%d",a[k]);
				flag=1;
				break;
			}
		}
		if(flag==1)
			break;
	}
	
}