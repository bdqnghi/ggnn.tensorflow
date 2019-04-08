
main()
{
 char N[101];
 int n[100], dvd[100], left=0, len;
 memset(dvd, 0, 100*sizeof(int));
 int i, temp;
 gets(N);
 len=strlen(N);
 for (i=0; i<len; i++)
   n[i]=N[i]-'0';  
 for (i=0; i<len; i++)
 {
  temp=left*10+n[i];
  dvd[i]=temp/13;
  left=temp%13;   
 }
 for (i=0; i<len; i++)
 {
  if (dvd[i]!=0)
     break;   
 }
 if (i==len) printf("0\n");
 else
 { 
  for (; i<len; i++)
  {
   printf("%d", dvd[i]);   
  }
  printf("\n");
 }
 printf("%d", left);

}
