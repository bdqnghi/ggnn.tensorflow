int main()
{
    int n, i;
	scanf("%d", &n);
	int age[100], std[4]={0};
	for(i=0;i<n;i++){
		scanf("%d", &age[i]);
		if(age[i]<19){
			std[0]++;
		}
		else if(age[i]>18&&age[i]<36){
			std[1]++;
		}
		else if(age[i]>35&&age[i]<61){
			std[2]++;
		}
		else if(age[i]>60){
			std[3]++;
		}
	}
	for(i=0;i<4;i++){
		if(i==0){
		    printf("1-18: %.2lf%%\n", 0.1f*std[i]/n*1000);
		}
		if(i==1){
			printf("19-35: %.2lf%%\n", 0.1f*std[i]/n*1000);
		}
        if(i==2){
			printf("36-60: %.2lf%%\n", 0.1f*std[i]/n*1000);
		}
        if(i==3){
			printf("60??: %.2lf%%\n", 0.1f*std[i]/n*1000);
		}
	}
	return 0;
}