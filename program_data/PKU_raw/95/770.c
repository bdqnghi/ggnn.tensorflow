int main()
{
	int i;
	char a[80],b[80];
  gets(a);
  gets(b);
  for (i=0;i<strlen(a);i++)
  {if (a[i]<97)
  a[i]=a[i]+32;
  
  }
for (i=0;i<strlen(b);i++)
  {
  if (b[i]<97)
  b[i]=b[i]+32;
  }

  if (strcmp(a,b)==0)
	  printf("=");
	  if (strcmp(a,b)>0)
	  printf(">");
	  if (strcmp(a,b)<0)
	  printf("<");

}



