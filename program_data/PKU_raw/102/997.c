void array(double*A,int n)
{
	int i,j,k;
	double t;
	for(i=0;i<n;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(A[j]<A[k])
				k=j;
		}
		if(k!=i)
		{
			t=A[k];
			A[k]=A[i];
			A[i]=t;
		}
	}
}
int main(){
	int i,j,n,m=0,l=0;
	double h,nan[50],nv[50];
	char s[6];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s\n",s);
		scanf("%lf",&h);
	if(s[0]=='m')
	{
		nan[m]=h;
		m++;
	
}
	else
	{
		nv[l]=h;
		l++;
	}
	}
array(nan,m);
for(i=0;i<m;i++)
       printf("%.2lf ",nan[i]);
array(nv,l);
for(i=l-1;i>0;i--)
printf("%.2lf ",nv[i]);
printf("%.2lf",nv[0]);
  return 0;
}