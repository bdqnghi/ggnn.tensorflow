void main()
{
   int n,i;
   int a,b,c,x,y,m;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
	   scanf("%d %d %d",&a,&b,&c);
	   if((a%4==0&&a%100!=0)||a%400==0)
       {
		   if(b==1) x=0;
		   else if(b==2) x=31;
		   else if(b==3) x=60;
		   else if(b==4) x=91;
		   else if(b==5) x=121;
		   else if(b==6) x=152;
		   else if(b==7) x=182;
		   else if(b==8) x=213;
		   else if(b==9) x=244;
		   else if(b==10) x=274;
		   else if(b==11) x=305;
		   else x=335;
		   if(c==1) y=0;
		   else if(c==2) y=31;
		   else if(c==3) y=60;
		   else if(c==4) y=91;
		   else if(c==5) y=121;
		   else if(c==6) y=152;
		   else if(c==7) y=182;
		   else if(c==8) y=213;
		   else if(c==9) y=244;
		   else if(c==10) y=274;
		   else if(c==11) y=305;
		   else y=335;
		   if(x<=y) m=y-x;
		   else m=x-y;
		   if(m%7==0) printf("YES\n");
		   else printf("NO\n");
	   }
	   else
	   {
           if(b==1) x=0;
		   else if(b==2) x=31;
		   else if(b==3) x=59;
		   else if(b==4) x=90;
		   else if(b==5) x=120;
		   else if(b==6) x=151;
		   else if(b==7) x=181;
		   else if(b==8) x=212;
		   else if(b==9) x=243;
		   else if(b==10) x=273;
		   else if(b==11) x=304;
		   else x=334;
		   if(c==1) y=0;
		   else if(c==2) y=31;
		   else if(c==3) y=59;
		   else if(c==4) y=90;
		   else if(c==5) y=120;
		   else if(c==6) y=151;
		   else if(c==7) y=181;
		   else if(c==8) y=212;
		   else if(c==9) y=243;
		   else if(c==10) y=273;
		   else if(c==11) y=304;
		   else y=334;
		    if(x<=y) m=y-x;
		   else m=x-y;
		   if(m%7==0) printf("YES\n");
		   else printf("NO\n");
	   }
   }

}