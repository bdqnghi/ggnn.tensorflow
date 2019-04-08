
int fen(int x,int y);

int main(){
	int n,i,m[500];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
		printf("%d\n",fen(m[i],2));
	}
	return 0;
}

int fen(int x,int y){
	int j,k;
	int result=1;
	if(x<y)
		return 0;
	for(j=y;j<x;j++)
	{
		if(x%j==0)
		result+=fen(x/j,j);
	}
	return result;
}