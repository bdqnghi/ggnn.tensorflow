
int main()
{
	char a[100][20];
	char b;
	char t[100],h[100];
	int i,g=0,result;
	for(i=0;;i++){
		scanf("%s",a[i]);
		scanf("%c",&b);
		g++;
		if(b==10)
			break;
	}
	scanf("%s",t);
	scanf("%s",h);

	for(i=0;i<g;i++){
		result=strcmp(t,a[i]);

		if(result==0){
			strcpy(a[i],h);
		}
	}
	for(i=0;i<g-1;i++){
		printf("%s ",a[i]);
	}
	i=g-1;
	printf("%s",a[i]);



	
	return 0;	
}