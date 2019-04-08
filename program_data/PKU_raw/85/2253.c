int main(){
    char asz[300][300];
	int len[300],n=0,i,bsz[300],j,fsz[300];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",asz[i]);
		len[i]=strlen(asz[i]);
	}
	for(i=0;i<n;i++){
		fsz[i]=1;
		for(j=0;j<len[i];j++){
			if(!((asz[i][j]=='_')||
				(asz[i][j]>='A'&&asz[i][j]<='Z')||
				(asz[i][j]>='a'&&asz[i][j]<='z')||
				(asz[i][j]>='0'&&asz[i][j]<='9'&&j>0))){
					fsz[i]=0;
				    break;
			}

			
		
		}
	}
	for(i=0;i<n;i++){
		if(fsz[i]==0){
			printf("no\n");
		}
		else{
			printf("yes\n");
		}

	}	
}


