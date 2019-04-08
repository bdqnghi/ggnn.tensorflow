void main()
{int reverse(int num);
 int a[6];
 int i,t;
 for(i=0;i<=5;i++)
 scanf("%d",&a[i]);
 for(i=0;i<=5;i++)
 {t=a[i];
  a[i]=reverse(t);
  printf("%d\n",a[i]);
 }
}
int reverse(int num)
{int z,d,e,f,g,h,y;
 int c=1;
 if(num==0)
 {z=0;
 }
 else
 {if(num>0)
  y=num;
  if(num<0)
  y=-1*num;
  d=y%10;
  e=y/10%10;
  f=y/100%10;
  g=y/1000%10;
  h=y/10000%10;
  if(h>0)
  {z=d*10000+e*1000+f*100+g*10+h;
  }
  else if(g>0)
  {z=d*1000+e*100+f*10+g;
  }
  else if(f>0)
  {z=d*100+e*10+f;}
  else if(e>0)
  {z=d*10+e;}
  else if(d>0)
  {z=d;}
  if(num<0)
  z=z*(-1);
 }
 return(z);
}
  
  
  

 

 