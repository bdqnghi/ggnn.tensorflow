
int main()
{//declaration
	void del(char*str,int n);
	char word[50][10];
	int n;
	int i;
//input
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)scanf("%s",*(word+i));
//process
	for(i=0;i<=n-1;i++)del(*(word+i),strlen(*(word+i)));
//output
	for(i=0;i<=n-1;i++)printf("%s\n",word+i);
	return 0;
}

void del(char*str,int n)
{//declaration

//process
	if(str[n-2]=='e'&&str[n-1]=='r')str[n-2]='\0';
	if(str[n-2]=='l'&&str[n-1]=='y')str[n-2]='\0';
	if(str[n-3]=='i'&&str[n-2]=='n'&&str[n-1]=='g')str[n-3]='\0';

}