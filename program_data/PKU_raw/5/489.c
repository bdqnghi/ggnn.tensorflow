int main(){
	double rate;
	char a[501],b[501];
	scanf("%lf",&rate);
	scanf("%s%s",a,b);
	int lena,lenb;
	lena=strlen(a);
	lenb=strlen(b);
	int sum=0;
	int zq=0;
	if(lena==lenb){
		int i;
		
		
		for(i=0;i<lena;i++){
			if(a[i]=='A'||a[i]=='T'||a[i]=='G'||a[i]=='C'||b[i]=='A'||b[i]=='T'||b[i]=='G'||b[i]=='C'){
				if(a[i]==b[i]){
					sum++;
				}
				zq++;
			
		
			}else{
				printf("error");
				break;
			}
		}
	}else{
		printf("error");
	}
	double r;
	r=1.0*sum/lena;
	if(zq==lena){
		if(r>rate){
			printf("yes");
		}else{
			printf("no");
		}
	}
	return 0;
}

	
