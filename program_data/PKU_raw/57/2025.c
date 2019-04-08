int main()
{
	int n,i;
	scanf ("%d",&n);
	for(i=0;i<n;i++){
	int c=0;
	char str[15]={0},string[15]={0};
		scanf("%s",&str);
		c=strlen(str);
		if(str[c-1]=='g'){
		strncpy(string,str,c-3);
		}
		else{
			strncpy(string ,str,c-2);
		}
		printf("%s\n",string);
		}

		return 0;
}

