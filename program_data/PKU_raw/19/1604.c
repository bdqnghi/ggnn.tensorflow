void main()
{
  int n,i,j=0;char x,y,z,m=0;
  char a[100];
  char b[100][100];
  char c[100];
  char d[100];
  gets(a);
  scanf("%s",&c);
  scanf("%s",&d);
  n=strlen(a);
  for(i=0;i<n;i++)
   {
    if (a[i]==' ') {j++;m=0;}
    else {b[j][m]=a[i];m++;}     
    }
  for(i=0;i<j+1;i++)
    {
      if (strcmp(b[i],c)==0) strcpy(b[i],d);
     }
  for(i=0;i<j;i++)
   printf("%s ",b[i]);
   printf("%s",b[i]);
  
}