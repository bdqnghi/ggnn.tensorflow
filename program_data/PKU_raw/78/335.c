main()
{
int a,b,c,d,i,j,t;
static int x[5];
char k;
 char y[5]={'\0','z','q','s','l'};
for(a=10;a<=50;a+=10)
   for(b=10;b<=50;b+=10)
      for(c=10;c<=50;c+=10)
         for(d=10;d<=50;d+=10)
      if(a+b==c+d&&a+d>b+c&&a+c<b&&a!=b&&b!=c&&c!=d)
        {x[1]=a;
         x[2]=b;
         x[3]=c;
         x[4]=d;}
for(j=1;j<=3;j++)
  for(t=j+1;t<=4;t++)
   if(x[j]<x[t])
    {i=x[j];
     x[j]=x[t];
     x[t]=i;
     k=y[j];
     y[j]=y[t];
     y[t]=k;}
for(i=1;i<=4;i++)
   printf("%c %d\n",y[i],x[i]);
}

      