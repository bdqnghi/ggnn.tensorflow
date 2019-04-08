
void main()
{
	char zfc[101],newzfc[101]={0};
	char *p,*pn;
	int len;
	pn=newzfc;
	gets(zfc);
	len=strlen(zfc);
	for(p=zfc;p<zfc+len-1;p++){
		*pn=*p+*(p+1);
		pn++;
	}
	p=zfc;
	*pn=*p+*(p+len-1);
	puts(newzfc);
}
