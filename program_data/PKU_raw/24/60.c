 int shifouzimu(char c);
 int longl( char string[]);
 int shortl(char string[]);
void main()
{
    
     int i;char line[1000];
     gets(line);
      for(i=longl(line);shifouzimu(line[i]);i++)
    printf("%c",line[i]);printf("\n");
      for(i=shortl(line);shifouzimu(line[i]);i++)
  printf("%c",line[i]);
}
int shifouzimu(char c)
{  
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
    return(1);
     else return(0);
}
  int longl(char string[])
{ 
    int len=0,i,length=0,flag=1,place=0,point;
    for(i=0;i<=strlen(string);i++)
    { 
if (shifouzimu(string[i]))
{
        if(flag)
        {
             point=i;
             flag=0;
         }
      else
         len++;

 }
     else
     {
 flag=1;
         if(len>length)
         {
   length=len;
   place=point;
//    len=0;
         }
 len=0;
      }
}
    return(place);
}

int shortl(char string[])
{
    int len=0,i,length=5,flag=1,place=0,point;
    for(i=0;i<=strlen(string);i++)
{
     if (shifouzimu(string[i]))
 {
        if(flag)
        {
             point=i;
             flag=0;
         }
      else
            len++;
 }

       else
        {
   flag=1;
         if(len<length)
           {
 length=len;
            place=point;
   //        len=0;
            }
 len=0;
          }
   }
        return(place);
}
