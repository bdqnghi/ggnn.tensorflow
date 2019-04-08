int main(){
int n,a,b,i,m=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d %d",&a,&b);
if(a==b) m=m;
else if(b-a==1 || a-b==2) m=m+1;
else m=m-1; 
}
if(m==0)printf("Tie");
else if(m>0)printf("A");
else if(m<0)printf("B");
return 0;
}