int main(){
	char a[10000];
	int sz[10000],i,j,k;
	gets(a);
	j=0;
	k=0;
	for(i=0;a[i]!='\0';i++){
		j++;
		if(a[i]==' '&& a[i-1]==' '){
			j--;
			continue;
		}
		if(a[i]==' '&&j>1){
			sz[k]=j-1;
			j=0;
			k++;
		}
		if(a[i+1]=='\0'){
			sz[k]=j;
		}
	}
	printf("%d",sz[0]);
	for(i=1;i<=k;i++){
		printf(",%d",sz[i]);
	}


		

return 0;


}

