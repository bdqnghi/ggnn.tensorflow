
int main()
{
	char str[101];
	int i,j;
	gets(str);
	for(i=0;i<101;i++){
		while((str[i]==' ')&&(str[i+1]==' ')){
			for(j=i+1;j<101;j++){
				str[j]=str[j+1];
			}
		}
	}
	puts(str);
	return 0;
}