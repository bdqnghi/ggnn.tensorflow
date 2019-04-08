

int main() {
	int n;
	cin >>n;
	const int x=n;
    int a[x];
    for (int i=0;i<=x-1;i=i+1)
    	cin >>a[i];
    int max=0;
    for (int ii=0;ii<=x-1;ii++)
    {
    	if (a[ii]>max)
    		max=a[ii];
    }
    int b[max];
    b[0]=1;
    b[1]=1;
    for (int j=2;j<=max-1;j=j+1)
    	b[j]=b[j-1]+b[j-2];
    for (int k=0;k<=x-1;k=k+1)
    {
    	int t=a[k]-1;
        cout <<b[t]<<endl;
    }
return 0;
}
