int a,b,c[20]={0},d[20]={0},e[40]={0};
void in()
{
	int i;
	scanf("%d %d",&a,&b);
	for(i=0;i<a;i++) scanf("%d",&c[i]);
	for(i=0;i<b;i++) scanf("%d",&d[i]);
}
int number(int m[])
{
	int i,n=0;
	for(i=0;m[i]!=0;i++) n++;
	return n;
}
void change(int s[])
{
	int i,j,m;
	for(i=1;i<number(s);i++)
	{
		for(j=0;j<number(s)-1;j++)
		{
			if(s[j]>s[j+1])
			{
				m=s[j];
				s[j]=s[j+1];
				s[j+1]=m;
			}
		}
	}
}
void link(int m[],int n[])
{
	int i,j=0;
	for(i=0;m[i]!=0;i++)
	{
		e[i]=m[i];
		j++;
	}
	for(i=0;n[i]!=0;i++)
	{
		e[j]=n[i];
		j++;
	}
}
void out()
{
	int i;
	for(i=0;e[i]!=0;i++)
	{
		printf("%d",e[i]);
		if(e[i+1]!=0) printf(" ");
	}
}
int main()
{
	in();
	change(c);
	change(d);
	link(c,d);
	out();
}