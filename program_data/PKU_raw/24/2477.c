int main()
{
	char s[5000];
	gets(s);
	int a[201],m=1,i,s1=0,s2=0,j,max,min;
	for(i=0;i<201;i++)
		a[i]=0;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]==' '||s[i]==',')
			m++;
	}//m shi dan ci shu
	i=0;
	for(j=0;j<strlen(s);j++)
	{
		if(s[j]!=' '&&s[j]!=',')
			a[i]++;
		else
			i++;
	}
	max=0;
	min=0;
	for(i=0;i<m;i++)
	{
		if(a[i]>a[max])
			max=i;
		if(a[i]<a[min]&&a[i]!=0)
			min=i;
	}
	for(i=0;i<max;i++)
		s1=s1+a[i];
	s1=s1+max;
	for(i=s1;i<s1+a[max];i++)
		printf("%c",s[i]);
	printf("\n");
	for(i=0;i<min;i++)
		s2=s2+a[i];
	s2=s2+min;
	for(i=s2;i<s2+a[min];i++)
		printf("%c",s[i]);
	return 0;
}