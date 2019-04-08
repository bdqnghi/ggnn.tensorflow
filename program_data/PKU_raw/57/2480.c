int main(){
	int n,i,k;
	char a[51][33],b[51];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	scanf("%s",a[i]);
	}
	for(i=0;i<n;i++){
		b[i]=strlen(a[i]);
		}
	for(i=0;i<n;i++){
		if (a[i][b[i]-1]=='r')
			a[i][b[i]-2]='\0';
		else if (a[i][b[i]-1]=='y')
			a[i][b[i]-2]='\0';
		else if (a[i][b[i]-1]=='g')
			a[i][b[i]-3]='\0';
	}
	for(i=0;i<n;i++){
		printf("%s\n",a[i]);
	}
	return 0;
}