int main()
{
	char c[101],d[101]={0};
	int i;
	char *pc=gets(c);
	for(i=1;c[i]!=0;i++)
		d[i-1]=*(pc+i-1)+*(pc+i);
	d[i-1]=*(pc+i-1)+*pc;
	puts(d);
	return 0;
}