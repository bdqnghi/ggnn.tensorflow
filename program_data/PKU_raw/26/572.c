int main()
{
	char danci[50][100];
	char sentence[101];
    int i, k, n, len;
    k=0; n=0;
	gets(sentence);
    len = strlen(sentence);
    for(i = 0; i < len; i++){
	    if(sentence[i] != ' '){
		   danci[n][k] =sentence[i];
		   k++;
		}
		else if(sentence[i] == ' '&&sentence[i-1] == ' ')
		{
			n=n;
			k=0;
		}
		else if(sentence[i]==' '&&sentence[i-1]!=' '){
		  danci[n][k] ='\0';
		  n++;
		  k= 0; 	
		}
}
danci[n][k] = '\0';
for(i=0;i<n;i++)
{
	printf("%s ",danci[i]);
}
printf("%s",danci[i]);

	return 0;
}