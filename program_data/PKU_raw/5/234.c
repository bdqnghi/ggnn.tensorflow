int main(){
	double n;
	scanf("%lf",&n);
	char DNA[2][500];
	int i;
	int len[2];
	for(i=0;i<2;i++){
		scanf("%s",DNA[i]);
		len[i]=strlen(DNA[i]);
	}
	int j;
	int p=0;
	for(j=0;j<len[0];j++){
		if(DNA[0][j]==DNA[1][j]){
			p++;
		}	
	}
	int m=0;
	for(i=0;i<2;i++){
		for(j=0;j<len[i];j++){
			if(DNA[i][j]!='A'&&DNA[i][j]!='T'&&DNA[i][j]!='C'&&DNA[i][j]!='G'){
				m++;
			}	
		}
	}
	double bi;
	bi=((double)p)/((double)len[0]);
	if(len[0]!=len[1]||m!=0){
		printf("error");
	}else if(bi>n){
		printf("yes");
	}else{
		printf("no");
	}
return 0;
}

