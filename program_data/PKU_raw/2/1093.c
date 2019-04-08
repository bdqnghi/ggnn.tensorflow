
struct book
{
	int number;
	char auther[27];
}bk[1000];

struct ath
{
	char a;
	int books[999];
	int sum;
}auth[27],temp;

void main()
{
	int n,i,x,m,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%s",&bk[i].number,bk[i].auther);
	for(i=0;i<27;i++)
	{
		for(j=0;j<999;j++)
			auth[i].books[j]=0;
		auth[i].sum=0;
		auth[i].a='A'+i;
	}
	for(i=0;i<n;i++)
	{
		m=strlen(bk[i].auther);
		int f;
		for(f=0;f<m;f++)
		{
			x=(int)(bk[i].auther[f]-'A');
			auth[x].books[auth[x].sum]=bk[i].number;
			auth[x].sum++;
		}
	}
	for(j=0;j<25;j++)
		for(i=0;i<25-j;i++)
			if(auth[i].sum>auth[i+1].sum)
			{temp=auth[i];auth[i]=auth[i+1];auth[i+1]=temp;}
	printf("%c\n",auth[25].a);
	printf("%d\n",auth[25].sum);
	i=0;
	while(auth[25].books[i]!=0)
	{printf("%d\n",auth[25].books[i]);i++;}
}
