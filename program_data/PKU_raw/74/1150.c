int checksu(int n)
{
int i=2;
int m=0;
for(i=2;i*i<=n;i++)
{
if(n%i==0)
{m=1;
break;}
}
if(m==1)
return 0;
else
return 1;
}
int checkhui(int n)
{
int i=0,a[100],j;
while(n!=0)
{
i++;           
a[i]=n%10;
n=n/10;
}
for(j=1;j<i;j++)
{ 
  if (a[j]!=a[i+1-j])
  break;
        }
if (j==i)
return 1;
else
return 0;
}
main()
{
  int a,b,c[1000],l,k=0;
  scanf("%d",&a);
  scanf("%d",&b);
                 for(l=a;l<=b;l++)
                 {
                      if(checksu(l)==1&&checkhui(l)==1)
                      {
                      c[k]=l;
                      k++;
                      }
                 }
 if (k==0)
 printf("no\n");
 else
     {
       for (int p=0;p<=k-1;p++)
       {printf("%d",c[p]);
       if(p!=k-1)
       printf(",");
       }
     }
getchar();
getchar();
getchar();
}
