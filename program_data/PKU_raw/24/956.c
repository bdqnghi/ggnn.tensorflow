int main()
{
	char s[1000];
	char words[100][100];
	int i,n,k,j=0,g=0;
	gets(s);
	n = 0; k = 0;
    for (i = 0; s[i] != 0; i++) {
        if (s[i] == ' ') {
            s[i] = '\0';
            strcpy(words[n], (s + k));
            n++;
            k = i + 1;
        }
    }
    strcpy(words[n], (s + k));
    n++;
	int L[100],max=strlen(words[0]);
	for(i=1;i<n;i++)
	{
	    L[i]=strlen(words[i]);
		if(L[i]>max)
		{
			max=L[i];
		    j=i;
		}
	}
	int M[100],min=strlen(words[0]);
	for(i=1;i<n;i++)
	{
	    M[i]=strlen(words[i]);
		if(M[i]<min)
		{
			min=M[i];
			g=i;
		}
	}
    printf("%s\n%s",words[j],words[g]);
	return 0;
}










