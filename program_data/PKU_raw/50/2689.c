main()
{
   int b[12],c[12],i,k,w;
   scanf("%d",&w);
   for(i=0;i<12;i++)
   {
     if(i==0||i==2||i==4||i==6||i==7||i==9||i==11)b[i]=31;
     else
       {
         if(i==1)b[i]=28;
         else b[i]=30;
       }
   }
   c[0]=14;
   for(i=0;i<12;i++)
   {  
     if((c[i]+w)%7==0)
     {printf("%d\n",i+1);}
     c[i+1]=c[i]+b[i];
   }
   } 
