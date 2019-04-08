void main()
{
  int alphabetic(char);
  int longest(char[]);
  int shortest(char[]);
  int i,j;
  char line[1000];
  gets(line);
  for(i=longest(line);alphabetic(line[i]);i++)
  printf("%c",line[i]);
  printf("\n");
  for(j=shortest(line);alphabetic(line[j]);j++)
  printf("%c",line[j]);
  printf("\n");
}
 
 int alphabetic(char c)
{
 
  if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
  return(1);
  else return(0);
}
 
 int longest(char string[])
{
  int len=0,length=0,flag=1,place=0,i,point;
  for(i=0;i<=strlen(string);i++)
  if(alphabetic(string[i]))
  if(flag)
  {
   point=i;
   flag=0;
   }
   else len++;
   else
  {
    flag=1;
    if(len>length)
    {
      length=len;
      place=point;
     }
      len=0;
     
   }
  return(place);
}
  int shortest(char string[])
 {
   int len=0,length=10,flag=1,place=0,i,point;
   for(i=0;i<=strlen(string);i++)
   if(alphabetic(string[i]))
   if(flag)
   {
     point=i;
     flag=0;
    }
    else len++;
   else
   {
     flag=1;
     if(len<length)
      {
         length=len;
         place=point;
        
       }
     len=0;
    }
   return(place);
}
