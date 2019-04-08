int main()
{
int a[30];
int i,m,j,temp,n;
int k=0;
for (i=0;i<300;i++)
{
	scanf ("%d",&a[0]);
	if (a[0]==-1)
	{
		break;
	}
	else
	{
		for (j=1;j<30;j++)
		{
			scanf("%d",&a[j]);
			if (a[j]==0)
			{
				break;
			}
		}
		for (m=0;m<j;m++)
		{
			for (n=0;n<j-1;n++)
			{
				if (a[n]==2*a[n+1])
				{
					k++;
				}
				temp=a[n];
				a[n]=a[n+1];
				a[n+1]=temp;
			}
			
		}
		printf("%d\n",k);
		k=0;
		j=-1;
	}
}
return 0;
}