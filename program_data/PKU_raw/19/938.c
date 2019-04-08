int main()
{
	char s[1000]={0};
	char a[100]={0},b[100]={0};
	gets(s);
	int c[1000]={0};
	scanf("%s%s",a,b);
	int i,j,k=0,h,d=0;
	int l=strlen(s);
	int p=strlen(a);
	for(i=0;i<l;i++)
	{   
		if((a[0]==s[i]&&s[i-1]==' ')||(a[0]==s[i]&&i==0))
		{
			c[d]=i;
			for(j=1;j<p;j++)
			{
				if(a[j]==s[i+j])
				{
					k=1;
				}
				else
				{
					k=0;
				}
			}
			if(k!=0)
			{
				d++;
			}	
		}
	
	}
	if(k==0)
	{
		printf("%s",s);
	}
	else
	{
		for(i=0;i<c[0];i++)
		{
			printf("%c",s[i]);
		}
		for(h=0;h<d;h++)
		{
			printf("%s",b);
			for(j=p+c[h];j<c[h+1];j++)
			{
				printf("%c",s[j]);
			}
		}
		for(j=c[d-1]+p;j<l;j++)
		{
			printf("%c",s[j]);
		}
	}
	return 0;
}
