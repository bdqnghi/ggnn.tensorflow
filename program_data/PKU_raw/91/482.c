int main(){
	char mid,a[100],b[100];
	int i,j,stop,length,dif;
	gets(a);
	length=strlen(a);
	for(i=0;i<length-1;i++){
		b[i]=a[i]+a[i+1];
	}
	b[length-1]=a[0]+a[length-1];
	b[length]=0;	
	printf("%s",b);
	scanf("%d",&stop);
	return 0;
}