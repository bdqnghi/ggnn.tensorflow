int main(){
int n,k,i,t;
scanf("%d%d",&n,&k);
int sz[1000];
for(i=0;i<n;i++){
	scanf("%d",&sz[i]);
	}

for(i=0;i<n;i++){
	for(t=0;t<n;t++)
	{
		if(sz[i]+sz[t]==k){
		printf("yes");
		break;
		}
	}
	if(sz[i]+sz[t]==k){break;}
}
if(i==n&&t==n)
{
	printf("no");
}

return 0;
}