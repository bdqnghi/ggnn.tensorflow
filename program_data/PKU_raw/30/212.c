main()
{
      int n,i=1,b,c,s=0;
      scanf("%d",&n);
      
      while (i<=n)
      {
            c=i-i/10*10;
            b=i/10; 
          
            if(i%7==0)
            {i++;
            continue;}
            if (b==7||c==7)
           { i++;
            continue;}
                             s=s+i*i;
                 i++;
        }    
            printf("%d",s);
      
return 0;
}
