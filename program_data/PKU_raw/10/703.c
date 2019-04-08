void main() 
{ 
int k,m,i,j,t; 
int a[26],b[26],c[26];
scanf("%d",&k); 
for(i=0; i<k; i++) 
scanf("%d",&a[i]); 
b[0]=1; 
for(i=1; i<k; i++) 
for(j=0; j<i; j++) 
{ 
if(a[i]<=a[j]) 
c[j]=b[j]+1; 
else 
c[j]=1; 
for(m=j; m>0; m--) 
{ 
if(c[m]>=c[m-1]) 
{ 
t=c[m-1]; 
c[m-1]=c[m]; 
c[m]=t; 
}
} 
b[i]=c[0];
}

for(i=k-1; i>0; i--) 
if(b[i]>=b[i-1]) 
{ 
t=b[i-1]; 
b[i-1]=b[i]; 
b[i]=t; 
            }
printf("%d",b[0]);
}

