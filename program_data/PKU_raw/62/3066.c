int main(){
	char a[101],b[101];
	int i,j=1;
	gets(a);
	b[0]=a[0];
	for(i=1;a[i]!=0;i++){
    b[j]=a[i];
	if((b[j]!=b[j-1])||(b[j]!=32)){	
	b[j]=a[i];
	j++;
	}
    b[j]=0;
	}
	puts(b);
	return 0;
}