int main(){
	int i,r1,r2,num=0,index=0;
	double n;
	char a[501],b[501];
	scanf("%lf\n",&n);
	scanf("%s\n",a);
	scanf("%s",b);
	r1=strlen(a);
	r2=strlen(b);
	for(i=0;i<r1;i++){
		if(a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G')continue;
		else{
			index=1;
			break;
		}
	}
	for(i=0;i<r2;i++){
		if(b[i]=='A'||b[i]=='T'||b[i]=='C'||b[i]=='G')continue;
		else{
			index=1;
			break;
		}
	}
	if(r1!=r2||index==1)printf("error");
	else{
		for(i=0;i<r1;i++){
			if(a[i]==b[i])num++;
		}
		if((num*1.0/r1)>=n)printf("yes");
		else printf("no");
	
	}
	return 0;

}
