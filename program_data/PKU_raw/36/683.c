
void main()
{
	int c[128]={0},l1,l2,i,b=0;
	char s1[1000],s2[1000];
	scanf("%s%s",s1,s2);
	l1=strlen(s1);
	l2=strlen(s2);
	for(i=0;i<l1;i++)
		c[s1[i]]++;
	for(i=0;i<l2;i++)
		c[s2[i]]--;
	for(i=0;i<128;i++)
		b=b||c[i];
	if(!b)
		printf("YES");
	else
		printf("NO");
}
