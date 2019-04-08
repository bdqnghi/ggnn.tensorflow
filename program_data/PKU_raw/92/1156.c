int money(int n){
	int i,j,m,ans=0,mid,head=0,tailt=n-1,tailk=n-1;
	int *k=(int*)malloc(sizeof(int)*n);
	int *t=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
		scanf("%d",&t[i]);
	for(i=0;i<n;i++)
		scanf("%d",&k[i]);
	for(i=0;i<n;i++)
		for(j=0;j<n-1;j++)
			if(k[j]<k[j+1]){
				mid=k[j];
				k[j]=k[j+1];
				k[j+1]=mid;
			}
	for(i=0;i<n;i++)
		for(j=0;j<n-1;j++)
			if(t[j]<t[j+1]){
				mid=t[j];
				t[j]=t[j+1];
				t[j+1]=mid;
			}
    for(i=0;i<n;i++)
        {
            if(t[head]>k[i])
            {
                head++;
                ans+=200;
            }
            else if(t[head]<k[i])
            {
                tailt--;
                ans-=200;
            }
            else if(t[head]==k[i])
            {
                for(j=tailt,m=tailk;j>=head;j--,m--)
                {
                    if(t[j]>k[m])
                    {
                        ans+=200;
                        tailt--;
                        tailk--;
                    }
                    else
                     {
                        if(t[j]<k[i]) ans-=200;
                        tailt=--j;
                        tailk=m;
                        break;               
                     }
                }
            }

            if(head>tailt) break;
        }
	free(k);
	free(t);
	return ans;
}
void main(){
	int n;
	while(scanf("%d",&n)==1&&n!=0)
		printf("%d\n",money(n));
}