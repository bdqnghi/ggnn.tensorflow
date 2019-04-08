int main()
{
	int sum[21];
	int n,cishu,standred;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&cishu);
	
	    sum[cishu]=60;
	    for(int k=0;k<cishu;k++){
		    scanf("%d",&sum[k]);
	    }
	    for(int t=0;t<cishu+1;t++){
		    standred=60-sum[t]-3*t;
		    if(standred<0){
			    printf("%d\n",60-3*t);
			    break;
		    }else if(standred>-1 && standred<4 ){
		    	printf("%d\n",sum[t]);
		        break;
		    }
	
		}
	}
	return 0;
}
