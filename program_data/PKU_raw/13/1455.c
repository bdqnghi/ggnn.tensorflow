int main()
{
	int n,i,j,cal=0,enter=1,num=0;
	int a[100001]={0},b[100001]={0};
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=num;j++)
		{
			if (a[i]==b[j])
			{
				goto next;
				break;
			}
		}
		if (enter==1)
		{
			printf ("%d",a[i]);
			enter=0;
		}
		else
			printf (" %d",a[i]);
		num++;
		b[num]=a[i];
next:
		b[0]=0;
	}
	return 0;
}