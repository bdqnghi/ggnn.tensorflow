struct hw{
	int s;
	int l;
}queue[N];
int main()
{
  int len,q=0,i,j;
  char str[N];
  gets(str);
  len=strlen(str);
  for(i=0;i<len-1;i++)
  {
   if(str[i]==str[i+1])
    {
	 queue[q].s=i;
	 queue[q++].l=2;
    }
  }
  for(i=0;i<q;i++)
  {
  	for(j=0;j<queue[i].l;j++)
  	printf("%c",str[queue[i].s+j]);
  	printf("\n");
  	if(str[queue[i].s-1]==str[queue[i].s+queue[i].l])
  	{
	  queue[q].s=queue[i].s-1;
	  queue[q++].l=queue[i].l+2; 	
    }
  } 	
}