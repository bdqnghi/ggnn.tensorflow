
void main()
{
	int x,y;
	int a[2000]={0};
	int b[2000]={0};
	int i,j,k;
	int p;
	int l=0;
	a[0]=1;
	b[0]=1;

/*	for(p=0;p<1000;p++)
	{
		a[p]=1;
		b[p]=1;
	}
*/

	scanf("%d%d",&x,&y);


	for(i=0;x!=0;i++)
	{
		a[i]=x;
		x=x/2;
	}
	for(j=0;y!=0;j++)
	{
		b[j]=y;
		y=y/2;
	}

	for(k=0;k<=i&&k<=j;k++)
	{
		if(a[i-k]==b[j-k])
			continue;
		else
		{
			printf("%d",a[i-k+1]);
			l=1;
			break;
		}
	}
	if(l==0)
		printf("%d",a[i-k+1]);
}