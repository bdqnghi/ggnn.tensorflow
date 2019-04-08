void main()
{
 int i,j,k,flag1,flag2,n;
 scanf("%d",&n);
 for(i=6;i<=n;i++)
  if(i%2==0)
   {
    for(j=3;j<=(int)(i/2);j++)
    {
     flag1=0;
     for(k=2;k<=sqrt(j);k++)
      if(j%k==0){flag1=1;break;}
     if(flag1==0)
       {
        flag2=0;
        for(k=2;k<=sqrt(i-j);k++)
         if((i-j)%k==0){flag2=1;break;}       
        }
      if(flag1==0&&flag2==0)
	  {printf("%d=%d+%d\n",i,j,i-j);break;}
     }
    }
}

