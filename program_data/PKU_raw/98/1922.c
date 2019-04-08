int main()
{
	char x[1000][41];
	int a,b,i;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%s",x[i]);
	}
	x[a][0]='\0';
	b=strlen(x[0]);
	for(i=0;i<a;i++)
	{
		b+=strlen(x[i+1]);
		if(b>=80)
		{
			printf("%s\n",x[i]);
			b=strlen(x[i+1]);
		}
		else if(i==a-1)
		{
			printf("%s",x[i]);
		}
		else 
		{printf("%s ",x[i]);
		b++;}

	}


	return 0;
}