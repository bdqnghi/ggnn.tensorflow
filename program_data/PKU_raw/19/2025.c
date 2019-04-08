int main(){
	char zfc[100], in[30], out[30], x[100], y[100], zfc2[20][100];
	int len, i, t=1, lenall, judge=1, num[100], k=1;
	gets(zfc);
	scanf("%s", in);
	scanf("%s", out);
	len=strlen(in);
	lenall=strlen(zfc);
	num[0]=0;
	for(i=0;i<lenall;i++){
		if(zfc[i]==' '){
			num[k]=i+1;
			zfc[i]=0;
			k++;
		}
	}
	for(i=0;i<k;i++){
		strcpy(zfc2[i],&zfc[num[i]]);
	}
	for(i=0;i<k;i++){
		if(strcmp(&zfc[num[i]],in)==0){
			strcpy(zfc2[i],out);
		}
	}
	for(i=0;i<k-1;i++){
		printf("%s ", zfc2[i]);
	}
	printf("%s", zfc2[k-1]);
	return 0;
}
