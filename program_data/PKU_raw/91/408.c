void main()
{
	char s1[100],s2[100],n,i;
	gets(s1);
	n=strlen(s1);
	for(i=0;i<n-1;i++)
		s2[i]=*(s1+i)+*(s1+i+1);
	s2[n-1]=*(s1+0)+*(s1+n-1);
	s2[n]='\0';
	puts(s2);
}
