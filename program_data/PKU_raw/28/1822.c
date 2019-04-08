int main()
{
char word[5000];
int i,j,l,a,len[300]={0};
gets(word);
l=strlen(word);
j=0;a=0;
for(i=0;i<l;i++)
{
  if(word[i]!=' ')
  {
	  len[j]+=1;
	  a=0;
  }
  else
  {
	  if(a==0)
	  {
		  j++;
	      a=1;
	  }
  }
}
printf("%d",len[0]);
for(i=1;i<=j;i++)
{
   printf(",%d",len[i]);
}

return 0;
}
