

int main()
{
	int n, i ,j=0,num[300];
	double ping=0,cha[300];
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d",&num[i]);
		ping +=(double) num[i]/n;
	}
	
	
	for(i=0;i<n;i++){
		cha[i]=num[i]-ping;
		
	}
	for (i=n-1;i>0;i--){
		for (j=0;j<i;j++){
			if (cha[j]>cha[j+1]){
				double tmp;
				tmp=cha[j+1];
				cha[j+1]=cha[j];
				cha[j]=tmp;
			}
		}
	}
	
	
	if(cha[0]+cha[n-1]>0){
		printf("%.0lf",cha[n-1]+ping);
	}
	else if(cha[0]+cha[n-1]==0){
		printf("%.0lf,%.0lf",ping+cha[0],ping+cha[n-1]);
	}
	else{
		printf("%.0lf",ping+cha[0]);
	}

		
	return 0;
}




	