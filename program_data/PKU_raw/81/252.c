int main()
{
	int i,j,b,c,d,e,f,g,h,k,m,n,t,a,x[500][500],y[10];
	

	for(i=0;i<=4;i++){
		for(j=0;j<=4;j++){
			scanf("%d",&x[i][j]);
		}
	}
	scanf("%d%d",&a,&b);
	if(a>=0&&a<=4&&b>=0&&b<=4){
		j=0;
	
		for(j=0;j<=4;j++){
		y[j]=x[a][j];
		x[a][j]=x[b][j];
		x[b][j]=y[j];
	}
	i=0;
	j=0;
		for(i=0;i<=4;i++){
		for(j=0;j<=4;j++){
			if(j==0)printf("%d",x[i][j]);
			else {
				if(j==4)printf(" %d\n",x[i][j]);
			else printf(" %d",x[i][j]);
		}
	}
	}
	}
	else printf("error");
	
	
	return 0;
}
