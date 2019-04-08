int main()
{
    char a[100],b[100];
	int i,l;
	gets(a);
	l=strlen(a);
	if(l==1)printf("%c\n",(int)a[0]);
	else
	{
	for(i=0;i<l-1;i++)b[i]=(int)a[i]+(int)a[i+1];
	b[l-1]=(int)a[0]+(int)a[l-1];
	for(i=0;i<l;i++)printf("%c",b[i]);
	}
	return 0;
}

