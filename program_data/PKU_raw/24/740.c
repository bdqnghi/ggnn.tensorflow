void main()
{
	char s[1000];
	int i,max=0,min=9999,x,y,len,p=0;
	gets(s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(*(s+i)==' ') {
			if(p>max) {max=p;x=i-p;}
			if(p<min) {min=p;y=i-p;}
			p=0;
		}
        else p++;
	}
	if(p>max) {max=p;x=i-p;}
    if(p<min) {min=p;y=i-p;}
		
	for(i=x;*(s+i)!=' '&&*(s+i)!='\0';i++)
		printf("%c",*(s+i));
	printf("\n");
	for(i=y;*(s+i)!=' '&&*(s+i)!='\0';i++)
		printf("%c",*(s+i));
	

}


