int main()
{
	int n,m,i,j,s,zs,sz[20],sj[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		if(m==0){
			zs=60;
			printf("%d\n",zs);
		}
		else{
			for(j=1;j<m+1;j++){
				scanf("%d",&sz[j]);
				sj[j]=sz[j]+3*j;
			}
			if(sj[m]<=60)
				zs=60-3*m;
			else{
				if((sj[m]-3<=60))
					zs=sz[m];
				else{
					if(sj[m-1]<=60)
						zs=63-3*m;
					else
						if((sj[m-1]-3)<=60)						
							zs=sz[m-1];
						else
							zs=66-3*m;
				}
			}
			printf("%d\n",zs);		
		}
	}
	scanf("%d",1);
	return 0;
}