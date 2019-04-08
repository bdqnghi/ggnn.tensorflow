
struct node{
	char s[100010];
	int sign[100010];
}x;

void main()
{
	int t,i,j,k,a[100010]={0},l;
	char s0[2];
 	scanf("%d",&t);
	gets(s0);
	for(j=0;j<t;j++)
	{
		for(i=0;i<100010;i++) x.sign[i]=1;
		gets(x.s);
		l=strlen(x.s);
		for(i=0;i<l-1;i++)
		{
			a[i]=1;
			if(i==l-2) a[i+1]=1;
			for(k=i+1;k<l;k++)
			{
				if(x.s[k]==x.s[i]&&x.sign[i]!=0) {a[i]++;x.sign[k]=0;}
			}
		}
		for(i=0;i<l;i++)
		{
			if(a[i]==1&&x.sign[i]!=0) {printf("%c\n",x.s[i]);break;}
		}
		if(i==l) printf("no\n");
	}
}
