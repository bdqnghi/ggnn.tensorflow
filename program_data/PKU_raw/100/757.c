int main()
{
	char zimu[]="abcdefghijklmnopqrstuvwxyz",str[300];
	int i,j,a[26]={0},n,q=0;
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<26;i++)
	{
		for(j=0;j<n;j++)
		{
			if(str[j]==zimu[i])
				a[i]=a[i]+1;
		}
	}
	for(i=0;i<26;i++)
	{
		if(a[i]!=0)
		{
			printf("%c=%d\n",zimu[i],a[i]);
			q=1;
		}
		
	}
	if(q==0)
		printf("No");
	return 0;
}
