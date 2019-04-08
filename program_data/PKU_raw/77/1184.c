int main()
{
	char a[110];
	int  t[110],i=0,j=0,b[60],g[60],n=0,d=1,k=0;
	for(i=0;i<110;i++)t[i]=0;
	cin.getline(a,110,'\n');
	for(i=0;a[i]!='\0';)i++;
	n=i;
	for(d=1;d<=n-1;d=d+2)
	{for(i=0;i<n-d;i++)
	{if(a[i]!=a[0]||t[i]==1||t[i+d]==1)continue;
	else{
	if(a[i]!=a[i+d]){
		b[k]=i;g[k]=i+d;t[i]=1;t[i+d]=1;k++;
	}
	}
	}
	}
	for(i=0;i<k-1;i++){
		for(j=0;j<k-1-i;j++){
			int tem;if(g[j]>g[j+1]){
			tem=g[j];g[j]=g[j+1];g[j+1]=tem;tem=b[j];b[j]=b[j+1];b[j+1]=tem;
			}
		}
	}
	for(i=0;i<k;i++)
		cout<<b[i]<<" "<<g[i]<<endl;
	return 0;
}