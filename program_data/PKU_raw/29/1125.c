int main()
{
	int i,j,k,n[1000],m,fz[1000],fm[1000];
	double sum[1000],fs;
	scanf("%d",&m);
	for(j=0;j<m;j++){
		scanf("%d",&n[j]);
	}
	for(j=0;j<m;j++){
	    fz[0]=2;
	    fm[0]=1;
	    fz[1]=3;
	    fm[1]=2;
		fs=3.500;
	    if(n[j]==1){
			sum[j]=2.000;
		}else if(n[j]==2){
		    sum[j]=3.500;
		}else if(n[j]>2){
		    for(i=2;i<n[j];i++){
				fz[i]=fz[i-1]+fz[i-2];
			    fm[i]=fm[i-1]+fm[i-2];
		    	fs+=(fz[i]*1.000/fm[i]*1.000);
			}
			sum[j]=fs;
		}
	}
	for(j=0;j<m;j++){
		 printf("%.3lf\n",sum[j]);
	}
	return 0;
}