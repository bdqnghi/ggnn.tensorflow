int main()
{
	char a[20][15],b[15],c[15],d;
	int i,j;
	for(i=0,d=' ';d!='\n';i++)
	{scanf("%s",a[i]);
	scanf("%c",&d);
	}
	j=i;
	scanf("%s",b);
	scanf("%s",c);
	for(i=0;i<=j-1;i++)
	{
		if(strcmp(a[i],b)==0)
		strcpy(a[i],c);
	}
	for(i=0;i<=j-2;i++)
	{printf("%s ",a[i]);}
	printf("%s",a[j-1]);
	return 0;
}

