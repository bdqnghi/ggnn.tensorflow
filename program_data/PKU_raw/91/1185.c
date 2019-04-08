char s1[100],s2[100];
int main()
{
	int i,j,k,d;
	gets(s1);
	d=strlen(s1);
	for(i=0;i<d-1;i++)
	{
		*(s2+i)=*(s1+i)+*(s1+i+1);
	}
	*(s2+d-1)=*(s1+d-1)+*s1;
	puts(s2);
	return 0;
}