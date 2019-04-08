int main()
{
	int a[123]={0},d[123]={0};
	char b[100]={'\0'},c[100]={'\0'};
	scanf("%s %s",b,c);
	int i=0,s=1;
	if(strlen(b)!=strlen(c)) s=0;
	else
	{
	   while(*(b+i)!='\0')
	   {
		   *(a+*(b+i))+=1;
		   *(d+*(c+i))+=1;
		   i=i+1;
	   }
	   for(i=65;i<=90;i++) s=s*(*(a+i)==*(d+i));
	   for(i=97;i<=122;i++) s=s*(*(a+i)==*(d+i));
	}
	if(s==0) printf("NO");
	else printf("YES");
	return 0;
}