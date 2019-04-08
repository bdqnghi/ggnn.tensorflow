int main(){
    char bz[50];
    int n,i,j,l;
    scanf("%d",&n);
    for(i=0;i<n;i++){
		scanf("%s",bz);
		l=strlen(bz);
		for(j=0;j<l;j++){
			if(j==0){
				if(!((bz[j]>='a'&&bz[j]<='z')||(bz[j]>='A'&&bz[j]<='Z')||bz[j]=='_')){
					printf("no\n");
					break;
				}
			}
			else{
			if(!((bz[j]>='a'&&bz[j]<='z')||(bz[j]>='A'&&bz[j]<='Z')||bz[j]=='_'||(bz[j]>='0'&&bz[j]<='9'))){
					printf("no\n");
					break;
			}
			}
		}
	if(j==l){
		printf("yes\n");
	}

	}

    return 0;
    }