int main()
{
	int n,i,j=0;
	char a[1000];
	struct comp
	{
		char letter;
		int num;
	}com[1000];
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		com[i].num=0;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>=97&&a[i]<=122)
			a[i]=a[i]-32;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==com[j].letter)
		{
			com[j].num++;
		}
		else
		{
			j++;
			com[j].letter=a[i];
			com[j].num++;
		}
	}
	for(i=1;i<=j;i++)
	{
		printf("(%c,%d)",com[i].letter,com[i].num);
	}
	return 0;
}