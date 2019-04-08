
void f(char *p)
{
     int i;
     for (i=0;i<=29;i++)
     {
     if ((*p)>='0'&&(*p)<='9')
     printf("%c",*p);
     else if (*(p+1)>='0'&&*(p+1)<='9')
     printf("\n");
     p++;
     }
}




int main(int argc, char *argv[])
{
  char a[30];
  gets(a);
  char *p;
  p=a;
  f(p);	
  return 0;
}
