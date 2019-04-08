int main()
{
	char zfc[2560];
	char *words[1000];
	gets(zfc);
	int n,k,i,j;
	n = 0; 
	k = 0;
    for (i = 0; zfc[i] != 0; i++) 
	{
        if (zfc[i] == ' ') 
		{
            zfc[i] = '\0';
            words[n] = zfc + k;
            n++;
            k = i + 1;
        }
    }
    words[n] = zfc + k;
	int cd[1000];
	for (i = 0,j=0;i<n+1;i++,j++)
	{	
		cd[i]=strlen(words[j]);
	}
	for(i=0;i<n+1;i++)
	{
		if (i==0)
		{
	        printf("%d",cd[i]);
		}
        if(i!=0&&cd[i]!=0)
		{
		    printf(",%d",cd[i]);
		}
	}
	return 0;
}
 
 
 