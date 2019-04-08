int main(){
	char s[21];
	int i,j,k,n,l;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s);
		l=strlen(s);
		k=0;
		for(j=0;j<l;j++){
			if(j==0){
				if((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||s[j]=='_'){
					k+=0;
				}else{
					k++;
				break;	
				}
			}else if(j!=0){
                if((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='0'&&s[j]<='9')||s[j]=='_'){
					k+=0;
				}else{
					k++;
					break;
				}
			}
		}
			if(k==0){
				printf("yes\n");
			}else{
				printf("no\n");
			}
		

	}
	return 0;
}
		    
					