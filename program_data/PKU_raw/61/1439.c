int main(){
int n,i,j,a,sz[20],r[100];
sz[0]=0;
sz[1]=1;
scanf("%d",&n);
for(j=0;j<n;j++)
{
  scanf("%d",&a);
    for(i=2;i<=a;i++)
	{sz[i]=sz[i-1]+sz[i-2];}
  r[j]=sz[a];
}
for(j=0;j<n;j++)
{if(j==0){printf("%d",r[j]);}
 else{printf("\n%d",r[j]);}
}
return 0;
}