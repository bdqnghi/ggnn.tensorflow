long reverse(long n)
{
    long g = n;
    long a=0,b=0;
        while(g!=0)
    {         
             
              a = g % 10;
              b = b*10+a;  
              g = g/10;
    
    }
 
  
    return b;

}



main()
{
 long n,b,i;     
for(i=0;i<=5;i++)
{      
 scanf("%d",&n);
 b = reverse(n);
 printf("%d\n",b);
}


}
