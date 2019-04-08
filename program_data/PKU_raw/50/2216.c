int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
main()
{
int n,i;
int g,k,w,d=1,month=1;
scanf("%d",&n);
w=n;
for(i=1;i<=365;i++)
{w++;
   
   if(w==8)
     w=1;
   d++;
     if(d>m[month])
  {  month++;
     d=1;
}
if(d==13&&w==5)
printf("%d\n",month);

}

}
