void main()
{
long q,w,e,a,s,d,i,x,sum1,sum2=0,sum3=0,sum,t1,t2=0,t3,d1,d2,sum4=0,sum5,sumA,sumB;
d1=0,d2=0;
scanf("%d %d %d\n %d %d %d",&q,&w,&e,&a,&s,&d);
int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int n[12]={31,29,31,30,31,30,31,31,30,31,30,31};
sum1=0;
if(q==1886)
d=d+1;

{if((q% 4 == 0 && q % 100 != 0)|| (q% 400 == 0))
 { t1=1;
   while(t1<w)
    {sum1=sum1+n[t1];
     t1=t1+1;}
}
else
    t1=1;
    while(t1<w)
    {sum1=sum1+m[t1];
     t1=t1+1;}
sum1=sum1+e;
}

d1=0,i=1;
while(i<q) 
{ 
if(((i % 4 == 0) && (i % 100 != 0))|| (i% 400 == 0))
d1=d1+1,i=i+1;
else
i=i+1;
}

sum2=d1+(q-1)*365;
sumA=sum1+sum2;

{if((a% 4 == 0 && a  % 100 != 0)|| (a% 400 == 0))
 { t2=1;
   while(t2<s)
    {sum3=sum3+n[t2];
     t2=t2+1;}
}
else
    t2=1;
    while(t2<s)
    {sum3=sum3+m[t2];
     t2=t2+1;}
sum3=sum3+d;
}

d2=0,x=1;
while(x<a) 
{ 
if(((x % 4 == 0) && (x % 100 != 0))|| (x% 400 == 0))
d2=d2+1,x=x+1;
else
x=x+1;
}

sum4=d2+(a-1)*365;
sumB=sum3+sum4;

printf("%d",sumB-sumA);
}