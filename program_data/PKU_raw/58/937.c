int main()
{
	int m=0,i,numa[1000],num,n;
	char a[1];
	gets(a);
	n=atoi(a);
	while (1){
		if (m==n) break;
		else{
		char zf[80];
		char * p;
		num=0;
		gets(zf);
		for (p=zf;*p!='\0';p++){
		if ((*p>='A'&&*p<='Z')||(*p>='a'&&*p<='z')||(*p>='0'&&*p<='9')||(*p=='_'))
				num;
			else num++;
		}
		p=zf;
		if (num!=0) numa[m]=0;
		else {
			if (*p>='0'&&*p<='9')
				numa[m]=0;
			else numa[m]=1;
		}
		m++;
		}
	}
    for (i=0;i<n;i++){
		printf("%d\n",numa[i]);
	}
	return 0;
}
