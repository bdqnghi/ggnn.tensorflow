int main()
{
	char a[1000];
	int i,t,j;
	gets(a);
	for(i=1;a[i]!='\0';i++){
		if(a[i-1]==' '&&a[i]==' '){
			t=i;
			for(j=t;a[j-1]!='\0';j++){
				a[j-1]=a[j];
			}
			i=i-1;
		}
	}
    printf("%s",a);
    return 0;
}