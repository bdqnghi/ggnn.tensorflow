int main(){
	char a[256],b[256],c[256];
	int i,j,panduan,k;
	k=0;
	panduan=0;
	gets(a);
	gets(b);
	gets(c);
	for(i=0;a[i]!='\0';i++){
		panduan=0;
	
			for(j=0;b[j]!=0;j++){
				if(a[i+j]!=b[j]){
					panduan=1;
					break;
				}
			}
		if(panduan==0&&k==0){
			printf("%s",c);
			i+=j-1;
			k=1;
		}
		else
			printf("%c",a[i]);
		
		
	}
	return 0;
			


}