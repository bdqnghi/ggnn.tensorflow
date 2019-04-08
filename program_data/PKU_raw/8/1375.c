int a[2][5000],b[2],k;
void ppt(int k)
{
	for(int i=0;i<b[k]-1;i++)
		for(int j=0;j<b[k]-1-i;j++)
			if(a[k][j]>a[k][j+1])
			{
				int tr;
					tr=a[k][j];
					a[k][j]=a[k][j+1];
					a[k][j+1]=tr;
			}
}

int main(){
	cin>>b[0]>>b[1];
	for( k=0;k<=1;k++)
	{
		for(int m=0;m<b[k];m++)
			cin>>a[k][m];
		ppt(k);
		for(int m=0;m<b[k];m++){
				if(k==0&&m==0)	cout<<a[k][m];
				else cout<<" "<<a[k][m];
	}}
return 0;
}