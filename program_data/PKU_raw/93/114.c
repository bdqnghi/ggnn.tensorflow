
int main(int argc, char *argv[])
{
  int n,m=0;
  scanf("%d",&n);
  if(n%7==0)
      m++;
  if(n%5==0)
      m+=10;
  if(n%3==0)
      m+=100;
  switch(m)
  {
      case 111: printf("3 5 7");break;
      case 11: printf("5 7");break;
      case 101: printf("3 7");break;
      case 110: printf("3 5");break;
      case 100: printf("3");break;
      case 10: printf("5");break;
      case 1: printf("7");break;
      case 0: printf("n");
  }

  return 0;
}
