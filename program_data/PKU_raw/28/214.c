void main()
{
	char a[1000];
	int n=0,t,i=0;
	gets(a);
	while(a[i]!='\0')
	{
		t=0;
		while((a[i]==' ')&&(a[i]!='\0'))i+=1;
		while((a[i]!=' ')&&(a[i]!='\0')){t+=1;i+=1;}
		if(n>0)printf(",");
		if(t>0){printf("%d",t);n+=1;}
		if(a=='\0')break;
	}
}