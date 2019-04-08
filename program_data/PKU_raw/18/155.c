//********************************
//*  ????????????    *
//*  ??: ??                  *
//*  ???12?6?               *
//********************************
void min(int a[],int b);
int main()
{
	int n=0,i=0,sum =0;//sum??z[1][1]??
	cin>>n;
	const int p=n;//p????????n???
	for(i=0;i<p;i++,sum=0){
		int z[101][101]={0},z2[101]={0};
		int j=0,k=0;
		n=p;
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				cin>>z[j][k];
				do{
					for(j=0;j<n;j++)
						min(z[j],n);//????
							for(j=0;j<n;j++){
								for(k=0;k<n;k++)
									z2[k]=z[k][j];//z2???????
										min(z2,n);//????????min??
								for(k=0;k<n;k++)
									z[k][j]=z2[k];//???z2?????z??
							}
								sum+=z[1][1];
								for(j=0;j<n;j++)
									for(k=1;k<n-1;k++)
										z[j][k]=z[j][k+1];//???????????????
								for(j=0;j<n;j++)
									for(k=1;k<n-1;k++)
										z[k][j]=z[k+1][j];
								n--;
				}
				while(n>1);
				cout<<sum<<endl;
	}
	return 0;
}
void min(int a[],int b)//??????????????????????
{
	int w=0,y=10000;
	for(w=0;w<b;w++)
	{
		if(a[w]<y)
			y=a[w];//?????
	}
		for(w=0;w<b;w++)
			a[w]=a[w]-y;
}