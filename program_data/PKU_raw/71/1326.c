int main()
{
	int n,i,k,e,month[200],y[200],m[200],a,d[200],day[12]={31,28,31,30,31,30,31,31,30,31,30,31},
		dayy[12]={31,29,31,30,31,30,31,31,30,31,30,31},sum[200];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum[i]=0;
		scanf("%d%d%d",&y[i],&month[i],&m[i]);
		if(month[i]>m[i]){
		e=month[i];
		month[i]=m[i];
		m[i]=e;
		}
        if(y[i]%400==0||(y[i]%100!=0&&y[i]%4==0))
		{
		for(k=month[i]-1;k<m[i]-1;k++)
		{
			sum[i]+=dayy[k];
		}
		}
		else{
			for(k=month[i]-1;k<m[i]-1;k++)
			{
				sum[i]+=day[k];
			}
	}}
	for(i=0;i<n;i++)
	{
		if(sum[i]%7==0)
		{
			printf("YES\n");
		}
		else{printf("NO\n");}
	}
	return 0;
}

	    
