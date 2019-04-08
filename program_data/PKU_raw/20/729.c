void print(int a,int b,char c[])
{int i;
for(i=a;i<=b;i++)
printf("%c",c[i]);
}
int arrange(char a[])
{
	int m=0,i,n;
	n=strlen(a);
	int t=a[0];
		for(i=0;i<n;i++)
		{
			if(a[i]>t)
			{
				m=i;
				t=a[i];
			}
		}
		return m;
}
void main()
{   char a[11],c[4];
	while(scanf("%s%s",a,c)!=EOF)
    {
		int l1=strlen(a),l2=strlen(c);
		int m;
		m=arrange(a);
		print(0,m,a);
		print(0,l2-1,c);
		print(m+1,l1-1,a);
		printf("\n");

	}
}