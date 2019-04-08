int main()
{
	char str[10000];
	char *p=str;
	gets(str);
	int l;
	l=strlen(str);
	int num[1000]={0},i,j=0,x=0,y=0,*q=num,m=1;
	for(i=x;i<l;i++)
	{
		if(*(p+i)!=' ') 
		{
			*(q+j)=*(q+j)+1;
			y=0;
		}
		else if(y==0)
		{
			y=1;
			j=j+1;
			x=i+1;
			m=j;
		}
	}
	if(m!=1)
	{
		for(j=0;j<m;j++)
		    printf("%d,",*(q+j));
	    printf("%d",*(q+m));
	}
	else printf("%d",*q);
return 0;
}
