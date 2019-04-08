int main ()
{
	int i,j,m,n,f,l,k;
	char s1[260],s2[260],s3[260];
	gets(s1);
	gets(s2);
	gets(s3);
	m=strlen(s1);
	n=strlen(s2);
	l=strlen(s3);
	for (i=0;i<m;i++)
	{
		f=1;
		for (j=0;j<n;j++)
			if(s1[i+j]!=s2[j])
			{
				f=0;
				break;
			}
		if(f==1)
			{
				k=i;
				break;
			}
	}
	if(f==0)
		puts(s1);
	else
	{
		for(i=0;i<k;i++)
			printf("%c",s1[i]);
		for(i=0;i<l;i++)
			printf("%c",s3[i]);
		for(i=k+l;i<m;i++)
			printf("%c",s1[i]);
	}
	return 0;
}