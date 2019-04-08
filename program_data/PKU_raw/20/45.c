void insert(char st1[],char st2[]){
	int i,m,n;
	char max;
	m=strlen(st1);
	max=st1[0];
	n=m-1;


	for(i=0;i<m;i++){
		if(st1[i]>max){
			max=st1[i];
			n=i;}
	}

    for(i=0;i<=n;i++)printf("%c",st1[i]);
	for(i=0;i<3;i++)
	printf("%c",st2[i]
	);
	for(i=n+1;i<m;i++)printf("%c",st1[i]);
	printf("\n");
}
void main(){
	char st1[50][10],st2[50][4];
	int i,j,k;
	char p;
	while((st1[i][0]=getchar())!=EOF){
		for(j=1;;j++){
			if((p=getchar())!=' ')
				st1[i][j]=p;
			else{st1[i][j]='\0';
			     break;}
		}
		scanf("%s",st2[i]);
		i++;p=getchar();
		
	}
	k=i;
	for(i=0;i<k;i++)
		insert(st1[i],st2[i]);
}
		




