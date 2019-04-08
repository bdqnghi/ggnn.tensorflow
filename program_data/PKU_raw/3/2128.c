int main()
{
int n,k,i,j,b=0;
int num[1002];
scanf("%d %d\n",&n,&k);
scanf("%d",&num[0]);
for(i=1;i<=n-1;i++)
scanf(" %d",&num[i]);
for(i=0;i<=n-1;i++)
{for(j=i+1;j<=n-1;j++)
     {if(num[i]+num[j]==k)
          {printf("yes");
           b=1;
             break;
           }
     }
if(num[i]+num[j]==k)
break;}
if(b==0)
printf("no");
return 0;
}