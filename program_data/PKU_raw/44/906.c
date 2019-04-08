void main ( )
{
 void doc(char b[20]);
 char a[6][20],c[20];
 int i,j;
 for(i=0;i<6;i++)
 {
	 for(j=0;j<20;j++)
		 a[i][j]='0';
    gets(a[i]);
	}
  for(i=0;i<6;i++) 
  {
   if(a[i][0]=='0')
    printf("0\n"); 
   else
    if(a[i][0]=='-' && a[i][1]=='0')
     printf("-0\n");
    else
     if(a[i][0]=='-')
     {
      for(j=0;j<19;j++)
       c[j]=a[i][j+1];
          c[20]='0';
      printf("-");
      doc(c);
      printf("\n");
     }
     else
     {
      for(j=0;j<20;j++) 
       c[j]=a[i][j];
      doc(c);
      printf("\n"); 
     }
  }
}
void doc(char b[20])
{
 char *p;
 p=b;
 p=p+19;
 while(*p=='\0' || *p=='0')
 {
  p=p-1; 
  if(*p!='0' && *p!='\0')
   break;
 }
 for(p=p;p>=b;p--)
  printf("%c",*p);
}
