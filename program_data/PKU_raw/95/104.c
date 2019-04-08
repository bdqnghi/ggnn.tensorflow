int main()
{
    int i,n1,m;
	char a[30],b[30];
	gets(a);
	gets(b);
	n1=strlen(a);
    for (i=0;i<n1;i++)
	{
		if ((int)a[i]>96) a[i]=a[i]-32;
		if ((int)b[i]>96) b[i]=b[i]-32;
	}
	    m=strcmp(a,b);
        if(m==0)  printf("=");
        if(m<0)   printf("<");
        if(m>0)   printf(">");
	return 0;
}