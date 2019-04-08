

int main()
{
    char s[101];
    char words[100][101];
	int cd[100];

    int i, j, k, x=0,y=0, n;

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

	for(i=0;i<n;i++)
	{
		cd[i]=strlen(words[i]);
	}
	
	k=j=cd[0];

	for(i=1;i<n;i++)
	{
		if(cd[i]>k)
		{
		    k=cd[i];
			x=i;
		}
		else if(cd[i]<j)
		{
		    y=i;
			j=cd[i];
		}
	}
	printf("%s\n%s",words[x],words[y]);
	return 0;




}