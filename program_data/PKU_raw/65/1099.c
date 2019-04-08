int main()
{
	int n,i=0,a=0,b=0;
	struct cq1{
		int x,y;
	} cq[200];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&(cq[i].x),&(cq[i].y));
	}
	for(i=0;i<n;i++){
		if(((cq[i].x==0)&&(cq[i].y==1))||((cq[i].x==1)&&(cq[i].y==2))||((cq[i].x==2)&&(cq[i].y==0))){
			a=a+1;
		}else if(((cq[i].y==0)&&(cq[i].x==1))||((cq[i].y==1)&&(cq[i].x==2))||((cq[i].y==2)&&(cq[i].x==0))){
			b=b+1;
		}
	}
	if(a>b){
		printf("A");
	}
	else if(a<b){
		printf("B");
	}else if(a==b){
		printf("Tie");
	}
	return 0;
}

