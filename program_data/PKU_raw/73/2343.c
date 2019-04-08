int main()
{
	int a[5][5];
	int i,j,max,min,k,l=0,p;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<5;i++)
	{
            p=0;
			max=a[i][0];
		for(j=1;j<5;j++)
		{
			
			if(max<a[i][j]){
				max=a[i][j];
				p=j;
			}
		}
         min=a[0][p];
		for(k=0;k<4;k++)
			if(min>a[k+1][p])
				min=a[k+1][p];
		if(max==min)
		{printf("%d %d %d",i+1,p+1,a[i][p]);
		l++;
		}
		else continue;
	}
		if (l==0)
		{printf("not found");}
		return 0;
}