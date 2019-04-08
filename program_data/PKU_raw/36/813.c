int main()
{
	int i,d=0,j,x;
	char a[500];
	char b[500];
	scanf("%s %s",a,b);
	if(strlen(a)==strlen(b))
	{
		x=strlen(a);
		for(i=0;i<x;i++)
		{
			d=0;
			for(j=0;j<x;j++)
			{
				if(a[i]==b[j])
				{
					d=1;
					b[j]=2;
					break;
				}
			}
			if(d==0)
			{
				break;
			}
		}
		if(d==1)
		{
			for(i=0;i<x;i++)
			{
				if(b[i]!=2)
				{
					d=0;
					break;
				}
			}
		}
	}
	if(d==1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	
	return 0;
}

