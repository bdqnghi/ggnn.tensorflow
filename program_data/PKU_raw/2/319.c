void main() 
{ 
int n,m,i,j,k,t,max=0; 
int a[1000],b[26]={0}; 
char s[1000][30]; 
char c; 
scanf("%d",&n); 
for(i=0;i<n;i++) 
scanf("%d %s",&a[i],s[i]); 
for(i=0;i<n;i++) 
{ 
m=strlen(s[i]); 
for(j=0;j<m;j++) 
{ 
t=s[i][j]-65; 
b[t]++; 
} 
} 
for(i=0;i<26;i++) 
if(b[i]>=max) max=b[i]; 
for(i=0;i<26;i++) 
{ 
if(b[i]==max) 
{ 
k=i; 
c=i+65; 
printf("%c\n",c); 
printf("%d\n",max); 
} 
} 
for(i=0;i<n;i++) 
{ 
m=strlen(s[i]); 
for(j=0;j<m;j++) 
if(s[i][j]==65+k) printf("%d\n",a[i]); 
} 
} 