int main()
{
	int i,j,k,d,n,t;
	char a[600];
	scanf("%s",a);
	n=strlen(a);
	for (d=1;d<=n;d++)
	{
		for (i=0;i+d<=n-1;i++)
		{
			if (a[i]==a[i+d])
			{
                t=0;
				if (d%2==1)
				{
					for(k=0;k<=d/2;k++)
					{
						if (a[i+k]==a[i+d-k])
						{
							t=t+1;
						}
					}
					if (t==(d+1)/2)
					{
						for (k=i;k<=i+d;k++)
						{
							printf("%c",a[k]);
						}
						printf("\n");
					}
				}
				else
				{
					for(k=0;k<=d/2-1;k++)
					{
						if (a[i+k]==a[i+d-k])
						{
							t=t+1;
						}
					}
					if (t==d/2)
					{
						for (k=i;k<=i+d;k++)
						{
							printf("%c",a[k]);
						}
						printf("\n");
					}
				}
			}
			else
				continue;
		}
	}
	return 0;
}