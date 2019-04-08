long f(int x[80],int p,int l)
{
 int i,sum=0;
 for(i=0;i<l;i++)
  sum=sum*p+x[i];
 return(sum);
}
void main()
{
 int a,b,y[80],i,len;
 long t;
 char x[80];
 scanf("%d%s%d",&a,x,&b);
 for(i=0;i<strlen(x);i++)
 {
  if(x[i]>='0'&&x[i]<='9')
   y[i]=x[i]-'0';
  else if(x[i]>='a'&&x[i]<='z')
   y[i]=x[i]-'a'+10;
  else if(x[i]>='A'&&x[i]<='Z')
   y[i]=x[i]-'A'+10;
 }
 t=f(y,a,strlen(x));
 if(t==0)
  printf("0");
 else
 {
  for(i=0;t!=0;i++)
  {
   y[i]=t%b;
   t=(t-y[i])/b;
  }
  len=i;
  for(i=0;i<len;i++)
  {
   if(y[i]>=0&&y[i]<=9)
    x[i]='0'+y[i];
   else if(y[i]>9)
    x[i]=y[i]-10+'A';
  }
  for(i=len-1;i>=0;i--)
   printf("%c",x[i]);
 }
}