
int main(int argc, char *argv[])
{
  int i,l,k,j=0;
  char b[100]={'\0'};
  char c[100]={'\0'};
  gets(b);
  for(i=0;i<100;i++)
  {
       if(b[i]=='\0')
       {k=i;
       for(l=j;l<i;l++)
       {
            c[100-i-j+l]=b[l];
       }
       break;
       }
       if(b[i]==' ')
       {
       c[99-i]=b[i];
       for(l=j;l<i;l++)
       {
            c[100-i-j+l]=b[l];
       }
       j=i+1;
       }
  }
  for(i=100-k;i<100;i++)
  printf("%c",c[i]);
  return 0;
}