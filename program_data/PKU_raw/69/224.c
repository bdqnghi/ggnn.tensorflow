int main()
{
    char a[255],b[255],c[255];
	int i,d[255],k=0;
	gets(a);
	gets(b);
	for(i=0;i<255;i++)
		d[i]=0;
	if(strlen(a)>strlen(b))
	{
		strcpy(c,a);
		strcpy(a,b);
		strcpy(b,c);
	}
	for(i=strlen(a)-1;i>=0;i--)
	{
          d[strlen(a)-1-i]=((int)(a[i]+b[i-strlen(a)+strlen(b)]-'0'-'0')+k)%10;
		  k=((int)(a[i]+b[i-strlen(a)+strlen(b)]-'0'-'0')+k)/10;
	}
	for(i=strlen(b)-strlen(a)-1;i>=0;i--)
	{
		d[strlen(b)-1-i]=((int)(b[i]-'0')+k)%10;
		k=((int)(b[i]-'0')+k)/10;
	}
	d[strlen(b)]=k;
	k=0;
	for(i=strlen(b);i>=0;i--)
	{
		if(d[i]!=0)
			break;
        k++;
	}
	for(i=strlen(b)-k;i>=0;i--)
			printf("%d",d[i]);
	if(k==(strlen(b)+1))
		printf("0");
	return 0;
}
