int main(){
	char zf[266];
	char a[266];
	char b[266];
	int i,k,j=0,c=0,d=0,p=0,mark=0;
	scanf("%s",zf);
	c=strlen(zf);
	scanf("%s",a);
	d=strlen(a);
	scanf("%s",b);
	for(i=0;i<c;i++){
		if(zf[i]==a[0]){
			for(k=0;k<d;k++){
				if(zf[i+k]==a[k]){
					j++;
					if(j==d){
						p=i;
						mark=1;
					}
				}
			}
		}
	}if(mark==1){
		for(i=0;i<p;i++){
			printf("%c",zf[i]);
		}printf("%s",b);
		for(i=p+d;i<c;i++){
			printf("%c",zf[i]);
		}
	}if(mark==0)
		printf("%s",zf);
	return 0;
}


                            