
void main()
{
	int i,j,x,y,a[500]={0},b[500]={0};
	scanf("%d %d",&x,&y);
	a[0]=x;b[0]=y;
	for(i=1;a[i-1]>1;i++)
	{
		if(a[i-1]%2==0)
		{
			a[i]=a[i-1]/2;
		}
		else
			a[i]=(a[i-1]-1)/2;
	}
	for(j=1;b[j-1]>1;j++)
	{
		if(b[j-1]%2==0)
		{
			b[j]=b[j-1]/2;
		}
		else
			b[j]=(b[j-1]-1)/2;
	}
	for(i=0;a[i];i++)
	{
		for(j=0;b[j];j++)
			if(a[i]==b[j])
			{
				printf("%d",a[i]);
				break;
			}
		if(a[i]==b[j])
			break;
	}	
}