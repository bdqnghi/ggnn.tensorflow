
int main(int argc, char* argv[])

{
	char a[6],b[6];
	int i,j;
	scanf("%s",a);
	for(i=0;*(a+i)!='\0';i++){
		*(b+i)=*(a+i);
	}
	for(j=i-1;j>=0;j--){
		printf("%c",b[j]);
	}
	
	return 0;
}