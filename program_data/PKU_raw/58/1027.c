void main(){
	int n,i,j,judge;
	char zfc[81],*pzfc;
	pzfc=zfc;
	scanf("%d",&n);
	gets(zfc);     //??????????????????????
	for(i=0;i<n;i++){
		gets(zfc);
		j=0;
		judge=0;
		while(*(pzfc+j)!='\0'){
			if(j==0){
				if(*(pzfc+j)!='_'&&(*(pzfc+j)<'A'|*(pzfc+j)>'z')){
					judge=1;
					break;
				}
			}
			else{
				if((*(pzfc+j)<'A'||*(pzfc+j)>'z')&&(*(pzfc+j)<'0'||*(pzfc+j)>'9')){
					judge=1;
					break;
				}
			}
			j++;
		}
		if(judge)
			printf("0\n");
		else
			printf("1\n");
	}
}