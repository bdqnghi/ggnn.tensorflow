
int main() 
{ 
	char s[51]={0},w[51]={0},compare[51]={0};
	int i,output,j,t;
	scanf("%s%s",&s,&w);
	for(i=0;i<=(strlen(w)-strlen(s));i++)
	{
		for(j=0,t=i;j<strlen(s);j++,t++)
		{
			compare[j]=w[t];
		}
		if(strcmp(compare,s)==0)
		{
			printf("%d\n",i);
			break;
		}
	}
    return 0; 
} 