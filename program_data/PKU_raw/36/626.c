
void main()
{
	char a[2][100];
	int i,j,k;
	int l[2];
	int b=0;
	char temp;

	scanf("%s %s",a[0],a[1]);
	l[0]=strlen(a[0]);
	l[1]=strlen(a[1]);
	if (l[0]!=l[1])
		b=1;
	else
	{
		for(k=0;k<2;k++)
		{
			for (i=0;i<l[k]-1;i++)
			{
				for (j=0;j<l[k]-i;j++)
				{
					if (a[k][j]<a[k][j+1])
					{
						temp=a[k][j];
						a[k][j]=a[k][j+1];
						a[k][j+1]=temp;
					}
				}
			}
		}
		if (strcmp(a[0],a[1])==0)
			b=0;
		else
			b=1;
	}
	if (b==0)
		printf("YES");
	else
		printf("NO");
}
