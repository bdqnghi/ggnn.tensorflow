int main(){
	char zf[21];
	int l,n,judge=0;
	scanf("%d",&n);
	for(int j=0;j<n;j++){
		scanf("%s",zf);
		l=strlen(zf);
		if(zf[l-1]=='r'){
			zf[l-2]='\0';
		}
		if(zf[l-1]=='y'){
			zf[l-2]='\0';
		}
		if(zf[l-1]=='g'){
			zf[l-3]='\0';
		}
		printf("%s\n",zf);
	}
	return 0;
}