void change(char x[])
{
	int i,j,l;
	char c;
	l=strlen(x);
	for(i=0;i<l-1;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(x[i]>x[j]) { c=x[i]; x[i]=x[j]; x[j]=c; }
		}
	}
}
void main()
{
	int d;
	char a[101]={'\0'},b[101]={'\0'};
	scanf("%s%s",a,b);
	change(a);
	change(b);
	if((d=strcmp(a,b))==0) printf("YES");
	else printf("NO");
}