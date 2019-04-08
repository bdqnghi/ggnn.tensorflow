int erchashu(int x,int y)
{
	int i,j,a[10],b[10],c,d,shu=0;
	a[0]=x;
	b[0]=y;
	if(x==1)
		shu=1;
	else if(y==1)
		shu=1;
	else{
	for(i=1;i<10;i++)
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
		if(x==1)
		{
			c=i;
			break;
		}
	}
	for(i=1;i<10;i++)
	{
		if(y%2==0)
		{
			b[i]=y/2;
			y=b[i];
		}
		else
		{
			b[i]=(y-1)/2;
			y=b[i];
		}
		if(y==1)
		{
			d=i;
			break;
		}
	}
	for(i=0;i<=c;i++)
	{
		for(j=0;j<=d;j++)
		{
			if(a[i]==b[j])
			{
				shu=a[i];
				break;
			}
			else if(a[i]>b[j])
			{
				break;
			}
			else
			{
				continue;
			}
		}
		if(shu==0)
			continue;
		else
			break;
	}
	}
	return shu;
}
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	printf("%d\n",erchashu(x,y));
}