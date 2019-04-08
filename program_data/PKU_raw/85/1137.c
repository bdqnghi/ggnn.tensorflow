int main(){
	int r,n,i,j,num,a=0;
	char str[100][21];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",str[i]);
	}
	for(i=0;i<n;i++){
		num=0;
		r=strlen(str[i]);
		if(str[i][0]<65||(str[i][0]>90&&str[i][0]<97)||(str[i][0]>122)){
			if(str[i][0]!='_'){
				printf("no\n");
				continue;
			}
		}
		for(j=0;j<r;j++){
				if((str[i][j]>=65&&str[i][j]<=90)||(str[i][j]>=97&&str[i][j]<=122)||str[i][j]=='_'||(str[i][j]>=48&&str[i][j]<=57))num++;
		}
		if(num==r)printf("yes\n");
		if(num!=r)printf("no\n");
	}



	return 0;
}