
int main(int argc, char* argv[]){
	int n,age[100],i,team[4]={0};
	double per[4];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&age[i]);
	}
	for(i=0;i<n;i++){
		if (age[i]<19) team[0]++;
		else if(age[i]>18&&age[i]<36) team[1]++;
		else if(age[i]>35&&age[i]<61) team[2]++;
		else if(age[i]>59) team[3]++;
	}
	per[0]=(double)team[0]/n*100;
	per[1]=(double)team[1]/n*100;
	per[2]=(double)team[2]/n*100;
	per[3]=(double)team[3]/n*100;
	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",per[0],per[1],per[2],per[3]);

	

	return 0;
}
