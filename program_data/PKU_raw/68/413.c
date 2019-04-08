void main() 
{ 
int i,n,j,k,m,l=0,yinru; 
scanf("%d",&yinru);
for(i=6;i<=yinru;i+=2) 
{ 
for(n=2;n<i;n++) 
{ 
for(j=2,k=1;j<=(int)sqrt(n);j++)
{ 
if(n%j==0) k=0; 

} 
if(k) 
for(j=2,m=1;j<=(int)sqrt(i-n);j++)
{ 
if((i-n)%j==0) m=0; 

} 
if(m) 
{ 
printf("%d=%d+%d\n",i,n,i-n);

break; 
}
} 

} 

} 

