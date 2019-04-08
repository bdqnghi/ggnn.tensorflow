void main()
{
	int i=0,j=0,b[300];
	char s[1000];
	gets(s);
	for(i=0;i<300;i++)   b[i]=0;
	for(i=0;s[i]!='\0';i++)
	{
	   if(s[i]!=' ')
		{
			b[j]++;
		}
	   else if(s[i+1]!=' ')
	   {   j++;  }
	}
	printf("%d",b[0]);
	for(i=1;i<=j;i++)
		printf(",%d",b[i]);
}
