int main()
{
	int i,n=0,len1,len2;
	double p;
	char a[501],b[501];
	scanf("%lf",&p);
	scanf("%s",a);
	scanf("%s",b);
	len1=strlen(a);
	len2=strlen(b);
	if(len1!=len2){
		printf("error");
		return 0;
	}
	for(i=0;i<len1;i++){
		if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')){
			printf("error");
			return 0;
		}
		if(a[i]==b[i])
			n++;
	}
	if((double)n/len1>p)
		printf("yes");
	else 
		printf("no");
	return 0;
}

