void main() 
{ 
char a[101],b[101],k; 
int m,i,n,j,s=102,t=0; 

scanf("%d",&n); 

for(i=1;i<=n;i++) 
{ 
scanf("%s",a); 
scanf("%s",b); 

m=strlen(a)-strlen(b); 


for(j=strlen(a)-1;j>=m;j--) 
{ 
if(t!=0) a[j]--; 
if(a[j]>=b[j-m]) 
{ 
a[j]=a[j]-b[j-m]+'0'; 
t=0; 
} 
else 
{ 
a[j]=a[j]+10-b[j-m]+'0'; 
t=1; 
} 
} 

for(j=m-1;j>=0;j--) 
{ 
if(t!=0) a[j]--; 
if(a[j]<'0') 
{ 
a[j]=a[j]+10; 
t=1; 
} 
else t=0; 
} 

for(j=0;j<strlen(a);j++) 
{ 
if(a[j]!='0') 
{ 
s=j; 
break; 
} 
} 

if(s==102) printf("0\n"); 
else 
{ 
for(j=s;j<strlen(a);j++) 
printf("%c",a[j]); 

printf("\n"); 
scanf("%c",&k); 
} 



} 

}
