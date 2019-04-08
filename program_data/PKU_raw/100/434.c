int main()
{
    char word[500];
	gets(word);
	int a[26]={0};
	int m,i,j,sum=0;
    m=strlen(word);
	for(i=0;i<m;i++){
		for(j=0;j<26;j++){
			if(word[i] -'a'==j)
				a[j]++;
		}
	}
	char b[27]="abcdefghijklmnopqrstuvwxyz";
	for(i=0;i<26;i++){
		if(a[i]!=0){
			printf("%c=%d\n",b[i],a[i]);
		    sum++;
	}
		
    }
	if(sum==0)
		printf("No\n");

	return 0;
}

			
			

	
