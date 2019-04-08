
int findmax(char a[15])
{
  int maxnum=0,max;max=a[0];
  int i,len;len=strlen(a);
  int comp;comp=a[0];
  for(i=0;i<len-1;i++)
  {if(a[i+1]>max){maxnum=i+1;max=a[i+1];}}
  return maxnum;
}

void main()
{
  
  int lstr,mnum;
  int i;
  char str[15]={0},substr[5]={0};
    while (scanf("%s %s",str,substr)!=EOF)
	{
	  
      mnum=findmax(str);
	  lstr=strlen(str);
	  for(i=lstr-1;i>mnum;i--)
	  {
	     str[i+3]=str[i];
	  }
	  for(i=0;i<3;i++)
		  str[mnum+i+1]=substr[i];
	  printf("%s\n",str);
      for(i=0;i<15;i++)str[i]=0;
	  for(i=0;i<3;i++)substr[i]=0;
	}

}

