int main()
{
	int n,i,j,k,x,y,z,a;
	scanf("%d",&n);
	x=n/2;
	for (i=6;i<=n;i+=2)
	{
		for (j=3;j<=x;j++)
		{
			if (j%2==0)
				goto me;
			if (j>2&&j%2!=0)
			{
				y=sqrt(j);
					for (k=3;k<=y;k+=2)
						if (j%k==0)
							goto me;
			}
			a=i-j;
			z=sqrt(a);
			if (a%2==0)
				goto me;
			else
			{
				for (k=3;k<=z;k+=2)
					if (a%k==0)
						goto me;
			}
			printf("%d=%d+%d\n",i,j,a);
			break;
		me:;
		}
	}
return 0;
}

