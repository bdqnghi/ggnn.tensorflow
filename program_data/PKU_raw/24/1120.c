int main(){
	char a[NUM*LEN];
	char b[NUM][LEN];
	int i,k,index;
	int max,min;
	gets(a);
    index=0;
	for(i=0;;i++){
		for(k=0;;){
			if(a[index]!=' '&&a[index]!=0){
				b[i][k]=a[index];
				index++;
				k++;
			}else{
				b[i][k]=0;
				index++;
				k++;
				break;
			}
		}
		if(a[index-1]==0){
			break;
		}
	}
    max=0;
    min=0;
	for(k=1;k<=i;k++){
		if(strlen(b[k])>strlen(b[max])){
			max=k;
		}
		if(strlen(b[k])<strlen(b[min])){
			min=k;
		}
	}
	printf("%s\n",b[max]);
    printf("%s\n",b[min]);
    return 0;
}