int main(int argc, char *argv[])
{
  int i,j=0;
  char a[80]="",b[80]="";
  gets(a);
  gets(b);
  for(i=0;i<79;i++)
  {
     if((a[i]-b[i])!=0&&(a[i]-b[i])!=32&&(b[i]-a[i])!=32) 
     {
       j=1;
       if(a[i]<123&&a[i]>96&&b[i]<123&&b[i]>96&&a[i]>b[i])printf(">");
       if(a[i]<123&&a[i]>96&&b[i]<123&&b[i]>96&&a[i]<b[i])printf("<");
       if(a[i]<123&&a[i]>96&&b[i]<91&&b[i]>64&&a[i]>b[i]+32)printf(">");
       if(a[i]<123&&a[i]>96&&b[i]<91&&b[i]>64&&a[i]<b[i]+32)printf("<");
       if(a[i]<91&&a[i]>64&&b[i]<123&&b[i]>96&&a[i]>b[i]-32)printf(">");
       if(a[i]<91&&a[i]>64&&b[i]<123&&b[i]>96&&a[i]<b[i]-32)printf("<");
       if(a[i]<91&&a[i]>64&&b[i]<91&&b[i]>64&&a[i]>b[i])printf(">");
       if(a[i]<91&&a[i]>64&&b[i]<91&&b[i]>64&&a[i]<b[i])printf("<");
       break;
     } 
  }
  if(j==0)
  printf("=");

  return 0;
}
