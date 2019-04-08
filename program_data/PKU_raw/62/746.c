int main(){
	char a[10000],b[10000];
	int l,i=0,j=0;
	gets(a);
	l=strlen(a);
	while(i<l){
		if(a[i]!=' '){
			b[j]=a[i];
			i++;
			j++;
		}else if(a[i-1]!=' '){
			b[j]=a[i];
			j++;
			i++;
		}else{
			i++;
		}
	}
	puts(b);
	return 0;
}