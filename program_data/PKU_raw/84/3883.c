
int main() 
{ 
int a[100]; 
int k; 
scanf("%d",&k); 
for(int i=0 ;i < k;i++){ 
scanf("%d", &(a[i])); 
} 
for(int j=0;j<k-1;j++) 
for(int i=0;i<k-1-j;i++) 
{ 
if(a[i]<=a[i+1]) 
{ 
int p=a[i]; 
a[i]=a[i+1]; 
a[i+1]=p; 
} 
} 
printf("%d\n%d",a[0],a[1]); 
return 0; 
} 