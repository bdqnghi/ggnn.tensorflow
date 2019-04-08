
 
 
int main()
{
	int m=0,i=0,a[100],b[100],j=0,sz[100];
	double sz1[100],sum[100];
	scanf("%d",&m);
	for(i=0;i<m;i++){
	scanf("%d",&(sz[i]));
	}

	for(i=0;i<m;i++){
			sum[i]=0;
			 for(j=0;j<sz[i];j++){

             a[0]=2;
			 b[0]=1;
				 b[j+1]=a[j];
				 a[j+1]=a[j]+b[j];
				 sz1[j]=a[j]*1.0/b[j];
                 sum[i]+=sz1[j];
	}
	}
	for(i=0;i<m;i++){
	printf("%.3lf\n",sum[i]);
	}
	return 0;
}


 