int main(){
	char zfsz[w];
	gets(zfsz);
	int i,j,k,len,max,min,m,a,b;
	int sz[100];
	len=strlen(zfsz);
	sz[0]=-1;
	j=1;
	for(i=0;i<len;i++){
		if(zfsz[i]==' '){
			sz[j]=i;
			j++;
		}
	}
	sz[j]=i;
	max=sz[1]-sz[0]-1;
	a=0;
	min=sz[2]-sz[1]-1;
	b=0;
	if(max<min){
		m=max;
		max=min;
		min=m;
		a=1;
		b=0;
	}
	for(k=3;k<=j;k++){
		m=sz[k]-sz[k-1]-1;
		if(m>max){
			max=m;
			a=k-1;
		}
		else if(m<min){
			min=m;
			b=k-1;
		}
	}
	for(i=sz[a]+1;i<sz[a+1]-1;i++){
		printf("%c",zfsz[i]);
	}
	printf("%c\n",zfsz[i]);
	for(j=sz[b]+1;j<=sz[b+1]-1;j++){
		printf("%c",zfsz[j]);
	}


	return 0;
}
