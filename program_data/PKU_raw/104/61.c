int main()
{
	int x,y,i,j;
	int a[100]={0},b[100]={0};
	scanf("%d%d",&x,&y);
	a[0]=x;
	b[0]=y;
	for(i=1;;i++)
	{
		if (a[i-1]==1) break;
		a[i]=a[i-1]/2;
	}
	for(i=1;;i++)
	{
		if (b[i-1]==1) break;
		b[i]=b[i-1]/2;
	}
	for(i=0;;i++)
	{
		for(j=0;j<100;j++)
		{
			if (a[i]==b[j])
			{
				printf("%d\n",a[i]);
				goto end;
			}
		}
	}
end:
	return 0;
}

