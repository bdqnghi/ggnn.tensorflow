int main(){
	int i,n,x1=0,x2=0,x3=0,x4=0;
	double y1,y2,y3,y4;
	int sz[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&(sz[i]));
		if(sz[i]<=18){
			x1=x1++;
		}
		else if(sz[i]>=19&&sz[i]<=35){
			x2=x2++;
	}
		else if(sz[i]>=36&&sz[i]<=60){
			x3=x3++;
		}
		else if(sz[i]>=61){
			x4=x4++;
		}
	}
	y1=(double)x1*100/n;
	y2=(double)x2*100/n;
	y3=(double)x3*100/n;
	y4=(double)x4*100/n;
	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",y1,y2,y3,y4);
	return 0;
}
