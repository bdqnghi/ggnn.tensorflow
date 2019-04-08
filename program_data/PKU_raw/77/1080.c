int main()
{
	char a[N];
	int c,s[N][2];
	gets(a);
	int sp,len,i;
	len=strlen(a);
	sp=0;
	c=s[sp][0]=a[0];
	s[sp++][1]=0;
	for(i=1; i<len; i++){
		if(c==a[i])
		{ 
			s[sp][0]=a[i];
			s[sp++][1]=i; 
		}else
			printf("%d %d\n",s[--sp][1],i);
	}
return 0;
} 