
int main()
{
	int i=0,num=0,l=0,temp=0;
	char words[LEN];
	gets(words);
	l=strlen(words);
	for(i=0;i<l;i++)
	{
	  if(words[i]!=' ')
	  {
	    num++;
		if(i==l-1)
		{
		  printf("%d",num);
		}
	  }
	  if(words[i]==' ')
	  {
		if(num!=0)
		{
	      printf("%d",num);
		  printf(",");
		}
		num=0;
	  }
	}
	return 0;
}

