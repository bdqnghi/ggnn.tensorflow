char str[4500];
int main(){
	char a[300][15];
	int i,b[300],j,z;
	gets(str);
	j=0;
	z=0;
	for(i=0;str[i]!='\0';i++){
		if(str[i]!=' '){
			a[j][z]=str[i];
			z++;
		}
		if(str[i]==' '){
			a[j][z]='\0';
			j++;
			z=0;
		}
	}
	a[j][z]='\0';
	b[0]=strlen(a[0]);
	printf("%d",b[0]);
	for(i=1;i<=j;i++){
		b[i]=strlen(a[i]);
		if(b[i]!=0){
		   printf(",%d",b[i]);
		}
	}
	return 0;
}
