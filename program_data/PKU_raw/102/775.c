

double a[45];int m=0;
double b[45];int f=0;
char sex[10];


int main()
{
	int n;
	scanf("%d",&n);
	
	int i,j=0,k=0;
	for(i=0;i<n;i++)
	{
		cin>>sex;
		if(strcmp(sex,"male")==0)
			cin>>a[m++];
//			scanf("%g",&a[m++]);
		else
			cin>>b[f++];
//			scanf("%g",&b[f++]);
	}
//	cout<<"male"<<m<<"famle"<<f<<endl;
	sort(a,a+m);
	sort(b,b+f);
	if(m==0)
		goto l;
	for(i=0;i<m;i++)
		printf("%.2f ",a[i]);
//		cout<<a[i]<<" ";
	if(f==0)
		goto l2;
l:	for(i=f-1;i>0;i--)
		printf("%.2f ",b[i]);
//		cout<<b[i]<<" ";
	printf("%.2f\n",b[0]);
l2:	n=0;
	return 0;
} 