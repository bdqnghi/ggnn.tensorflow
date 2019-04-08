int main()
{
char a[1000],b[1000];
	int i,j=0,n=0;
    gets(a);
  for(i=0;a[i]!='\0';i++)
  {
	  if(a[i]==' '&&n==0)

	  {
     b[j]=a[i];
	 n=1;
	 j++;
	  }
    else if (a[i]!=' ')
	{
		n=0;
		b[j]=a[i];
		j++;
  }
  }
  b[j]='\0';
	printf ("%s",b);
 

return 0;
}