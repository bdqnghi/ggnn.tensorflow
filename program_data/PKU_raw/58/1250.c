int main()
{
	int i,n,k,t,j;
	char c[81];
    char*p;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		gets(c);
        p=c;
		k=strlen(p);
		for(j=0;j<k;j++){
			if(*p>='0'&&*p<='9'){t=-1;break;}
		if((*(p+j)>='0'&&*(p+j)<='9')||(*(p+j)>='a'&&*(p+j)<='z')||(*(p+j)>='A'&&*(p+j)<='Z')||(*(p+j)=='_'))
		{
			t++;
		}else{t=-1;break;}
	}if(t==-1){printf("0\n");}
	else{printf("1\n");}
	}
	return 0;
}