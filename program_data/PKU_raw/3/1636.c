int main(){
int n,k,sz[1000],b=0,c,q,i,j,e;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++){
scanf("%d",&sz[i]);
}
for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		q=sz[i]+sz[j];
		if(q==k) 
		{
			printf("yes");
			return 0;
		}
	}
}
printf("no");
//for(e=0;e<b;e++)
   //printf("%d ",q[e]);
/*for(e=0;e<b;e++)
{
	c=q[e]-k;
    if(c==0)
	{
		printf("yes");
		return 0;
	}
}
if(c!=0)
{
	printf("no");
}*/

return 0;
}


