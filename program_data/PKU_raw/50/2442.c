

main()
{
int a,t,day,q;
int i[12]={31,28,31,30,31,30,31,31,30,31,30,31};
t=0;
q=1;
scanf("%d",&a);
for(day=1;day<=365;day++)
{
                  if(a>7)
                  {
                         a=a-7;
                  }
                  if(q>i[t])
                  {
                             q=q-i[t];
                             t=t+1;
                  }
                  if(q==13)
                  {   if(a==5)
                      printf("%d\n",t+1);
                  }
                  a=a+1;
                  q=q+1;
}

}
