int main ()
{
 int a,b,c;
 scanf("%d%d%d",&a,&b,&c);
 int d=c+31;
 int e=c+60;
 int f=c+91;
 int g=c+121;
 int h=c+152;
 int i=c+182;
 int j=c+213;
 int k=c+244;
 int l=c+274;
 int m=c+305;
 int n=c+335;
 int o=c+59;
 int p=c+90;
 int q=c+120;
 int r=c+151;
 int s=c+181;
 int t=c+212;
 int u=c+243;
 int v=c+273;
 int w=c+304;
 int x=c+334;
 if (b==1)
	 printf("%d\n",c);
 else if (b==2)
	 printf("%d\n",d); 
 if(b>2&&((a%4==0&&a%100!=0)||(a%400==0)))
 {if(b==3)
 printf("%d\n",e);
 else if(b==4)
 printf("%d\n",f);
  else if(b==5)
 printf("%d\n",g);
 else if(b==6)
 printf("%d\n",h);
 else if(b==7)
 printf("%d\n",i);
 else if(b==8)
 printf("%d\n",j);
 else if(b==9)
 printf("%d\n",k);
 else if(b==10)
printf("%d\n",l);
 else if(b==11)
printf("%d\n",m);
 else if(b==12)
printf("%d\n",n);
 } 
 else if(b>2&&((a%4!=0)||(a%100==0&&a%400!=0)))
 {if(b==3)
 printf("%d\n",o);
 else if(b==4)
printf("%d\n",p);
else if(b==5)
printf("%d\n",q);
else if(b==6)
printf("%d\n",r);
else if(b==7)
printf("%d\n",s);
else if(b==8)
printf("%d\n",t);
else if(b==9)
printf("%d\n",u);
else if(b==10)
printf("%d\n",v);
else if(b==11)
printf("%d\n",w);
else if(b==12)
printf("%d\n",x);

 }
 return 0;
}