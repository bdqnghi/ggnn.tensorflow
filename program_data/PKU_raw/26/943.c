int main()
{
	char a[N+1],b[N+1];
	int k=0,i;
	gets(a);
	for(i=0;a[i-1];i++){
		if(a[i]==' '&&a[i+1]==' '){
			continue;
		}else{b[k]=a[i];
		k++;
		}
	}
	puts(b);
	return 0;
}