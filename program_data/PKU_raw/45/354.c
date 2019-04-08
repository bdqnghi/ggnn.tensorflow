int main()
{
	char s[50]={'\0'},w[50]={'\0'},a[100]={'\0'},b[50]={'\0'};
	int i,j,x,y,k,l;
	gets(a);
	for (i=0;i<(strlen(a));i++)
	{
		if (a[i]==' ')
		k=i;
	}
	for (i=0;i<k;i++)
	s[i]=a[i];
	for (i=k+1;i<(strlen(a));i++)
	w[i-k-1]=a[i];
	x=strlen(s);
	y=strlen(w);
    for (i=0;i<y;i++)
	{
		if (w[i]==s[0])
		{
			for (j=i;j<i+x;j++)
		    b[j-i]=w[j];
		    if (strcmp(b,s)==0)
			{
				printf("%d\n",i);
			    goto loop;
			}
		}
	}
    loop:return 0; 
}
