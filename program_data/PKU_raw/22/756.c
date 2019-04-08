int main()
{
	int k,y=0,t,i,j,x[300],z=0;
	char c;
	for(i=0;i<300;i++)
	{
		scanf("%d",&x[i]);
		c=getchar();
		if(c=='\n') break;
	}
	if(i==0) printf("No");
	else{
			for(j=0;j<i;j++)
			{
				if(x[j]==x[j+1])
					z++;
			}
			if(z==i)
				printf("No");
			else{
	for(j=1;j<=i;j++)
	{
		for(k=0;k<=i-j;k++)
		{
			if(x[k]<x[k+1])
			{
				t=x[k];
				x[k]=x[k+1];
				x[k+1]=t;
			}
		}
	}
	for(j=0;j<=i;j++)
	{
		if(x[j]>x[j+1])
		{printf("%d",x[j+1]);
		y=1;break;}
	}
	if(y==0)
	{
		printf("No");
	}
	}
	}
}
