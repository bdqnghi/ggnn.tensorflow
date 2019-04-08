int main()
{
	char a[30],b[30];
	int i,j,num1,num2;
	gets(a);
	gets(b);
	num1=strlen(a);
	num2=strlen(b);
	for(i=0;i<num1;i++)
	{	
		if(a[i]<='z'&&a[i]>='a')
		    a[i]-=32;
	}
    for(i=0;i<num2;i++)
	{	
		if(b[i]<='z'&&b[i]>='a')
		    b[i]-=32;
	}
		if(strcmp(a,b)>0)
			printf(">");
		else if(strcmp(a,b)<0)
			printf("<");
	    else
		printf("=");
	return 0;
}
        