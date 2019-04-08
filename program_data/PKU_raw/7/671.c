int main(){
    char a[256],b[256],c[100][50],x[256],d[256];
	int i,n1,n2,k,m,n,want=-1;
		scanf("%s%s%s",a,b,d);
	n1=strlen(a);
	n2=strlen(b);
	n=n1-n2+1;
	for(k=0;k<n;k++){
		m=k;
		for(i=0;i<n2;i++,m++){
		x[i]=a[m];
		}
		strcpy(c[k],x);
	}
	for(i=0;i<n;i++){
		if(strcmp(b,c[i])==0){
			want=i;
			break;
		}
	}
	if(want==0){
		printf("%s",d);
		for(i=n2;i<n1;i++){
			printf("%c",a[i]);
		}
	}
if(want==(n1-n2)){
	for(i=0;i<want;i++){
		printf("%c",a[i]);
	}
	printf("%s",d);
}
if(want>0&&want<(n1-n2)){
for(i=0;i<want;i++){
	printf("%c",a[i]);
}
	printf("%s",d);
    for(i=want+n2;i<n1;i++){
		printf("%c",a[i]);
	}
}
if(want==-1){
	printf("%s",a);
}
	return 0;
	}
