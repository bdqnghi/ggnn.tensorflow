int main(){
	int i,n;
	double x,t=0;
	 scanf("%lf",&x);
	char a[500],b[500];
	scanf("%s %s",a,b);
	if(strlen(a)!=strlen(b)) printf("error");
	else{
		n=strlen(a);
		for(i=0;a[i]!='\0'&&b[i]!='\0';i++){
           if((a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G')&&(b[i]=='A'||b[i]=='T'||b[i]=='C'||b[i]=='G')){
		       if(a[i]==b[i]) t++;
		   }else{
			  printf("error");
			  return 0;
		   }
		}
		if(t/n>x) printf("yes");
		else printf("no");
	}
  return 0;
}
