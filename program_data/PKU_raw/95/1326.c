int main()
{
	char a[85],b[85];
	int i=0,k=0;
	gets(a);
	gets(b);
	while(a[i]!=0&&b[i]!=0)
	{
		if(a[i]>='a')a[i]=a[i]-'a'+'A';
		if(b[i]>='a')b[i]=b[i]-'a'+'A';
	    if(a[i]>b[i]){printf(">"); k=1;break;}
	    if(a[i]<b[i]){printf("<");k=1;break;}
		i++;
	} 
	if(k==0)printf("=");
	return 0;
}