
int main()
{
	char s1[MAX],s2[MAX];
	int i,j,max;
	while (scanf("%s%s",s1,s2)!=EOF)
	{
		max=0;i=1;
		while(s1[i]!='\0')
		{
			if(s1[max]<s1[i])max=i;
			i++;
		}
	i=0;
	while(i<=max)
	{
		putchar(s1[i]);
		i++;
	}
	j=0;
	while(s2[j]!='\0')
	{
		putchar(s2[j]);
		j++;
	}
	while(s1[i]!='\0')
	{
		putchar(s1[i]);
		i++;
	}
	printf("\n");
}
  return 0;
}

