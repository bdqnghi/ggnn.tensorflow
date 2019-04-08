int main()
{
	char a[80],b[80];
	int i=0,s;
	gets(a);
	gets(b);
	while(a[i]!='\0'&&b[i]!='\0')
	{
		if(a[i]<65||a[i]>90&&a[i]<97||a[i]>122) a[i]=a[i];
		else
		{
			if(a[i]<=90) a[i]=a[i]+32;
		}
	    if(b[i]<65||b[i]>90&&b[i]<97||b[i]>122) b[i]=b[i];
		else
		{
			if(b[i]<=90) b[i]=b[i]+32;
		}
		i=i+1;
	}
	s=strcmp(a,b);
	if(s<0) printf("<\n");
    if(s==0) printf("=\n");	
    if(s>0) printf(">\n");
	return 0;
}