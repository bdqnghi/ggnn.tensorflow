
int main()
{
    int n;
    scanf("%d",&n);
	struct book{
		int booknumber;
		char writer[27];
	}book[999];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d %s",&book[i].booknumber,book[i].writer);
	}
	int writerbookquantity[26];
	for(i=0;i<26;i++)writerbookquantity[i]=0;
	int j,len,x;
	for(i=0;i<n;i++)
	{
		len=strlen(book[i].writer);
		for(j=0;j<len;j++)
		{
            x= book[i].writer[j]-'A';
			writerbookquantity[x]++;
		}
	}
	int maxwriter=0,maxquantity=0;
    for(i=0;i<26;i++)
	{
       if(writerbookquantity[i]>maxquantity)
	   {
		   maxquantity=writerbookquantity[i];
		   maxwriter=i;
	   }
	}
	printf("%c\n%d\n",(char)(maxwriter+'A'),writerbookquantity[maxwriter]);
    for(i=0;i<n;i++)
	{
		len=strlen(book[i].writer);
		for(j=0;j<len;j++)
		{
            if((int)book[i].writer[j]==maxwriter+'A')
				printf("%d\n",book[i].booknumber);

		}
	}
	return 0;

}
