int main()
{
	struct ngram{
		char ngstr[5];
		int ifx;
	};/*??ngram ngstr?n????  ifx??????????????0?????1?ngram???????????*/
	int n;
	scanf("%d",&n);
	/*?????*/
	char str[505];
	scanf("%s",str);
	int i,j;
	struct ngram a[505];
	memset(a,0,sizeof(ngram)*505);
	int len=strlen(str);
	/*ngram??*/
	for(i=1;i<=len-n+1;i++)
	{
		for(j=1;j<=n;j++)
		{
			a[i-1].ngstr[j-1]=str[i+j-2];
		}
		a[i-1].ifx=1;
		a[i-1].ngstr[j]=0;
	}
	/*ngram??????????????ifx++*/
	for(i=1;i<=len-n+1;i++)
	{
		if(a[i-1].ifx==0)
		{
			continue;
		}
		else
		{
			for(j=i+1;j<=len-n+1;j++)
			{
				if(strcmp(a[i-1].ngstr,a[j-1].ngstr)==0)
				{
					a[i-1].ifx++;
					a[j-1].ifx=0;
				}
				else
				{}
			}
		}
	}
	/*To find the Max of "ifx"*/
	int max;
	max=a[0].ifx;
	for(i=1;i<=len-n+1;i++)
	{
		if(a[i-1].ifx==0)
		{
			continue;
		}
		else
		{
			if(a[i-1].ifx>max)
			{
				max=a[i-1].ifx;
			}
			else
			{}
		}
	}
	/*print*/
	if(max==1)
	{
		printf("NO");
	}
	else
	{
		printf("%d\n",max);
		for(i=1;i<=len-n+1;i++)
		{
			if(a[i-1].ifx==max)
			{
				printf("%s\n",a[i-1].ngstr);
			}
		}
	}
	return 0;
}