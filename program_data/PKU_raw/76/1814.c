int main(){
int n,c,m;
scanf("%d\n",&n);
int a[100],b[100];
for(int i=0;i<n-1;i++){
scanf("%d%d\n",&a[i],&b[i]);
}
scanf("%d%d",&a[n-1],&b[n-1]);


for(int k=1;k<=n;k++){
int e;	
for(int	i=0;i<n-k;i++){
if(a[i]> a[i+1]){	
e=a[i+1];	
a[i+1]=a[i];	
a[i]=e;	

e=b[i+1];	
b[i+1]=b[i];	
b[i]=e;	

}	
}
}



for(c=0;c<n-1;c++){
for(m=0;m<=c;m++){
if(b[m]>=a[c+1]){
 break;
 }else{
    continue;
}
}

if(m!=c+1){
    continue;
}else{
    break;
}
}



if(c==n-1){ 
    
for(int	k=1;k<=n;k++){
int e;	
for(int	i=0;i<n-k;i++){
if(b[i]> b[i+1]){	
e=b[i+1];	
b[i+1]=b[i];	
b[i]=e;	}}}


printf("%d %d",a[0],b[n-1]);
}else{
printf("no");
}


return 0;
}

