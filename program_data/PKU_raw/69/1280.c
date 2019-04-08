
int main()
{
    char a[251],b[251],c[252];
    for(int i=0;i<252;i++)
    c[i]=0;
    int x[251],y[251];
    scanf("%s%s",a,b);
    int la=strlen(a);
    int lb=strlen(b);
    if(la==1&&lb==1&&a[0]=='0'&&b[0]=='0')
    {
      printf("0\n");
      return 0;
    }
    int len=la>lb?la:lb;
   // printf("%d %d %d\n",la,lb,len);
    int i=0,j=0,m=0;
    for(i=la-1;i>=0;i--)
    x[j++]=a[i]-'0';
    j=0;
    for(i=lb-1;i>=0;i--)
    y[j++]=b[i]-'0';
    if(len>la)
    for(i=la;i<len;i++)
    x[i]=0;
    if(len>lb)
    for(i=lb;i<len;i++)
    y[i]=0;
    j=0;
    for(i=0;i<len;i++)
    {
       if(c[j]+x[i]+y[i]<10)
       {
          c[j]+=x[i]+y[i]+'0';
          j++;
       }
       else
       {
           c[j]+=(x[i]+y[i]-10)+'0';
           c[j+1]=1;
           j++;
       }
    }
    if(c[len]==1)
    c[len]=1+'0';
    for(i=len;i>=0;i--)
    if(c[i]!='0'&&c[i]!=0)break;
    for(;i>=0;i--)
    printf("%c",c[i]);
    printf("\n");
    //printf("%s\n%s\n",a,b);
    return 0;
}
