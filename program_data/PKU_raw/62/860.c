int main(){
	char a[101],m;
	int b,i,j,k;
	gets(a);
	b=strlen(a);
	for(k=0;k<b;k++){
		for(i=1;a[i];i++){
			if(a[i]==32&&a[i-1]==32){
				for(j=i;j<b-1;j++){
					m=a[j];
					a[j]=a[j+1];
					a[j+1]=m;
				}
			}
		}
	}
	for(i=0;i<b;i++){
		if(a[i]==32&&a[i+1]==32){
			a[i]='\0';
			break;
		}
	}
	printf("%s",a);
	return 0;
}
