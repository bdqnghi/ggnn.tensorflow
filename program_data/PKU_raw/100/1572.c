int main(){
	char  a[3000],b[27]="abcdefghijklmnopqrstuvwxyz",c[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char  *pa=a;
	int i,n=0,e=0;
	scanf("%s",a);
	
	
	for(i=0;i<26;i++){
		for(pa=a;*pa!='\0';pa++){
			if(*pa==c[i]){
				n++;
			}
		}
		if(n>0){
			printf("%c=%d\n",c[i],n);
            e++;
		}
		n=0;
	}

    for(i=0;i<26;i++){
		for(pa=a;*pa!='\0';pa++){
		
			if(*pa==b[i]){
				n++;
			}

		}
		
		if(n>0){
			printf("%c=%d\n",b[i],n);
			e++;
		}
		n=0;
	}
	if(e==0){
		printf("No\n");
	}
    return 0;
}
