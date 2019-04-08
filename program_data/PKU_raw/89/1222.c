int main()
{
	int n=0,a[10000]={0},b[10000]={0},i;
	cin >>n;
	for(i=0;;i++)
	{
		int p,q;
		cin >>p >>q;
		if(p==0&&q==0)
			break;
		else{
		    a[p]=1;
		    b[q]=b[q]+1;
		}
	}
	for(i=0;i<n;i++)
		if(a[i]==0&&b[i]==n-1)
		{
			cout <<i <<endl;
			break;
		}
	if(i==n)
		cout <<"NOT FOUND" <<endl;
	return 0;
}
