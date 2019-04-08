  
int main()
{
	char s[100],zfc[100][100],a[100],b[100];
    gets(s);
	scanf("%s",a);
	scanf("%s",b);
	int n=strlen(s);
	int i=0,j,k=0;
    for(j=0;j<=n;j++){
		if(s[j] == ' ' ||s[j] == ',' ||s[j] =='\0')
		{
			if(k != 0)
			{
				zfc[i][k] = '\0';
			    i++;
			}
			k=0;
		}
		else
		{
			zfc[i][k] = s[j];
			k++;
		}
	}
	for(j=0;j<i-1;j++)
	{
   if(strcmp(zfc[j],a)==0)
	  strcpy(zfc[j],b);
	printf("%s ", zfc[j]);}
	if (strcmp(zfc[j],a) == 0)
	{
		strcpy(zfc[j],b);
	}
	printf("%s\n", zfc[j]);	
    return 0;
}

 
 
 
