
int main()
{char a[200];
 int i;
 int n=0;
 char b[200];
 gets(a);
 for(i=0;*(a+i)!='\0';i++)
 {n++;}
 for(i=0;i<n-1;i++)
 {b[i]=a[i]+a[i+1];}
 b[n-1]=a[0]+a[n-1];
 for(i=0;i<n;i++)
 printf("%c",b[i]);
  }