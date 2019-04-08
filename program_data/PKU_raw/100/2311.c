int main()
{
	int i,h=1;
	int b[300]={0},k;
	char c;
	char a[300];
	gets(a);
	for(i=0;(c=a[i])!='\0';i++)
		

	{
	
		for(k=0;k<254;k++)
	{
		if(a[i]==k)

		b[k]=b[k]+1;
	}
	}
	for(k=65;k<91;k++)
	{if(b[k]!=0)
	
	{c=k;
printf("%c=%d\n",c,b[k]);
h=2;
	}
	}
	for(k=97;k<123;k++)
	{if(b[k]!=0)
	
	{c=k;
printf("%c=%d\n",c,b[k]);
h=2;
	}
	
	}
	if(h==1)
		printf("No");
	
return(0);
}