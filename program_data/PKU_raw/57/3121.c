int main(){
	int n,i,j,b[50];
	char a[50][33];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
		b[i]=strlen(a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i][b[i]-1]=='r'){
			a[i][b[i]-2]='\0';
		}else if(a[i][b[i]-1]=='g'){
			a[i][b[i]-3]='\0';
		}else if(a[i][b[i]-1]=='y'){
			a[i][b[i]-2]='\0';
		}
	}
    for(i=0;i<n;i++){
		printf("%s\n",a[i]);
	}
	return 0;
}
	