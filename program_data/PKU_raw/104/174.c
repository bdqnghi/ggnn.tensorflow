
void main()
{
	int a[1000]={0},b[1000]={0};
	int i,j,k,l;
	int x,y,flag=0;

	scanf("%d%d",&x,&y);
	a[0]=x;
	b[0]=y;
	for(i=1;x!=1;i++)
	{
		if(x%2==0)
		{
			a[i]=x/2;
			x=a[i];
		}
		else
		{
			a[i]=(x-1)/2;
			x=a[i];
		}
	}
	for(j=1;y!=1;j++)
	{
		if(y%2==0)
		{
			b[j]=y/2;
			y=b[j];
		}
		else
		{
			b[j]=(y-1)/2;
			y=b[j];
		}
	}
	for(l=0;l<=i;l++)
	{
		for(k=0;k<=j;k++)
		{
			if(b[k]==a[l])
			{
				printf("%d",a[l]);
				flag=1;
				break;
			}
		}
		if(flag) break;
	}
}