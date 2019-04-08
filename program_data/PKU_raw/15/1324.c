int main()
{
	int a[1000][1000],n,i,j,heng,shu;
	heng=0;
	shu=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)heng++;
			if((a[i][j]==0)&&(a[i][j+1]!=0))break;
		}
		if((a[i][j]==0)&&(a[i][j+1]!=0))break;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j][i]==0)shu++;
			if((a[j][i]==0)&&(a[j+1][i]!=0))break;
		}
		if((a[j][i]==0)&&(a[j+1][i]!=0))break;
	}
	if(heng!=shu)printf("%d\n",abs(heng-shu)+1);
         else
         printf("%d\n",(heng-2)*(heng-2));	
return 0;
}
