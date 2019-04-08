void main()
{
    int a[300],i,j=0,l,t=0;
	char line[1200];
	gets(line);
	l=strlen(line);
	for(i=0;i<l;i++)
	{
		if(line[i]!=' ')
           j++;
		if((line[i]==' ')&&(line[i+1]!=' '))
		{
		t++;
		a[t]=j;
		j=0;
		}
	}
for(i=1;i<=t;i++)
{
	printf("%d,",a[i]);
}
printf("%d",j);
}
