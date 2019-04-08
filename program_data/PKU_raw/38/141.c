int main()
{
	int k,n,i;double a[100],*p;         //??????????????
	cin >> k;                          //???????
	while(cin >> n)                    //?????
	{
		p=a;double sum=0,num=0;
		memset(p,0,sizeof(p));        
		for(i=0;i<n;i++)
			cin >> p[i];
		for(i=0;i<n;i++)                    //?????
			sum=sum+p[i];
		sum=sum/(double)n;
		for(i=0;i<n;i++)
			num=num+(p[i]-sum)*(p[i]-sum);   //?????
		num=num/(double)n;
		num=sqrt(num);
		printf("%.5f\n",num);                //???
	}
	return 0;
}
