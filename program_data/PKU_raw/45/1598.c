void main()
{
    char str1[10];
	int i,a,b,j;
	b=-1;
	a=0;
	char str2[100];
	scanf("%s %s",str1,str2);
	for(i=0;i<10;i++)
	{		if(str1[i]!='\0')
		{a++;}
		else
		{break;}
	}
	for(i=0;i<100;i++)
	{
		if(str2[i]==str1[0])
			for(j=0;j<a;j++)
			{
			if (str2[i+j]!=str1[j])
			{break;}
			if (j==a-1)
			b=i;
			}
        if(b!=-1)
		{printf("%d",b);break;}
	}
}
