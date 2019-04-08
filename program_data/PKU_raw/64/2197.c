
int main() {


	int n,m=0,a=0;
	float l=0;
	float D[50];
	int X[11],Y[11],Z[11],p[50],q[50];
	cin>>n;
	for(int i=0;i<n;i++)
	{cin>>X[i];
	cin>>Y[i];
	cin>>Z[i];//?x,y,z??????
	}
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
		{
			D[m]=sqrt((X[i]-X[j])*(X[i]-X[j])+(Y[i]-Y[j])*(Y[i]-Y[j])+(Z[i]-Z[j])*(Z[i]-Z[j]));//???????????????D?
	        p[m]=i;//
	        q[m]=j;//???????????????????
	        m++;
		}
	for(int i=m-1;i>0;i--)
		for(int j=0;j<i;j++)
		{
			if(D[j]<D[j+1])
			{
			    l=D[j];
			    D[j]=D[j+1];
			    D[j+1]=l;

			    a=p[j];
			    p[j]=p[j+1];
			    p[j+1]=a;

			    a=q[j];
			    q[j]=q[j+1];
			    q[j+1]=a;
			}//?????????,???????????????????

		}
	for(int k=0;k<m;k++)//????????????

  printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",X[p[k]],Y[p[k]],Z[p[k]],X[q[k]],Y[q[k]],Z[q[k]],D[k]);

	return 0;
}