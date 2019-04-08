void main() 
{ 
int i,x,j,k,n,m,l=0; 
scanf("%d",&n);
for(i=6;i<=n;i+=2) 
{ 
for(x=2;x<i;x++) 
{ 
for(j=2,k=1;j<=(int)sqrt(x);j++)
{ 
if(x%j==0) k=0; 

} 
if(k) 
for(j=2,m=1;j<=(int)sqrt(i-x);j++)
{ 
if((i-x)%j==0) m=0; 

} 
if(m) 
{ 
printf("%d=%d+%d\n",i,x,i-x);
l++;
break; 
}
} 
if(x==i) printf("error %d\n",i);
} 

} 