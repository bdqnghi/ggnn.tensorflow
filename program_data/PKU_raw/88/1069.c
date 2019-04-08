 main()
{
 char a[100],b[10];
 int n,i,j;
 gets(a);
 n=strlen(a);
 for (i=0;i<10;i++)
 b[i]='0'+i;
 for (i=0;i<n;i++)
 {
   for (j=0;j<10;j++)
   {
    if (a[i]==b[j]  &&   ( (a[i+1]-'0'>=0) || ( a[i+1]-'0'<=9 ) ) )
    printf("%c",b[j]);
    
    if ( a[i]==b[j]  &&   ( (a[i+1]-'0'<0) || ( a[i+1]-'0'>9 ) ) )
    printf("\n",b[j]);
   }
 }
}
