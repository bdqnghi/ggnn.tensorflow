void main()
{
  char str[10000];
  int i,k=0,word=1,a[300];
  gets(str);
  for(i=0;i<300;i++)
    a[i]=0;
  for(i=0;str[i]!='\0';i++)
    {
      if(str[i]!=' ')
        {
          a[k]++;
          word=1;
        }
      else if((str[i]==' ')&&(word==1))
        {
          k++;
          word=0;
        }
    }
  printf("%d",a[0]);
  for(i=1;i<k+1;i++)
    printf(",%d",a[i]);
}