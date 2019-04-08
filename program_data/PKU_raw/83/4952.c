int main()
{
    int a,b,c;int xuefen[100],fenshu[100];float d;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d",&xuefen[b-1]);
    }
    for(c=1;c<=a;c++)
    {
        scanf("%d",&fenshu[c-1]);
    }
     int e;float f,g=0;
     for(e=0;e<a;e++)
     {
         if(fenshu[e]<60)f=0;
         else if(fenshu[e]>=60&&fenshu[e]<=63)f=1;
         else if(fenshu[e]>=64&&fenshu[e]<=67)f=1.5;
         else if(fenshu[e]>=68&&fenshu[e]<=71)f=2;
         else if(fenshu[e]>=72&&fenshu[e]<=74)f=2.3;
         else if(fenshu[e]>=75&&fenshu[e]<=77)f=2.7;
         else if(fenshu[e]>=78&&fenshu[e]<=81)f=3;
         else if(fenshu[e]>=82&&fenshu[e]<=84)f=3.3;
         else if(fenshu[e]>=85&&fenshu[e]<=89)f=3.7;
         else if(fenshu[e]>=90&&fenshu[e]<=100)f=4;
         g=g+f*xuefen[e];
     }
     int i;float h;
     for(i=0;i<a;i++)
     {
         h=h+xuefen[i];
     }
     float j;
     j=g/h;
     printf("%.2f",j);
}