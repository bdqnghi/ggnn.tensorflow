
int main(){
	int as[1000],n,k,c;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&(as[i]));
	}
	int d=0;
	for(int j=0;j<n;j++)
	{
		for(int l=0;l<n;l++)
		{
            c=as[j]+as[l];
			if(c==k)
			{
				printf("yes");
				d++;
				break;
			}
		}
		if(c==k)
			break;
	}
	if(d==0)
		printf("no");
	return 0;
}
