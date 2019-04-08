
int main() 
{ 
char k[33],l[33];
long j[33]; 
int a,b,d,i,s,n=0; 
i=0; 
s=1; 
n=0; 
scanf("%d%s%d",&a,k,&b); 
d=strlen(k); 
while(i<=d-1) 
{s=pow(a,d-i-1); 
if(k[i]>='A'&&k[i]<='Z') 
n=n+(k[i]-'A'+10)*s; 
else if(k[i]>='a'&&k[i]<='z') 
n=n+(k[i]-'a'+10)*s; 
else 
n=n+(k[i]-48)*s; 
i++; 
s=1; 
} 
j[0]=n; 
if(n==0) 
{ 
printf("0"); 
return 0; 
} 
for(i=0;i<=33;i++) 
l[i]=0; 
for(i=0;j[i]!=0;i++) 
{ l[i]=j[i]%b+1; 
j[i+1]=(j[i]-l[i]+1)/b; 
} 
d=strlen(l); 
for(i=0;i<=d-1;i++) 
{if(l[d-1-i]>=11) 
{k[i]=l[d-1-i]+54; 
} 
else 
k[i]=l[d-1-i]+47; 
printf("%c",k[i]);} 
return 0; 
} 