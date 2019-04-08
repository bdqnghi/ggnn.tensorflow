int main()
{
	double dz;
	char xl1[500],xl2[500];
	scanf("%lf",&dz);
	scanf("%s\n%s",xl1,xl2);
	int len1,len2;
	len1=strlen(xl1);
	len2=strlen(xl2);
	int e=0;
	if(len1!=len2){
		printf("error");
		e++;
	}
	int i;
	if(e==0){
		for(i=0;i<len1;i++){
			if((xl1[i]!='A'&&xl1[i]!='T'&&xl1[i]!='C'&&xl1[i]!='G')||(xl2[i]!='A'&&xl2[i]!='T'&&xl2[i]!='C'&&xl2[i]!='G')){
			e++;
		    }	
	    }
	    if(e!=0) printf("error");
    }
	int sum=0;
	if(e==0){
		for(i=0;i<len1;i++){
			if(xl1[i]==xl2[i]) sum++;
		}
		if(1.0*sum/len1>dz) printf("yes");
		else printf("no");
	}
	scanf("%d",&e);
	return 0;
}