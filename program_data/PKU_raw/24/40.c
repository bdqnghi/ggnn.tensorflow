int main()
{
  char input[LEN];
  int max=0,min=0,mxlen=0,mnlen=1000;
  int i=0,j,k=0;
  int word,num;
  fgets(input,LEN,stdin);
  while(input[i]!='\0')
    {
      j=0;
      while(isalpha(input[i]))
	{
	  i++;
	  j++;
	}
      while((!isalpha(input[i]))&&(input[i]!='\0'))
	i++;
      if(j>0)
	{
	  k++;
	  max=(mxlen>=j)? max:k;
	  min=(mnlen<=j)? min:k;
	  mxlen=(mxlen>=j)? mxlen:j;
	  mnlen=(mnlen<=j)? mnlen:j;
	}
    }
  word=0;
  num=0;
  for(i=0;input[i]!='\0';i++)
    {
      if(!isalpha(input[i]))
	 word=0;
      else if(word==0)
	{
	  word=1;
	  num++;
	}
      if(num==max)
	break;
    }
  for(j=0;j<mxlen;j++)
    printf("%c",input[i+j]);
  printf("\n");
  word=0;
  num=0;
  for(i=0;input[i]!='\0';i++)
    {
      if(!isalpha(input[i]))
	 word=0;
      else if(word==0)
	{
	  word=1;
	  num++;
	}
      if(num==min)
	break;
    }
  for(j=0;j<mnlen;j++)
    printf("%c",input[i+j]);
  printf("\n");
  return 0;
}
