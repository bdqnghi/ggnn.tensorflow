int main()
{
	int i,n,age[100],count[4];
	for(i=0;i<4;i++){
		count[i]=0;
	}
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&(age[i]));
		if(1<=age[i]&&age[i]<=18){
			count[0]+=1;
		}
		else if(19<=age[i]&&age[i]<=35){
			count[1]+=1;
		}
		else if(36<=age[i]&&age[i]<=60){
			count[2]+=1;
		}
		else if(age[i]>=61){
			count[3]+=1;
		}
	}
	printf("1-18: ""%.2lf%""%\n",(double)count[0]/n*100);
	printf("19-35: ""%.2lf%""%\n",(double)count[1]/n*100);
	printf("36-60: ""%.2lf%""%\n",(double)count[2]/n*100);
	printf("60??: ""%.2lf%1""%\n",(double)count[3]/n*100);
	return 0;
}
