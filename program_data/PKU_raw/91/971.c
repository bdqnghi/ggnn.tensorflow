
void main(void)
{
	char s1[100],s2[100];
	gets(s1);
	int i,l=strlen(s1);
	for(i=0;i<=l-1;i++)
		s2[i]=s1[i]+s1[(i+1)%l];
	s2[l]=0;
	puts(s2);
}