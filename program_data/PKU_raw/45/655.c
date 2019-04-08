void main()
{
	char s[51],w[51],x[51];
	int i,j,k,a,b;
	scanf("%s%s",s,w);
	a=strlen(s);
	b=strlen(w);
	for(i=0;i<=b-a;i++)
	{
		if(w[i]==s[0])
		{
			for(j=i,k=0;w[j]==s[k]&&k<a;)
			{
				j++;
				k++;
			}
			if(k==a)
			{
				printf("%d\n",i);
				break;
			}
		}
	}
}