int main()
{
	char s[301];
	char ds[301];
    int i,j,k,l,max;
	while (scanf("%s",&s)!=EOF)
	{
      
	  l=strlen(s);
	  scanf("%s",&ds);
	  max=l-1;
	  for (j=l-1;j>0;j=j-1)
	  {
		  if (s[j]>=s[max]) max=j;
	  }
	  for (i=0;i<=max;i++)
		  printf("%c",s[i]);
	  printf("%s",ds);
	  for(i=max+1;i<l;i++)
		  printf("%c",s[i]);
	  printf("\n");
	}
	return 0;
}