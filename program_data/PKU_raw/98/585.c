int main()
{
	int n,i,p,q;
	char word[500][40],str[80]={"\0"};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",word[i]);
	}
	for(i=0;i<n;i++)
	{
		strcat(str,word[i]);
		p=strlen(str);q=p+strlen(word[i+1])+1;
		if(p<=80&&q>80)
		{
			printf("%s\n",str);strcpy(str,"\0");
		}
		else 
			if(i==n-1){printf("%s",str);}
			else strcat(str," ");
	}
}