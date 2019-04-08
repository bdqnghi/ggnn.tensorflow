int main()
{
	int d[8][8],m,n,i,j,t,a,b,p=0,q=0;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&d[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(j==0){
				t=d[i][0];
				a=i;
				b=0;
			}
			else if(d[i][j]>t){
				t=d[i][j];
				a=i;
				b=j;
			}
		}
		for(i=0;i<m;i++){
			if(d[a][b]<=d[i][b]){
				p++;
			}
		}
		if(p==m)
		{
			printf("%d+%d",a,b);
			break;
		}
		else
		{
			continue;
		}
	}
	if(p!=m)
	{
		printf("No");
	}
	return 0;
}

