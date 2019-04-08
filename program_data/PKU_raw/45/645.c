void main()
{
	int i,j,n,m,k;
	char s[100],w[100];
	scanf("%s",s);
	scanf("%s",w);
	n=strlen(s);
	m=strlen(w);
	for(i=0;i<m;)
	{	k=i;
		for(j=0;j<n;j++,i++)
			if(s[j]!=w[i])
				goto loop;
			printf("%d",k);
loop:k=k+1;i=i+1;

	}
}
