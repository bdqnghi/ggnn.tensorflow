int main()
{   int m,n,k,i,t=0,j=1,t1;
    char a[20],b[20],c[20];
    scanf("%d",&m);
    scanf("%s",a);
    scanf("%d",&n);
    k=strlen(a);
    for(i=k-1;i>=0;i--)
       {  if(a[i]>=48&&a[i]<=57) t=t+(a[i]-48)*j;
          else if(a[i]>=65&&a[i]<=90) t=t+(a[i]-55)*j;
          else if(a[i]>=97&&a[i]<=122) t=t+(a[i]-87)*j;
          j=j*m;
       }
    if(t==0) printf("%d",t);
    else {i=0;
    while(t>0)
       {  t1=t%n;
          t=t/n;
          if(t1<=9) b[i]=t1+48;
          else b[i]=t1+55;
          i++;
       }
    for(j=0;j<i;j++)
       {  c[j]=b[i-1-j];
          printf("%c",c[j]);}}
    printf("\n");  
    scanf("%d",&m);
}       
       
