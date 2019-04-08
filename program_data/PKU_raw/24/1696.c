int main(){
	char a[300],b[100][100];
	int i,j=0,start=0,len[100],max=0,min=0;
	gets(a);
	for(i=0;a[i]!='\0';i++){
		if(a[i]==' '){
			b[j][i-start]='\0';
			j++;
			start=i+1;
		}else if(a[i]!=','){
			b[j][i-start]=a[i];
		}
	}
	b[j][i-start]='\0';
	j++;
	for(i=0;i<j;i++){
		len[i]=strlen(b[i]);
	}
	for(i=0;i<j;i++){
		if(len[max]<len[i]){
			max=i;
		}
		if(len[min]>len[i]){
			min=i;
		}
	}
	printf("%s\n%s\n",b[max],b[min]);
	return 0;
}
