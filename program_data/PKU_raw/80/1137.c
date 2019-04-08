  int main()
 {
  int a,b,c,x,y,z,i,n=0,e,f,h;
  scanf("%d %d %d\n%d %d %d",&a,&b,&c,&x,&y,&z);
  for (i=a;i<x;i++)
  {if ((i%4==0&&i%100!=0)||(i%400==0)) n++;}
  {if ((a%4==0&&a%100!=0)||(a%400==0))
   switch (b)
{case 1:e=0;break;case 2:e=31;break;case 3:e=60;break;case 4:e=91;break;case 5:e=121;break;case 6:e=152;break; case 7:e=182;break; case 8:e=213; break;case 9:e=244;break;case 10:e=274;break; case 11:e=305; break;case 12:e=335;break;}
 else  
 switch(b)
{case 1:e=0;break;case 2:e=31;break;case 3:e=59;break;case 4:e=90;break;case 5:e=120;break;case 6:e=151;break; case 7:e=181;break; case 8:e=212; break;case 9:e=243;break;case 10:e=273;break; case 11:e=304; break;case 12:e=334;break;}}
 {if ((x%4==0&&x%100!=0)||(x%400==0))
 switch (y)
{case 1:f=0;break;case 2:f=31;break;case 3:f=60;break;case 4:f=91;break;case 5:f=121;break;case 6:f=152; break;case 7:f=182; break;case 8:f=213; break;case 9:f=244;break;case 10:f=274; break;case 11:f=305; break;case 12:f=335;break;}
 else switch(y)
{case 1:f=0;break;case 2:f=31;break;case 3:f=59;break;case 4:f=90;break;case 5:f=120;break;case 6:f=151; break;case 7:f=181;break; case 8:f=212;break; case 9:f=243;break;case 10:f=273; break;case 11:f=304; break;case 12:f=334;break;}}
h=365*(x-a)+n+f+z-e-c;
 printf ("%d",h);
}
  