
int main(){
	int isall,s,t,i,j,k=0,n,max=0,p;
	int sum[100]={0};
	
	for (;;){
		int a[1001]={-1};
		int b[1001]={-1};
		scanf("%d",&n);
		if (n==0) break;
		k++;s=0;
		for (i=1;i<=n;i++)
			scanf("%d",&a[i]);
		for (i=1;i<=n;i++)
			scanf("%d",&b[i]);
		for (i=1;i<=n;i++)
		{
			for (j=i;j<=n;j++)
			{
				if (a[i]<a[j]) {p=a[i];a[i]=a[j];a[j]=p;}
				if (b[i]<b[j]) {p=b[i];b[i]=b[j];b[j]=p;}
			}
		}		
		for (i=1;i<=n;i++)
		{
			max=0;t=0;isall=1;
			for (j=n;j>=1;j--)
			{
				if (a[j]>b[i]) {sum[k]+=200;a[j]=-1;max=1;break;}
				if (a[j]==b[i]) t=j; 
			}
			if (max==1) continue;
			if (t!=0){
				for (j=i+1;j<=n;j++)
					if (a[t]!=a[t+j-i] && a[t]!=b[j] && a[t+j-i]<=b[j]) {isall=0;break;}
			}
			if (t!=0 && isall==1)
				{a[t]=0;}
			else
			{
				
				for (j=n;j>=1;j--)
				{
					if (a[j]!=-1 && a[j]<b[i]) {sum[k]-=200;a[j]=-1;break;}
					if (a[j]!=-1)  {a[j]=-1;break;}
				}
			}
		}
		
	}
	for (i=1;i<=k;i++)
		printf("%d\n",sum[i]);
}
