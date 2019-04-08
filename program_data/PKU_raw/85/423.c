int main()
{
	char s[100][20];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s[i]);
	}
	for(i=0;i<n;i++){
		int f=0;
		for(j=0;s[i][j]!='\0';j++){
			if(j==0){
				if(s[i][j]=='_'||(s[i][j]>='a'&&s[i][j]<='z')||(s[i][j]>='A'&&s[i][j]<='Z'))   continue;
				else f=1;
			}
			else{
				if(s[i][j]=='_'||(s[i][j]>='a'&&s[i][j]<='z')||(s[i][j]>='A'&&s[i][j]<='Z')||(s[i][j]>='0'&&s[i][j]<='9'))
				continue;
				else f=1;
			}
		}
		if(f==1)  printf("no\n");
	    if(f==0) printf("yes\n");
	}
	return 0;
}