 int invert(long m)
 {   printf("%ld", m%10);
     m = m/10;
     if (m>0)
         invert(m)  ;
 } 
main()
 {
     long n;
     
     scanf("%ld", &n);
     invert(n);
     printf("\n");
 }
