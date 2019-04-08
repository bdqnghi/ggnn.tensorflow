
int main() 
{ 
int max=0; 
int x=0; 
int min=20; 
int y=0; 
char string[4000]; 
char str[40][20]; 
char temp[20]=""; 
int k=0,j=0,i,n,m; 

gets(string); 

n=strlen(string); 
for (i=0;i<n;i++) 
{ 
if ( string[i]!=' ') 
{ 
temp[k]=string[i]; 
str[j][k]=string[i]; 
k++; 
} 
else 
{ 
strcpy(str[j],temp); 
k=0;j++; 
for(m=0;m<20;m++)temp[m]=0; 

} 
if(i==n-1){ 
strcpy(str[j],temp); 
for(m=0;m<20;m++)temp[m]=0;  
} 


} 
for(i=0;i<=j;i++){ 

if(strlen(str[i])>max){ 
max=strlen(str[i]); 
x=i; 
} 
if(strlen(str[i])<min){ 
min=strlen(str[i]); 
y=i;} 
} 

printf("%s\n",str[x]); 
printf("%s",str[y]); 
return 0; 
} 