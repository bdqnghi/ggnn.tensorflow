int main()
{
int n,k,a,b,c;
scanf("%d%d",&n,&k);
int sz[n];
for(int i=0;i<n;i++){
scanf("%d",&(sz[i]));
}
for(a=0;a<n;a++){
for(b=a+1;b<n;b++){
c=sz[a]+sz[b];
if(c==k)
break;
}
if(b!=n){
printf("yes");
break;
}
}
if(a==n)
printf("no");
return 0;
}
