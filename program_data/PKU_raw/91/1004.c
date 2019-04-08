int main(){
	char s[100],a[100],s1[100];
	int n,i,j;
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{	a[i]=("%d",s[i]);}
	
	for(i=0;i<n;i++)
	{	s1[i]=a[i]+a[i+1];}
	s1[n-1]=a[0]+a[n-1];
	for(i=0;i<n;i++)
		printf("%c",s1[i]);
	return 0;}
