
int s[8][8],x,y;

int judge(int m,int n)
{
	int a=1,b=1,ii,jj;
	for(jj=0;jj<y;jj++)
		if(s[m][n]<s[m][jj])a=0;
	for(ii=0;ii<x;ii++)
		if(s[m][n]>s[ii][n])b=0;
	return a*b;
}

int main()
{
	int i,j,tj=0;
	char d;
	cin>>x>>d>>y;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			cin>>s[i][j];
		}
	}
	//cout<<x<<y<<endl;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			//cout<<"cs"<<s[i][j]<<judge(i,j)<<endl;
			if(judge(i,j)>0){
				cout<<i<<"+"<<j<<endl;
				tj++;
			}
		}
	}
	if(tj==0)cout<<"No"<<endl;
	return 0;
}
