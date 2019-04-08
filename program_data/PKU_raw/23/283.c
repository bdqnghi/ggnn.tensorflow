void main()
{
	char a[100],s;
	s=' ';
	int j=1,d,i,k;
	gets(a);
	for(k=0;k<100;k++)
		if(a[k]!=s)
		{if(a[k+1]==0)
		{puts(a);
		break;}
			else
				continue;}
		else
		{
    for(j=99;j>0;j--)
	{if(a[j]==s)
		{for(i=j+1;i<100;i++)
				{printf("%c",a[i]);
	if(a[i+1]==s||a[i+1]==0)
			{
	printf("%c",s);
	break;}}}}
	for(d=0;d<100;d++)
	{printf("%c",a[d]);
	if(a[d+1]==s)
		break;}
		break;}
}