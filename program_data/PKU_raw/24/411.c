int main(){
	char a[50][50]={'0'},b;
	int i,max=0,min=0;
	for(i=0;i<50;i++){
		scanf("%s",a[i]);
		scanf("%c",&b);
		if(b==10){
			break;
		}
	}
	for(i=0;i<50;i++){
		if(strlen(a[i])>strlen(a[max])){
			max=i;
		}
		else if(strlen(a[i])<strlen(a[min])&&strlen(a[i])!=0){
			min=i;
		}
	}
	printf("%s\n%s",a[max],a[min]);
	return 0;
}	