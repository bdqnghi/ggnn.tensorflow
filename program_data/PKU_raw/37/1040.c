void main(){
	int t,i,j,k,judge;
	char zfc[100000],*pzfc;
	int num[26],*pnum;
	scanf("%d",&t);
	gets(zfc);
	for(i=0;i<t;i++){
		for(j=0;j<26;j++){
			*(num+j)=0;
		}
		j=0;
		scanf("%s",zfc);
		while(*(zfc+j)!='\0'){
			for(k=0;k<26;k++){
				if(*(zfc+j)=='a'+k){
					(*(num+k))++;
					break;
				}
			}
			j++;
		}
		judge=0;
		for(j=0;*(zfc+j)!='\0';j++){
			for(k=0;k<26;k++){
				if(*(zfc+j)=='a'+k){
					if(*(num+k)==1){
						printf("%c\n",*(zfc+j));
						judge=1;
					}
					break;
				}
			}
			if(judge==1)
				break;
		}
		if(judge==0)
			printf("no\n");
	}
}