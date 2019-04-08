int main ()
{
	char a[100]={'\0'};
	char b[100]={'\0'};
	int i,j,m,n,h;
	scanf("%s%s",&a,&b);
	m=strlen(a);
	n=strlen(b);
	h=0;
	if(m!=n)
	{
		printf("NO");
	}else{
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				h++;
				a[i]=0;
				b[j]=0;
				break;
			}
		}
	}
	if(h==m)
	{
		printf("YES");
	}else
	{
		printf("NO");
	}}
	return 0;

}
