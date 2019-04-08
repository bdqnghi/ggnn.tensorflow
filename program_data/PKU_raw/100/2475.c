
void main()
{
	char c[310];
	char d[27]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char x[27]={"abcdefghijklmnopqrstuvwxyz"};
	int dd[27]={0};
	int xx[27]={0};
	int i,j,flag=0;
	gets(c);
	for(i=0;i<26;i++)
		for(j=0;j<strlen(c);j++){
			if(c[j]==d[i]) dd[i]+=1;
			if(c[j]==x[i]) xx[i]+=1;
		}
	for(i=0;i<26;i++)
		if(dd[i]>0) { printf("%c=%d\n",d[i],dd[i]);flag=1;}
	for(i=0;i<26;i++)
		if(xx[i]>0) { printf("%c=%d\n",x[i],xx[i]);flag=1;}
	if(flag==0)
		printf("No");
	
}