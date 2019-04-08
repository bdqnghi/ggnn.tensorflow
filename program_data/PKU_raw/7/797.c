int main(){
	char zfc[256];
	char zichuan[256];
	char tihuan[20];
	char daitihuan[20];
	int k;
	int e;
	int s=1;
	int tag=0;
	gets(zfc);
	gets(zichuan);
	gets(tihuan);
	int l,m;
	int i,j;
	l=strlen(zichuan);
	m=strlen(zfc);
	for(i=0;i<m;i++){
		for(j=i;j<i+l;j++){
			daitihuan[j-i]=zfc[j];
		}
		daitihuan[l]=0;
		k=strcmp(daitihuan,zichuan);
		s*=k;
		if(k==0&&tag==0){
			e=i;
			tag=1;
		}
	}
	if(s!=0){
		printf("%s",zfc);
	}
	else if(s==0){
		for(i=0;i<e;i++){
			printf("%c",zfc[i]);
		}
		printf("%s",tihuan);
		for(i=e+l;i<m;i++){
			printf("%c",zfc[i]);
		}
	}
	return 0;
}
