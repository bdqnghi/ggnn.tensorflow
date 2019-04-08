int main()
{
	int n;
	scanf("%d",&n);
	int all[100],eff[100];
	double r[100];

	int k=0;
	while(k<n){
		scanf("%d %d",&all[k],&eff[k]);
		k++;
	}
	r[0]=(1.0*(eff[0])*100)/(1.0*(all[0]));

	int i=1;
	while(i<n){
		r[i]=(1.0*eff[i]*100)/(1.0*all[i]);
		if(r[i]-r[0]>5){
			if(i==1){
				printf("better");
			}else{
				printf("\nbetter");
			}
			
		}else{
			if(r[0]-r[i]>5){
				if(i==1){
					printf("worse");
				}else{
					printf("\nworse");
			}
				
			}else{
				if(i==1){
					printf("same");
				}else{
					printf("\nsame");
			}
				
			}
		}
		i++;
	}
	return 0;

	

}