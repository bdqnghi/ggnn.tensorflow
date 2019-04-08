int main(){
	char zfc[100], in[30], out[30], x[100], y[100];
	int len, i, t=1, lenall, judge=1;
	gets(zfc);
	scanf("%s", in);
	scanf("%s", out);
	len=strlen(in);
	lenall=strlen(zfc);
	for(i=0;i<=lenall-len;i++){
		strcpy(x,zfc);
		x[i+len]=0;
		if(i!=0){
			x[i-1]=0;
		}
		if(strcmp(&x[i],in)==0){
			if(i!=0){
				strcpy(y,zfc);
				y[i]=0;
				y[i+len-1]=0;
				y[lenall]=0;
				printf("%s%s%s", &y[0],out,&y[i+len]);
				judge=0;
				break;
			}
			else{
				printf("%s%c%s", out, zfc[i+len], &x[i+len+1]);
				judge=0;
				break;
			}
		}
	}
	if(judge)
		printf("%s", zfc);
	return 0;
}