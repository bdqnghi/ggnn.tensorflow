int dis(int x)
{
    int y,t=0;


      if(x>=0) 
      t=1;
      else
      x=(-1)*x;
      
      if(0<=x&&x<10)
          y=x;
      if(9<x&&x<100)
          y=(x%10*10+x/10);
      if(99<x&&x<1000)
          y=(x/100+(x-x/100*100)/10*10+x%10*100);
      if(999<x&&x<10000)
          y=x/1000+x%1000/100*10+x%100/10*100+x%10*1000;
      if(9999<x&&x<32768)
          y=x/10000+x%10000/1000*10+x%1000/100*100+x%100/10*1000+x%10*10000;
      if(t==0)
       return(-y);
      else
       return(y);
    
}    
main()
{
    int dis(int x),s,k;
    for(k=0;k<6;k++)
    {
       scanf("%d",&s);
       printf("%d\n",dis(s));
    }
   getchar();
}
