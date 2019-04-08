int n,mat[101][101],tp[101][101],sum=0;
void cut(int x)
{
	int min;
	if (x==n-1) return;
	else
	{
		for(int i=0;i<n-x;i++)
		{
			min=mat[i][0];
			for(int j=0;j<n-x;j++)
			{
				if (mat[i][j]<=min)
				{
					min=mat[i][j];
				}
			}
			for(int j=0;j<n-x;j++) mat[i][j]-=min;
		}
		for(int i=0;i<n-x;i++)
		{
			min=mat[0][i];
			for(int j=0;j<n-x;j++)
			{
				if (mat[j][i]<=min)
				{
					min=mat[j][i];
				}
			}
			for(int j=0;j<n-x;j++) mat[j][i]-=min;
		}
		sum+=mat[1][1];
		//for(int i=0;i<n-x;i++){
		//	for(int j=0;j<n-x;j++){
			//	cout<<mat[i][j]<<" ";}
				//cout<<endl;}
		for(int i=0;i<n-x;i++) mat[1][i]=-1;
		for(int i=0;i<n-x;i++) mat[i][1]=-1;
		tp[0][0]=mat[0][0];
		for(int i=2;i<n-x;i++) tp[0][i-1]=mat[0][i];
		for(int i=2;i<n-x;i++){
			tp[i-1][0]=mat[i][0];
			for(int j=2;j<n-x;j++) tp[i-1][j-1]=mat[i][j];}
		//for(int i=0;i<n-x;i++){
		//	for(int j=0;j<n-x;j++){
			//	cout<<tp[i][j]<<" ";}
				//cout<<endl;}
		for(int i=0;i<n-x-1;i++){
			for(int j=0;j<n-x-1;j++){
				mat[i][j]=tp[i][j];}}
		//for(int i=0;i<n-x-1;i++){
		//	for(int j=0;j<n-x-1;j++){
			//	cout<<mat[i][j]<<" ";}
				//cout<<endl;}
		cut(x+1);}
}
void ope()
{
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>mat[i][j];}}
	sum=0;
	cut(0);
	cout<<sum<<endl;
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++) ope();
	return 0;
}
