// shang.cpp : Defines the entry point for the console application.
//


int main(int argc, char* argv[])
{
	int num;
	scanf("%d",&num);
	int i,j;
	for(i=0;i<num;i++){
		int n;
		scanf("%d",&n);
		double x[101],sum=0,ave,final=0,result;
		for(j=0;j<n;j++){
			scanf("%lf",&*(x+j));
			sum=sum+*(x+j);
		}
		ave=sum/n;
		for(j=0;j<n;j++){
			final=final+(*(x+j)-ave)*(*(x+j)-ave);
		}
		result=sqrt(final/n);
		printf("%.5f\n",result);
	}
	return 0;
}

