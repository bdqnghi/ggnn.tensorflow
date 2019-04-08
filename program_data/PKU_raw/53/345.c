void main() 
{ 
int a[300]; 
int i,j,n; 
int *p; 
scanf("%d",&n); 
for(i=0;i<n;i++) 
scanf("%d",&a[i]); 
for(i=0;i<n;i++) 
{ 
for(j=0;j<i;j++) 
if(a[i]==a[j]) 
a[i]=0; 
} 
p=a; 
printf("%d",*p);
for(i=1;i<n;i++) 
if(*(p+i)!=0) 
printf(",%d",*(p+i));
 


}