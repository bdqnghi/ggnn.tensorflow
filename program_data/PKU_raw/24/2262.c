int main()
{
	char word[1000]={'\0'};
	int length[100],point[100];
	int i,j,a,b,k,p,q;
	gets(word);
	k=strlen(word);
	a=0;
	b=0;
	point[1]=0;
	for(i=0;i<=k;i++)
	{
		if(word[i]==44||word[i]==32||word[i]=='\0')
		{
			b=b+1;
			length[b]=i-a;
			a=i+1;
			point[b+1]=i+1;
		}
	}
	a=length[1];
	p=1;
	for(i=2;i<=b;i++)
	{if(length[i]>a) {a=length[i];p=i;}}
	for(i=point[p];i<=point[p]+a-1;i++)
	{printf("%c",word[i]);}
	printf("\n");
	a=length[1];
	p=1;
	for(i=2;i<=b;i++)
	{if(length[i]<a&&length[i]!=0) {a=length[i];p=i;}}
	for(i=point[p];i<=point[p]+a-1;i++)
	{printf("%c",word[i]);}
	return 0;
}