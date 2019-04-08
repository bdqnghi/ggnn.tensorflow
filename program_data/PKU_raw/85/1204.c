int main(){
	int i,j,len[22],n,ans;
	char zfc[100][22];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",zfc[i]);						
	}
    for(i=0;i<n;i++){
		len[i]=strlen(zfc[i]);
		for(j=0;j<len[i];j++){
			ans=1;
			if(!((zfc[i][j]>='0' && zfc[i][j]<='9' && j>0)||
				(zfc[i][j]>='A' && zfc[i][j]<='Z')||
				(zfc[i][j]>='a' && zfc[i][j]<='z')||
				(zfc[i][j]=='_')))			
			{ans=0;
			break;}			
		}
		if(ans==1) printf("yes\n");
		else if(ans==0) printf("no\n");
	}   
	return 0;
}