void main()
{
 int i,j,k,t,n;
 scanf("%d",&n);
 for(i=6;i<=n;i=i+2)
  if(i%2==0)
   {
    for(j=3;j<=(int)(i/2);j++)
    {
     for(k=2;k<=sqrt(j);k++)
      if(j%k==0) break;
     if(k>sqrt(j))
       {
        for(t=2;t<=sqrt(i-j);t++)
         if((i-j)%t==0) break;    
        }
      if(k>sqrt(j)&&t>sqrt(i-j))
	  {printf("%d=%d+%d\n",i,j,i-j);break;}
     }
    }
}


