int main(){
	int n,i,c;
	scanf("%d",&n);
	int b[100],d[100];
	char a[100][100];
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i][0]=='_'||(a[i][0]>='a'&&a[i][0]<='z')||(a[i][0]>='A'&&a[i][0]<='Z')){
			b[i]=1;
		}else{
			b[i]=0;
		}
	}
    for(c=0;c<n;c++){
		d[c]=strlen(a[c]);
		if(b[c]==0){
			continue;
		}
		for(i=0;i<d[c];i++){
				if(a[c][i]=='_'||(a[c][i]>='a'&&a[c][i]<='z')||(a[c][i]>='A'&&a[c][i]<='Z')||(a[c][i]>='0'&&a[c][i]<='9')){
					b[c]=1;
				}else{
					b[c]=0;
					break;
				}
			
		}
	}

    for(c=0;c<n;c++){
		if(b[c]==1){
			printf("yes\n");
		}else{
	        printf("no\n");
		}
	}
	return 0;
}


