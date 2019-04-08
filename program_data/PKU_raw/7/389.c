int main(){
	int i,j,h=0;
	char a[100],b[100],c[100];
	scanf("%s%s%s",a,b,c);
	for(i=0;i<strlen(a);i++){
		if(a[i]==b[0]){
			h=0;
			for(j=0;j<strlen(b);j++){
				if(a[j+i]==b[j]){
					h++;
				}
			}
			if(h==strlen(b)){
				for(j=0;j<strlen(c);j++){
					a[j+i]=c[j];
				}
				break;
			}
		}
	}
	printf("%s\n",a);
	return 0;
}


