
 void main()
 {
      int f(int k);
     int n,i,t;
		 scanf("%d",&n);
       for(t=6;t<=n;t=t+2)
		   for(i=3;i<=t/2;i=i+2)
			   if(f(t-i)==1&&f(i)==1)
			   {
				   printf("%d=%d+%d\n",t,i,t-i);
				   break;
			   }
      
 }
 int f(int k)
 {    
	 int i;
	 if(k==3||k==7||k==5)return(1);
	 
     for(i=3;i<=sqrt(k);i=i+2)
		if(k%i==0)
			return(0);
		
		 return(1);

}
