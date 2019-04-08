int main(int argc, char* argv[])
{
	int a[8][8],i,j,m,n,t1,t2,k=0,k2=0;
	scanf("%d,%d",&m,&n);
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);
		}
		
	for(j=0;j<n;j++)
	{
		t1=a[0][j];t2=0;
		for(i=1;i<m;i++){
			if(a[i][j]<t1){
				t1=a[i][j];t2=i;
		}
		}
		for(i=0;i<m;i++){
			if(a[t2][i]>t1){ k=1;break;}
			else k=0;
		}		
		if(k==0){printf("%d+%d\n",t2,j);k2=1;}
		k=0;
		
	}
	if(k2==0) printf("No");
	return 0;
}

