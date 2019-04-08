int main()
{
	char s[100][100];
	int c[100],i,j,k=0;//?-1?1??0
	while((scanf("%s",s[k]))!=EOF){
		puts(s[k]);
		for(i=0;i<strlen(s[k]);i++){
			if(s[k][i]=='(')
				c[i]=-1;
			else if(s[k][i]==')')
				c[i]=1;
			else
				c[i]=0;
		}
		for(i=1;i<strlen(s[k]);i++)//??i??????????
			for(j=0;j<strlen(s[k])-i;j++)
				if(c[j]==-1&&c[j+i]==1){
					c[j]=0;
					c[j+i]=0;
				}
		for(i=0;i<strlen(s[k]);i++){
			if(c[i]==0)
				printf(" ");
			else if(c[i]==-1)
				printf("$");
			else if(c[i]==1)
				printf("?");
		}
		printf("\n");
		k++;
	}
	return 0;
}