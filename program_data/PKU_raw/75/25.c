int count(int x[], int y[], int total)
{
    int k,j,num[1000]={0},temp=0;
  for(j=0; j<total;++j)
   {
   for(k=x[j]; k<y[j]; ++k)
   num[k]++;
   }
for(k=0; k<total;++k)
if(num[x[k]]>temp) temp=num[x[k]];
return temp;
}
void main()
{
    char a[8000],b[8000];
    int x[3000],y[3000],i,j,k,l1,l2,n,max,n1=0,n2=0;
    scanf("%s",a);
    scanf("%s",b);
    l1=strlen(a);
    l2=strlen(b);
    for(i=0;i<l1;i++)
    {
        x[n1]=0;
        for(j=i;j<l1;j++)
        {
            if(a[j]<'0'||a[j]>'9')     break;
            else   x[n1]=x[n1]*10+a[j]-'0';
        }
        n1++;
        i=j;
    }
    for(i=0;i<l2;i++)
    {
        y[n2]=0;
        for(j=i;j<l2;j++)
        {
            if(b[j]<'0'||b[j]>'9')     break;
            else    y[n2]=y[n2]*10+b[j]-'0';
        }
        n2++;
        i=j;
    }
    j=count(x,y,n1);
    printf("%d %d",n1,j);
}