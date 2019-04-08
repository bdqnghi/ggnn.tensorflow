int main ()
{
	int i,n;
	char s1[101],s2[101];
	char * p,* q;
    gets(s1);
	p=s1;
	q=s2;
	n=strlen(s1);
	for (i=0;*(p+i+1)!='\0';i++){
       *q=(*(p+i))+(*(p+i+1));
	   q++;   
	}
	*(q++)=*(p+n-1)+*p;
	*(q++)='\0';
	puts(s2);
	return 0;
}