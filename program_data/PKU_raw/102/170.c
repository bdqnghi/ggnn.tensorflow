
int compare1(const void*a,const void*b){
	return *(int*)a-*(int*)b;
}
int compare2(const void*a,const void*b){
	return *(int*)b-*(int*)a;
}
int main()
{
	float a[41],b[41];
	for(int i=0;i<41;i++)
	{
		a[i]=-1;
		b[i]=-1;
	}
	int n;
	cin>>n;
	int aa=0,bb=0;
	for(int i=0;i<n;i++)
	{
		char temp[10];
		cin>>temp;
		float height;
		cin>>height;
		if(temp[0]=='m')
		{
			a[aa]=height;
			aa++;
		}
		else
		{
			b[bb]=height;
			bb++;
		}
	}
	qsort(a,aa,sizeof(int),compare1);
	qsort(b,bb,sizeof(int),compare2);
	for(int i=0;i<aa;i++)
		printf("%.2f ",a[i]);
	for(int i=0;i<bb;i++)
		if(i==bb-1)printf("%.2f",b[i]);
		else printf("%.2f ",b[i]);
return 0;
}
