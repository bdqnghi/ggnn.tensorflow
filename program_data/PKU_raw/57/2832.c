int main()
{
	char str[MAX][20];
	int i,length,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
	}
	for(i=0;i<n;i++){
		length=strlen(str[i]);
		if(str[i][length-1]=='g'){
			str[i][length-3]='\0';
		}
		else
			str[i][length-2]='\0';

		printf("%s\n",str[i]);
	}
	return 0;
}

