
int main()
{
int a[16];
	int i,n,j,m,k;
	int flag;
	while (1)
	{
		m=0;j=0;flag=0;
		for (i=0;;i++)
		{
			scanf("%d",&a[i]);
			
			if (a[i]==0)
				break;
			else if (a[i]==-1)
			{
				flag=1;
				break;
			}
			
		}
		if (flag==1)
			break;
		for(j=0;j<i-1;j++)
			for(k=j+1;k<i;k++)
		{
				if ((a[k]==a[j]*2||a[j]==a[k]*2)&&(a[j]!=0&&a[k]!=0))
				m++;
		}
	printf("%d\n",m);
	}


	return 0;
}
