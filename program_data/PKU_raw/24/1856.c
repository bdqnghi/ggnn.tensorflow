char s[10000];
int main()
{
	gets(s);
	int l[200]={0},r[200];
	int i=0,j=0;
	while(s[i]!='\0')
	{
		if(s[i]!=' ')
			l[j]++;
		else
		{
			r[j]=i;
			j++;
		}
		i++;
	}
	r[j]=i;
	int t1=l[0],t2=l[0];
	int a1=r[0],a2=r[0],b1=0,b2=0;
	for(i=0;l[i]!=0;i++)
	{
		if(t1<l[i])
		{
			t1=l[i];
			a1=r[i];
			b1=i;
		}
		if(t2>l[i])
		{
			t2=l[i];
			a2=r[i];
			b2=i;
		}
	}
	for(i=a1-l[b1];i<r[b1];i++)
	{
		printf("%c",s[i]);
	}
	printf("\n");
	for(i=a2-l[b2];i<r[b2];i++)
	{
		printf("%c",s[i]);
	}
	return 0;
}


