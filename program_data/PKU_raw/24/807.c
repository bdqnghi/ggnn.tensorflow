int main(){
	char sz[1000],m[50][50]={'\0'};
	int array[50];
	int i,j,p=0,w=0,max=0,min=100,a,b;
	gets(sz);
	for(i=0;;i++){
		if(sz[i]==' '){
			array[p]=w;
			w=0;
			p++;
		}	
		else if(sz[i]==NULL){
			array[p]=w;
			break;
		}
		else{
			m[p][w]=sz[i];
			w++;
		}
	}
	for(i=0;i<=p;i++){
	//	printf("%d %s\n",array[i],m[i]);
	}
	for(a=0;a<=p;a++){
		if(array[a]<min){
			min=array[a];
		}
	}
//	printf("%d\n",min);
	for(b=0;b<=p;b++){
		if(array[b]>max){
			max=array[b];
		}
	}
//	printf("%d\n",max);
	for(b=0;b<=p;b++){
		if(array[b]==max){
			puts(m[b]);
			break;
		}
	}
	for(a=0;a<=p;a++){
		if(array[a]==min){
			puts(m[a]);
			break;
		}
	}
	return 0;
}
