long fang(long x);  
 void main() 
 
 { 
 
 
 
 long sum,a,b,i,t,s,p; 
 
 sum=0; 
 
 scanf("%d",&a); 
 
 i=4; 
 
 p=10000; 
 
 s=a/p; // s=a/p; b=a%p;
 
 
 
 while(s==0) 
 
 { 

 i=i-1; 
 
 p=fang(i); 
 
 s=a/p; // s=b/p; b=b%p;
 
 } 
 
 
 
 t=i; 
 
 
 
 while(t>=0) 
 
 { 
 
 b=a%10; 
 
 a=a/10; 
 
 sum=sum+fang(t)*b; 
 
 t=t-1; 
 
 }
 
 
 
 printf("%d",sum); 
 
 } 
 
 
 
 long fang(long x) 
 
 { 
 
 long i,y; 
 
 i=1; 
 
 y=1; 
 
 while(i++<=x)     //  while(i++<=x)
 
 y=y*10; 
 
 return(y); 
 
 } 