int strbigint(char*str,int*a)
{
    int len=strlen(str);
    int i;
    for(i=0;i<len;i++)
    a[len-i-1]=str[i]-'0';
    return len;
}
void print_bigint(int*a,int len)
{
     int k=len-1;
     while(a[k]==0&&k>1)
     {
                        k--;
                        }
     int i;
     for(i=k;i>0;i--)
     printf("%d",a[i]);
     }
main()
{
      int a[100],alen,b[100],blen,i;
      char c[100];
      scanf("%s",c);
      alen=strbigint(c,a);
      if(alen==1)
      printf("%d\n%d",0,a[0]);
      else
      {
      for(i=alen-1;i>0;i--)
      {
                        b[i]=(10*a[i]+a[i-1])/13;
                        a[i-1]=(10*a[i]+a[i-1])%13;
                        }
      print_bigint(b,alen);
      printf("\n");
      printf("%d",a[0]);
      }
      }