int main()
{
	char a[300],j;
	int b[53]={0},i,flag=0,l,k=1;
	gets(a);
	l=strlen(a);
	for(j='A';j<='Z';j++,k++)
    {
		for(i=0;i<l;i++)
			if(a[i]==j)
			{
				b[k]++;
				flag++;
			}
	}
	for(j='a';j<='z';j++,k++)
	{
		for(i=0;i<l;i++)
			if(a[i]==j)
			{
				b[k]++;
				flag++;
			}
	}
	if(flag==0)printf("No");
	else 
	{
		for(i=1;i<=52;i++)
			if(b[i]!=0)
			{
				if(i<=26)printf("%c=%d\n",i+64,b[i]);
				else if(i>=27)printf("%c=%d\n",i+70,b[i]);
			}
	}
  
	return 0;
}
