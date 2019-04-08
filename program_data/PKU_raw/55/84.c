int zhuan(int a,char n[])
{
    long int d=0;
    int c,i,j;
    for(i=0;n[i]!='\0';i++)
      {
         if(n[i]>=48&&n[i]<=57)
            c=n[i]-48;
         else if(n[i]<=90&&n[i]>=65)
            c=n[i]-55;
         else if(n[i]>=97&&n[i]<=122)
               c=n[i]-87;
         for(j=i+1;n[j]!='\0';j++) 
             c=c*a;
         d=d+c;
      }
    return d;
}
void huan(int b,long int c)
{
   int d,i,j;
   char n[100];
   if(c==0)
      printf("0\n");
   for(i=0;c!=0;i++)
     {
         d=c%b;
         c=c/b;
         if(d<=9&&d>=0)
            n[i]=d+48;
         else if(d>=10&&d<=35)
            n[i]=d+55;
     }
     for(j=i-1;j>0;j--)
       printf("%c",n[j]);
     printf("%c\n",n[0]);
}
int main()
{   
    int a,b;
    long int c;
    char n[100];
    scanf("%d %s %d",&a,n,&b);
    c=zhuan(a,n);
    huan(b,c);
    return 0;
} 