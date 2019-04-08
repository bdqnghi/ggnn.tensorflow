int main()
{
	char a[200]={0},b[200]={0};
	int i,j,leftpos=0,pos[200],k;
	while(scanf("%s",a)==1)
	{
	printf("%s\n",a);
	j=0;
	for(i=0;i<strlen(a);i++)
		if(a[i]=='('||a[i]==')') {b[j]=a[i];pos[j]=i;j++;}
	leftpos=-1;
	k=0;
	while(k!=strlen(b))
	{
		if(b[k]=='(') leftpos=k;
		if(b[k]==')'&&leftpos!=-1) {a[pos[k]]=' ';a[pos[leftpos]]=' ';b[leftpos]=' ';b[k]=' ';leftpos=-1;k=-1;}
		k++;
	}
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='(') printf("$");
		else if(a[i]==')') printf("?");
		else printf(" ");
	}
	printf("\n");
	memset(a,0,200);
	memset(b,0,200);
	}
	return 0;
}
 



