int main()
{
	int n,i,j,fir1,fir2,la1,la2,s,a[1000][1000];
	scanf("%d",&n);
	fir1=0;
	for(i=1;i<n+1;i++)
		for(j=1;j<n+1;j++)
		{
			scanf("%d",&a[i][j]);
			if(fir1==0 && a[i][j]==0)
			{
				fir1=i;
				fir2=j;
			}
			if(a[i][j]==0)	
			{
				la1=i;
				la2=j;
			}
		}
	s=(la1-fir1-1)*(la2-fir2-1);
	if(s<=0)
		printf("0");
	else
		printf("%d",s);
	return 0;
}
