int main()
{
	char str[999];
	char word[200][128]={"\0"};
	int a[200]={0};
	int i=0,j=0,k;
	int x;
	int MAX=0,MIN=0;
	gets(str);
	for(k=0;str[k]!='\0';k++)
	{
		if(str[k]==' '||str[k]==',')
		{
			i=i+1;
			j=0;
		}
		else
		{
			word[i][j]=str[k];
			j++;
		}
	}
	x=i;
	for(i=0;i<x+1;i++)
	{
		for(j=0;word[i][j]!='\0';j++)
			a[i]=a[i]+1;
	}
	for(i=0;i<x;i++)
	{
		if(a[MAX]<a[i+1])
			MAX=i+1;
	}
	for(i=0;a[i]==0;i++)
		MIN=i+1;
	for(i=0;i<x;i++)
		if(a[i+1]!=0)
		{
			if(a[MIN]>a[i+1])
				MIN=i+1;
		}
	puts(word[MAX]);
	printf("\n");
	puts(word[MIN]);
	return 0;
}