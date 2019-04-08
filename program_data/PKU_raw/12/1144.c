int main()
{	
	int t,sz[15],i=0,j,k,result=0;
	
	scanf("%d",&t);
	while(t!=-1)
	{
		if(t!=0){
			sz[i]=t;
			i++;
		}else{
			for(j=0;j<i;j++)
			{
				for(k=0;k<i;k++)
				{
					if(sz[k]==sz[j]*2){
						result++;
					}
				}
			}
			printf("%d\n",result);
			i=0;
			result=0;
		}
		scanf("%d",&t);
	}
	return 0;

}


		
