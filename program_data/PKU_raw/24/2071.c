int main()
{
	char s[20000];
	char words[200][401];
	int s1=0,s2=0;
	gets(s);
	int n=0,k=0;
	for(int i=0;s[i]!=0;i++)
	{
		if(s[i]==' ')
		{
			s[i]='\0';
			strcpy(words[n],(s+k));
			n++;
			k=i+1;
		}
	}
	strcpy(words[n], (s + k));
    n++;
	int max=strlen(words[0]),min=strlen(words[0]);
	for(int j=1;j<n;j++)
	{
		int a=strlen(words[j]);
		if(a>max)
		{
			max=a;
			s1=j;
		}
		if(a<min)
		{
			min=a;
			s2=j;
		}
	}
	puts(words[s1]);
	puts(words[s2]);
	return 0;
}





	