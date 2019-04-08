main()
{
      int a,b,c,d,e,k[10];
      for(int i=1;i<=9;i++)
      k[i]=0;
      for(a=1;a<=5;a++)
      {  
      k[a]=1;
      for(b=1;b<=5;b++)
      {
      if(k[b]==0)
      {
      k[b]=1;
      for(c=1;c<=5;c++)
      {
      if(k[c]==0)
      {
      k[c]=1;
      for(d=1;d<=5;d++)
      {
      if(k[d]==0)
      {
      k[d]=1;
      for(e=1;e<=5;e++)
      {
      if(k[e]==0)
      {        
      int xx=0;
      if(e==2||e==3)
      xx=1;
      if(a<=2){if(e!=1)xx=1;}
      else {if(e==1)xx=1;}
      if(b<=2){if(b!=2)xx=1;}
      else {if(b==2)xx=1;}
      if(c<=2){if(a!=5)xx=1;}
      else {if(a==5)xx=1;}
      if(d<=2){if(c==1)xx=1;}
      else {if(c!=1)xx=1;}
      if(e<=2){if(d!=1)xx=1;}
      else {if(d==1)xx=1;}
      if(xx==0)
      printf("%d %d %d %d %d",a,b,c,d,e);
      k[e]=0;
      }
      }
      k[d]=0;
      }
      }
      k[c]=0;
      }
      }
      k[b]=0;
      }
      
      }
      k[a]=0;
      }
      getchar();
}
