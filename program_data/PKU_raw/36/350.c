void main()
{
	void sort(char s[]);
	char a[20]={0},b[20]={0};
	int i,k=0;
	scanf("%s %s",a,b);
	sort(a);
	sort(b);
	for(i=0;i<20;i++)
	{
		if(a[i]!=b[i])k++;
	}
	if(k==0)printf("YES");
	else printf("NO");
}

void sort(char s[])
{
	int i,j;
	char t;
	for(i=1;s[i]!='\0';i++)
	for(j=1;s[j]!='\0';j++)
	{
		if(s[j-1]>s[j])
		{
			t=s[j-1];
			s[j-1]=s[j];
			s[j]=t;
		}
	}
}