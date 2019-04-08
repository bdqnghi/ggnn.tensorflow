void insert(char a[20],char b[10])
{
	int max,i,index;
	char *p;
	char ans[20];
	p=a;
	max=0;
	for(i=1;*(p+i);i++)
			if(*(p+i)>max) max=*(p+i),index=i;
	strcpy(ans,"");
	strncat(ans,a,index+1);
	strcat(ans,b);
	strcat(ans,a+index+1);
	printf("%s\n",ans);
}
void main()
{
	char str[20],substr[10];
	while(scanf("%s %s\n",str,substr)!=EOF)
	{
		insert(str,substr);
	}
}
