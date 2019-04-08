
int main(int argc, char* argv[])
{
	char s1[LEN],s2[LEN],*p1,*p2,*h;
	int i;
	gets(s1);
	h=p1=s1;
	p2=s2;
	while(*p1!=0){
		if(*(p1+1)==0)
			*p2=*h+*p1;
		else
			*p2=*p1+*(p1+1);
		p1++;
		p2++;
	}
	*p2=0;
	printf("%s",s2);
	return 0;
}