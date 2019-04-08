int main()
{
	char a[301];
	gets(a);
	int n;
	n=strlen(a);
	int i, j;
	char temp;
	int num=0;
	int sign=0;
	for(j=0;j<n;j++)
	{
		for(i=1;i<n-j;i++)
		{
			if(a[i-1]>a[i])
			{
				temp=a[i];
				a[i]=a[i-1];
				a[i-1]=temp;
			}
		}
	}

	for(i=0;i<n;i++)
	{
		if(((a[i]>='A')&&(a[i]<='Z'))||((a[i]>='a')&&(a[i]<='z')))
		{
			sign=1;
		    num=1;
			for(j=i+1;j<n;j++)
			{
				if(a[j]==a[i])
				{
					num++;
					a[j]=-1;
				}
			}
			printf("%c=%d\n", a[i], num);
		}
	}
    if(sign==0)
	{
	    printf("No\n");
	}
	return 0;
}