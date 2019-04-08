int main(){
int n,i,m,l;
int a[200];
int b[200];
scanf("%d",&n);
m=l=0;
for(i=0;i<n;i++){
scanf("%d %d",&a[i],&b[i]);
if(a[i]==0&&b[i]==1)
m+=1;
if(a[i]==1&&b[i]==0)
l+=1;
if(a[i]==0&&b[i]==2)
l+=1;
if(a[i]==1&&b[i]==2)
m+=1;
if(a[i]==2&&b[i]==0)
m+=1;
if(a[i]==2&&b[i]==1)
l+=1;
if(a[i]==b[i])
continue;
}
if(m>l)
printf("A");
else if(m<l)
       printf("B");
     else
       printf("Tie");
return 0;
}


