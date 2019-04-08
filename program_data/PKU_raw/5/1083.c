int main(){
	int i;
	char a[500],b[500];
	double x,y,k,n,m;
	scanf("%lf",&x);
	scanf("%s\n%s",a,b);
    n=strlen(a);
    m=strlen(b);
	for(i=0;i<n;i++){
		if(m==n&&(a[i]=='A'||a[i]=='G'||a[i]=='C'||a[i]=='T'||b[i]=='A'||b[i]=='G'||b[i]=='C'||b[i]!='T')){
			if(a[i]==b[i]){k=k+1;
			}
		}else {
				printf("error");
				return 0;
			}
	}
	y=k/n;
	if(y>x){
		printf("yes");
	}else{
		printf("no");
	}

return 0;
}