void main()
{
	char str[10],substr[3],s[13];
	char *p,*m,*n,*q;
	char max;
	while(scanf("%s %s",str,substr)!=EOF){
	for(m=str,max=*m;*m!='\0';m++)
		if(*m>max)
			max=*m;
    for(m=str;*m!='\0';m++)
		if(*m==max)
		{
			q=m;
			break;
		}
	for(p=s,m=str;m<=q;p++,m++)
		*p=*m;
	for(n=substr;*n!='\0';n++,p++)
		*p=*n;
	for(m=q+1;*m!='\0';m++,p++)
	    *p=*m;
	*p='\0';
	p=s;
	printf("%s\n",p);
	}
}