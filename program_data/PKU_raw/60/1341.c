 int main()
 {
     int n,a,b,c,d,e,f;
     scanf("%d",&n);
     for(a=2,f=a+2;a<=n,f<=n;a++,f++)
     {c=0;
      e=0;
      for(b=2;b*b<=a;b++)
       {if(a%b==0)
        c=1;}
       if(c==0)
       for(d=2;d*d<=f;d++)
     {if(f%d==0)
     e=1;}
     if(c==0&&e==0)
     printf("%d %d\n",a,f);}
if(n<5)
printf("empty");
       }