
int main()
{
	int i,j,n,m;
	char word[20];

	scanf("%d",&n);
    for(i=0;i<n;i++){
		scanf("%s",word);
		m=strlen(word);
		if(((word[m-1]=='r')&&(word[m-2]=='e'))||((word[m-1]=='y')&&(word[m-2]=='l'))){
			m-=2;
		}
		else if((word[m-1]=='g')&&(word[m-2]=='n')&&(word[m-3]=='i')){
				m-=3;
		}
		
		for(j=0;j<m;j++){
			printf("%c",word[j]);
		}
			printf("\n");
	}
	return 0;
}
