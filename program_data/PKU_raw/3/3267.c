int main()
{
int n,k,i,sz[1000],e,l,b=0;
scanf("%d%d",&n,&k);
for(i=0;i<=(n-1);i++){scanf("%d",&sz[i]);}
for(e=0;e<=(n-2);e++){
for(l=(e+1);l<=(n-1);l++)
{if(k==sz[e]+sz[l]){b=1;break;}}}
if(b==0){printf("no");}
if(b==1){printf("yes");}
return 0;
}
