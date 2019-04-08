int main()
{
	int i,j,len,a[1000]={0};
	char str[1001]={"0"},c[1001]={"0"};
	gets(str);
	len=strlen(str);
	j=0;
	for(i=0;i<len;i++)
		if(str[i]<=122&&str[i]>=97)
			str[i]-=32;
	c[0]=str[0];
	for(i=0;i<len;i++)
		if(c[j]==str[i])
			a[j]++;
		else{
			j++;
			c[j]=str[i];
			a[j]++;
		}
	for(i=0;i<=j;i++)
		printf("(%c,%d)",c[i],a[i]);
	return 0;
}