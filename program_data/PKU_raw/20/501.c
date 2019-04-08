void main()
{
	char str[30][10];
	char substr[30][3];
	char ans[30][13];
	char max;
	char *a,*b,*c,*d;
	int i,j,k,l,m,n;
	for(i=0;i<30;i++)
	{
		if(scanf("%s%s",str[i],substr[i])==EOF)break;
		l=strlen(str[i]);
		max=str[i][0];
		for(j=1;j<l;j++)
			if(max<str[i][j])max=str[i][j];
		for(j=0;j<l;j++)
			if(max==str[i][j])break;
		a=&str[i][0];
		b=&substr[i][0];
		c=&str[i][j+1];
		for(k=0;k<j+1;k++)
			ans[i][k]=*(a+k);
		for(m=0;m<3;k++,m++)
			ans[i][k]=*(m+b);
		for(n=0;j+1+n<l;n++,k++)
			ans[i][k]=*(c+n);
		ans[i][k]='\0';
		
	}
	for(j=0;j<i;j++)
	{
		l=strlen(ans[j]);
		for(k=0;k<l-1;k++)
		{
			d=ans[j];
			printf("%c",*(d+k));
		}
		printf("%c\n",*(d+k));
	}
}