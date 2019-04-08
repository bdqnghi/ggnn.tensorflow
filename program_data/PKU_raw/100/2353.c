
int main()
{
	char arr[300];
	int i,flag=0;
	int a[123]={0};
	gets(arr);
	for(i=0;i<strlen(arr);i++){
		if((arr[i]>=65&&arr[i]<=90)||(arr[i]>=97&&arr[i]<=122))
			a[((int)arr[i])]++;
	}
	for(i=0;i<123;i++){
		if(a[i]!=0){
			flag++;
			printf("%c=%d\n",i,a[i]);
	}
	}
	if(flag==0)
		printf("No\n");
	
	return 0;
}
