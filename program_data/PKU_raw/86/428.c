int main()
{
int n,i,m,k,a,s;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&m);
for(k=1;k<=m;k++){
scanf("%d",&a);
if((a+k*3)<=60){
s=a+(60-a-3*k);}
if((a+k*3)>60 && (a+k*3)<=63){
s=a;}
}
if(m==0)
s=60;
printf("%d\n",s);}
return 0;
}


