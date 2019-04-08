main()
{
char s[100];
int a[100],b[100]={0},c[100];
int m,i,t,k;
scanf("%s",s);
m=strlen(s)-1;
for(i=0;i<=m;i++)
{
  a[i]=s[i]-'0';
}
if(m==0)
  printf("0\n%d",a[0]);
else if(m==1)
{
    t=a[0]*10+a[1];
  printf("%d\n%d",(t-t%13)/13,t%13);
}
else if(m==2)
{
    t=a[0]*100+a[1]*10+a[2];
  printf("%d\n%d",(t-t%13)/13,t%13);
}
else
{
  b[0]=a[0]*100+a[1]*10+a[2];
  c[0]=(b[0]-b[0]%13)/13; 
  for(i=1;i<=m;i++)
     {
       b[i]=(b[i-1]%13)*10+a[i+2];
       c[i]=(b[i-1]-b[i-1]%13)/13;  
     }
  for(i=1;i<m;i++)
    printf("%d",c[i]);
  printf("\n");
  printf("%d\n",b[m-2]%13);  
}
}
