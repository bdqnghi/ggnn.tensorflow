int main()
{
	int k,a,n,i;
	double x[100][1000],sum1,sum2,pj,s;
	scanf("%d",&k);
	for(a=0;a<k;a++){
		sum1=0;pj=0;
	           scanf("%d",&n);
			   for(i=0;i<n;i++){
                                         scanf("%lf",&x[a][i]);


				   sum1+=x[a][i];}
			   pj=(double)sum1/n;
			   sum2 = 0;
			   for(i=0;i<n;i++){
			   sum2+=(double)(x[a][i]-pj)*(x[a][i]-pj);
			   }
			   s=sqrt(sum2/n);
			   printf("%.5f\n",s);

	}


	
	return 0;
}

