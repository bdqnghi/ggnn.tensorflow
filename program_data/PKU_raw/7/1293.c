int main()
{
	char s[300],w[300],r[300],d[300];
	int i,j,l,h;
	scanf("%s%s%s",s,w,r);
	l=strlen(s);
	h=strlen(w);
	for(i=0;i<=l-h;i++)
	{
		for(j=0;j<h;j++)
		{
			d[j]=s[i+j];
		}
		d[h]='\0';
		if(strcmp(d,w)==0) break;
	}
	if(i==l-h+1) printf("%s",s);
	else
	{
		for(j=i;j<i+h;j++)
		{
			s[j]=r[j-i];
		}
		printf("%s",s);
	}
	return 0;
}
