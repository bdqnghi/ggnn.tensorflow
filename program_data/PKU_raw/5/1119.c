int main()
{
	char w1[501],w2[501];
	int len1,len2;
	int i,a=0,b=0;
    double n,m;
	scanf("%lf",&n);
	scanf("%s",w1);
	scanf("%s",w2);
	len1=strlen(w1);
	len2=strlen(w2);
    if(len1!=len2)
		printf("error");
	else{
        for(i=0;i<len1-1;i++){
			if((w1[i]!='A'&&w1[i]!='T'&&w1[i]!='G'&&w1[i]!='C')||(w2[i]!='A'&&w2[i]!='T'&&w2[i]!='G'&&w2[i]!='C')){
			   b=1;
			   printf("error");
			   break;
			}
		}
        for(i=0;i<len1;i++){
			if(w1[i]-w2[i]==0)
				a++;
		}
	    m=1.0*a/(len1-1);
		if(m>n&&b==0)
			printf("yes");
		if(m<n&&b==0)
            printf("no");
	}
	return 0;
}