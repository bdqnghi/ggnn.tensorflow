int main()
{
  char a[7],i,j;
  scanf("%s",&a);
  for(i = 1; a[i] !='\0'; i++)
     j=i;

  for( i = j; i>=0; i--)
     printf("%c",a[i]);

  return 0;
}

  