
int main ()
{
  char str[1000];
  scanf("%s",str);
  int a,b;char n;
  a=0;b=1;
  while (str[a]!='\0') 
    {
        str[a]=toupper(str[a]);
        a++;
    }
  a=0;
  while(str[a]!='\0')
  {
    n=str[a];
    if (n==str[a+1])
    b=b+1;
    else
    {printf("(%c,%d)",n,b);b=1;}  
      a++;}
  

}
