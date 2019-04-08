int main()
{
	int n,x[199][2],i,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d",&x[i][0],&x[i][1]);
	for(a=b=0,i=0;i<n;i++){
		if((x[i][0]==0&&x[i][1]==1)||(x[i][0]==1&&x[i][1]==2)||(x[i][0]==2&&x[i][1]==0))
			a++;
		else
			if((x[i][01]==0&&x[i][0]==1)||(x[i][1]==1&&x[i][0]==2)||(x[i][1]==2&&x[i][0]==0))
				b++;
	}
	if(a>b)
		printf("A\n");
	else
		if(a<b)
			printf("B\n");
		else
			printf("Tie\n");
	return 0;
}
