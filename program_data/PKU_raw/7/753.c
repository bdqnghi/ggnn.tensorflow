int main()
{
	char words[200],a[100],b[100];
	int n,k,j=0,i,s,d;
	gets(words);
	gets(a);
	gets(b);
	n=strlen(words);
	s=strlen(a);
    d=strlen(b);
	for(i=0; i < n ; i++)
	{
		if(strncmp(words + i, a, s) == 0)
		{
			for(j=i,k=0;k<d;j++,k++){
			    words[j]=b[k];
			}
			break;
		}
	}
	puts(words);
	return 0;
}
