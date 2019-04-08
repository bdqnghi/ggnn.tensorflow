
int k=0;
void findrouteA(int *ay,int n,int m);

int main()
{
	int a,b;
	int ay[10]={0},by[10]={0};//????a,b???
	int i,j;
	int end1,end2;
	int an,am,bn,bm;//??a,b?????????
	scanf("%d%d",&a,&b);
	for(i=1,j=1;j<a+1;i++,j+=j);
	an=i-1;
	am=a-( int )pow(2,i-2)+1;

	for(i=1,j=1;j<b+1;i++,j+=j);
	bn=i-1;
	bm=b-( int )pow(2,i-2)+1;//you cuo

	
	findrouteA(ay,an,am);
	end1=k-1;
	k=0;
	findrouteA(by,bn,bm);
	end2=k-1;


	for(end1,end2;ay[end1]==by[end2];end1--,end2--);
	printf("%d",ay[end1+1]);
	return 0;
}
void findrouteA(int *ay,int n,int m)
{
	if(n==1)
		ay[k++]=1;
	else
	{
		ay[k++]=( int )pow(2,n-1)-1+m;
		findrouteA(ay,n-1,( int )(m+1)/2);
	}
}

