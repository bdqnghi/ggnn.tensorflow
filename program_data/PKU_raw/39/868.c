int main()
{
	int n,count[100]={0},score1[100],score2[100],num[100],i;
	char name[100][30],a[100][2],b[100][2];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d%d%s%s%d",name[i],&score1[i],&score2[i],a[i],b[i],&num[i]);
        if(score1[i]>80&&num[i]>=1)
			count[i]+=8000;
		if(score1[i]>85&&score2[i]>80)
			count[i]+=4000;
		if(score1[i]>90)
			count[i]+=2000;
		if(score1[i]>85&&strcmp(b[i],"Y")==0)
			count[i]+=1000;
		if(score2[i]>80&&strcmp(a[i],"Y")==0)
			count[i]+=850;
	}
    int max=count[0],m=0,sum=count[0];
	for(i=1;i<n;i++)
	{
		sum+=count[i];
		if(count[i]>max)
		{
			max=count[i];
			m=i;
		}
	}
	printf("%s\n%d\n%d",name[m],count[m],sum);
	return 0;
}
