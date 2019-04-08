int main()
{
	void sort(int[],int[],int);
	char str[1000],f,s,stack[1000];
	int sum=0,j,i,l=0,tot=-1,boy[500],girl[500],pair=-1,num[1000];
	gets(str);
	l=strlen(str);
	for (i=0;i<l;i++)
	{
		if (i==0) 
		{
			f=str[sum++];
			stack[++tot]=f;
			num[tot]=i;
			continue;
		}
		if (sum<2 && str[i]!=f) 
		{
			sum++;
			s=str[i];
printf("%c %c\n",f,s);
		}
		stack[++tot]=str[i];
		num[tot]=i;
for (j=0;j<tot+1;j++) printf("%c",stack[j]);
printf("%d\n",tot);
		while (tot>0 && sum>1 && stack[tot]==s && f==stack[tot-1])
		{ 
			girl[++pair]=num[tot--];
			boy[pair]=num[tot--];
printf("%d %d\n",boy[pair],girl[pair]);
		}
	}
	sort(boy,girl,pair);
	for (i=0;i<pair;i++)
		printf("%d %d\n",boy[i],girl[i]);
	printf("%d %d",boy[pair],girl[pair]);
	return 0;
}

void sort(int a[],int b[],int c)
{
	void swap(int,int);
	int i,j,k;
	for (i=0;i<c;i++)
	{
		k=i;
		for (j=i+1;j<c+1;j++)
			if (b[j]<b[k]) k=j;
		swap(a[i],a[k]);
		swap(b[i],b[k]);
	}
}

void swap(int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;
}