int main()
{
	int i,a[200],t=0;
	for(i=65;i<=130;i++)a[i]=-10000;
	char str[1000];
	for(i=65;i<=90;i++)a[i]=0;
	for(i=97;i<133;i++)a[i]=0;
	gets(str);
	for(i=0;i<strlen(str);i++)
		a[str[i]]++;
	for(i=65;i<=130;i++)
		if(a[i]>0){
			t=1;
			printf("%c=%d\n",i,a[i]);
		}
	if(t==0)printf("No");
	return 0;
}