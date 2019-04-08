int main()
{
    int n,i,j,sz[100];
    char sr[100][100];
    scanf("%d",&n);
	char zfc;
	scanf("%c",&zfc);
    for(i=0;i<n;i++){
		gets(sr[i]);
	}
    for(i=0;i<n;i++){
		sz[i]=0;
		for(j=0;sr[i][j]!='\0';j++){
		   if(j==0){
				if((sr[i][j]>='A'&&sr[i][j]<='Z')||(sr[i][j]>='a'&&sr[i][j]<='z')||(sr[i][j]=='_')){
					sz[i]=1;
				}else{
					sz[i]=0;
					break;
				}
			}else if(j>0){
				if ((sr[i][j]>='A'&&sr[i][j]<='Z')||(sr[i][j]>='a'&&sr[i][j]<='z')||(sr[i][j]=='_')||(sr[i][j]>='0'&&sr[i][j]<='9')){
				sz[i]=1;
				}else{
				sz[i]=0;
				break;
				}
				}else{
			    sz[i]=0;
				break;
			 }
		 }
	if(sz[i]==0){
		printf("no\n");
	}else{
		printf("yes\n");
	}
	}
    return 0;
}