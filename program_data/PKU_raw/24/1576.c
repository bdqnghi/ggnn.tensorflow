char zfc[1000];
int main(){
	int len,sz[100]={0},i,k=1,maxw=0,minw=0,max,min;
	gets(zfc);
	len=strlen(zfc);
	for(i=0;i<len;i++){
		if(zfc[i]==' '||zfc[i]==','){
			sz[k]=i+1;
			k++;
			zfc[i]=0;
		}
	}
	max=min=sz[1]-1;
	for(i=0;i<k;i++){
		if(strlen(&zfc[sz[i]])>max){
			max=strlen(&zfc[sz[i]]);
			maxw=i;
		}
		else if(strlen(&zfc[sz[i]])<min&&strlen(&zfc[sz[i]])>0){
			min=strlen(&zfc[sz[i]]);
			minw=i;
		}
	}
	puts(&zfc[sz[maxw]]);
	puts(&zfc[sz[minw]]);
	return 0;
}
