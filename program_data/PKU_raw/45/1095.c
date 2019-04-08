int main(){
	char a[20],b[20];
	int i;
	scanf("%s",a);
	scanf("%s",b);
    for(i=0;i<strlen(b);i++){
		if(b[i]==a[0])
			break;
	}
	printf("%d",i);
	return 0;
}
