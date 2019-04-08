int main()
{
 int n,j,s[250];
 int year,month1,month2,p;
 int monthday[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 scanf("%d",&n);
 for(j=1;j<=n;j++)
{
 scanf("%d %d %d",&year,&month1,&month2);
 int i;
 int sum1=0;
 for(i=1;i<month1;i++)
 {sum1=sum1+monthday[i-1];}
 sum1=sum1+1;
 int k;
 int sum2=0;
for(k=1;k<month2;k++)
 {sum2=sum2+monthday[k-1];}
 sum2=sum2+1;
 int a;
 a=year%4;
 if(month1>2&&(a==0&&year%100!=0||year%400==0))
 {sum1=sum1+1;}
 if(month2>2&&(a==0&&year%100!=0||year%400==0))
 {sum2=sum2+1;}
 p=sum2-sum1;
 if(p%7==0)
 s[j]=1;
 else s[j]=0;
}
for(j=1;j<=n;j++)
{if(s[j]==1)
 printf("YES\n");
 else printf("NO\n");
}
 return 0;
}

