int number(char a[])
{
	int i,m=0;
	for(i=0;a[i]!=0;i++) m++;
	return m;
}
void change(char a[],int m,char b[])
{
	int i,j=0;
	char c[13];
	for(i=m+1;a[i]!=0;i++)
	{
		c[j]=a[i];
		j++;
		a[i]=0;
	}
	strcat(a,b);
	strcat(a,c);
	printf("%s\n",a);
}
void in(char a[],char b[])
{
	int i,j,m;
	for(i=0;a[i]!=0;i++)
	{
		m=0;
		for(j=0;a[j]!=0;j++) if(a[i]>=a[j]) m++;
		if(m==number(a))
	    {
			change(a,i,b);
			break;
		}
	}
}
void remove(char a[])
{
	int i;
	for(i=0;a[i]!=0;i++) a[i]=0;
}
int main()
{
	char str[15]={0},substr[4]={0};
	while(scanf("%s%s",str,substr)!=EOF)
	{
		in(str,substr);
		remove(str);
		remove(substr);
	}
}