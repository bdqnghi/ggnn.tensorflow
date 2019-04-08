int main(){
	int n,m,num[N],i,j,k,count;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		if(m!=0)
		{
			for(k=0;k<m;k++)
			{
				scanf("%d",&num[k]);
			}
			if(num[m-1]+m*3<60){
				count=60-m*3;
			}
			else
			{
				for(j=0;j<m;j++)
				{
					if(num[j]+j*3<=60&&num[j]+(j+1)*3>=60)
					{
						count=num[j];
						break;
					}
					else if(num[j]+j*3>60)
					{
						count=60-j*3;
						break;
					}
				}
			}
		}
		else count=60;
		printf("%d\n",count);
	}
	return 0;
}