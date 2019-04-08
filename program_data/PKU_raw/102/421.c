int main()
{
	char s[7];
	int p,ma,cf=0,cm=0,i,j;
	float h,m[40],f[40];
	scanf("%d",&p);
	for(i=0;i<p;i++){
		scanf("%s %f",s,&h);
		if(strcmp("female",s)==0){
			f[cf]=h;cf++;
		}else{
			m[cm]=h;cm++;
		}
	}
	for(i=0;i<cm;i++){
		ma=i;
		for(j=i;j<cm;j++){
			if(m[j]<m[ma]){
				ma=j;
			}
		}
		h=m[ma];m[ma]=m[i];m[i]=h;
		printf("%.2f ",m[i]);
	}
	for(i=0;i<cf;i++){
		ma=i;
		for(j=i;j<cf;j++){
			if(f[j]>f[ma]){
				ma=j;
			}
		}
		h=f[ma];f[ma]=f[i];f[i]=h;
		printf("%.2f",f[i]);
		if(i!=cf-1){
			printf(" ");
		}
	}
	return 0;
}
