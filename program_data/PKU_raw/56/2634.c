void main() 
{ 
int num,a,b,c,d,e; 
scanf("%d",&num); 
a=num/10000; 
b=(num-a*10000)/1000; 
c=(num-10000*a-1000*b)/100; 
d=(num-10000*a-1000*b-100*c)/10; 
e=num-10000*a-1000*b-100*c-10*d; 
printf("%d",e); 
if(d) 
printf("%d",d); 
if(c) 
printf("%d",c); 
if(b) 
printf("%d",b); 
if(a) 
printf("%d",a); 
} 