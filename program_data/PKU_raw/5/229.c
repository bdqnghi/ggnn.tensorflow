int main(){
	int i,m=0;
	float k=0,n;
	char a[502],b[502];
	scanf("%f",&n);
	scanf("%s",a);
	scanf("%s",b);
	for(i=0;i<(strlen(a));i++){
		if(strlen(a)!=strlen(b)){
			m=0;
			break;
		}
		if(a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G'){
			m++;
			if(a[i]==b[i]){
				k++;
			}
		}else{
			m=0;
			break;
		}
	}
	if(m==0){
		printf("error");
	}else{
	    if((k/(strlen(a)*1.00))>n){
		    printf("yes");
		}else{
		    printf("no");
		}
	}

	return 0;
}

