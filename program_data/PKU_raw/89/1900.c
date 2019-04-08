main()
{int n,i,j,b,c,d;
long int a[1000000][2],e;
scanf("%d",&n);
for(i=0;i<1000000;i++)
{scanf("%d %d",&a[i][0],&a[i][1]);
if(0==a[i][0]&&0==a[i][1])
{e=i;
break;}}
//printf("%d\n",e);
for(i=0;i<n;i++)
{
for(j=0;j<=e;j++)
{if(i==a[j][0])
{b=0;
break;}
else
b=1;}
//printf("%d %d\n",i,b) ;
if(1==b)
{c=i;
//printf("%d",j);
break;}
}
if(n==i)
{printf("NOT FOUND");
goto end;
}
d=0;
for(i=0;i<=e;i++)
{if(c==a[i][1])
d=d+1;}
if((n-1)==d)
printf("%d",c);
else
printf("NOT FOUND");
end:
return 0;
}
