int main()
{
	int a[101],i,j,k,l;
	char s[101],mark;
	gets(s);
	l=strlen(s);
	mark=s[0];
	for(i=0;i<=l-1;i++)
	{
		if(s[i]==mark)
			a[i]=1;
		else
			a[i]=0;
	}
	i=0;k=0;
	while(k<l/2)
	{
		if(a[i]==1)
		{
			j=i+1;
			while(a[j]==-1)
			{j++;}
			if(a[j]==0)
			{
				printf("%d %d\n",i,j);
				a[i]=-1;a[j]=-1;
				k++;
				i=0;
			}
			else 
				i++;
		}
		else
			i++;
	}
	return 0;
}