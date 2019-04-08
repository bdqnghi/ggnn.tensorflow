int main(){
int i,n;
int a,b;
int aa,bb;
scanf("%d",&n);
aa=bb=0;
for(i=0;i<n;i++){
scanf("%d%d",&a,&b);
a=(a-b+3)%3;
if(a==2)aa++;
else if(a==1)bb++;
}
if(aa<bb)printf("B");
else if(aa>bb)printf("A");
else printf("Tie");
return 0;
}