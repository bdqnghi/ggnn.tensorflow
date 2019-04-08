int main(){
	int i,j,n;
	char a[300],b[300];
	gets(a);
	j=0;
	for(i=0;a[i]!='\0';i++){
		if(a[i]!=' '){
			b[j]=a[i];
			j=j+1;}
		else{
			b[j]=a[i];
			j=j+1;
			while(a[i+1]==' ')
			{
				i=i+1;
			}
		}
	}
	b[j]='\0';
	puts(b);
return 0;
	}