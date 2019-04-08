
int main(){
	char zfc[LEN];
	gets(zfc);
	int sz[NUM];
	int i,j,count=0;
	int s=strlen(zfc);
	for(i=0;i<s;i++){
		if(zfc[i]==' '){
			sz[count+1]=i;
			count++;
		}
	}
	sz[count+1]=i;
	sz[0]=0-1;
	int len,max=0,min=50;
	int a,b;
	for(i=1;i<=count+1;i++){
		len=sz[i]-sz[i-1]-1;
		if(len>max){
			max=len;
			a=i;
		}
		if(len<min){
			min=len;
			b=i;
		}
	}
	for(j=sz[a-1]+1;j<sz[a];j++){
		printf("%c",zfc[j]);
	}
	printf("\n");
	for(j=sz[b-1]+1;j<sz[b];j++){
		printf("%c",zfc[j]);
	}
	return 0;
}