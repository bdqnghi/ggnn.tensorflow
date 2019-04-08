int main()
{
	int n;
	scanf("%d",&n);
	float all[100],fun[100],per[100];
	int i;
	for(i=0;i<n;i++){
		scanf("%f%f",&all[i],&fun[i]);
		per[i]=fun[i]/all[i];
	}
	for(i=1;i<n-1;i++){
		if(per[i]>=per[0]){
			if(per[i]-per[0]>0.05) {printf("better\n");}
			else {printf("same\n");}
		}
		if(per[i]<per[0]){
			if(per[0]-per[i]>0.05) {printf("worse\n");}
			else {printf("same\n");}
		}
	}
	if(per[n-1]>=per[0]){
			if(per[i]-per[0]>0.05) {printf("better");}
			else {printf("same");}
		}
		if(per[n-1]<per[0]){
			if(per[0]-per[i]>0.05) {printf("worse");}
			else {printf("same");}
		}
	return 0;
}
	