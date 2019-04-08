int main()
{
	int n,m,i,j,pd;
	char bsf[81],*p;
	p=bsf;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		pd=1;
		gets(bsf);
		m=strlen(bsf);
		if(*p>=48&&*p<=57)
			pd=0;
		else{
			for(j=0;j<m;j++){
				if(!(*(p+j)==95||(*(p+j)>96&&*(p+j)<123)||(*(p+j)>47&&*(p+j)<58)||(*(p+j)>64&&*(p+j)<91)))
					pd=0;
			}
		}
		printf("%d\n",pd);
	}
	return 0;
}