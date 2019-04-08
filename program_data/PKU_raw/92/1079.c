
int main()
{
	int ma(int n);
	int n;
	for(;1;){
		scanf("%d",&n);
		if(n==0){
			break;
		}
		ma(n);
	}
	return 0;
}
int ma(int n){
	int sum=0,i,j,a=1,b;
	int wang[1001],tian[1001];
	int endw,endt,staw=0,stat=0;
	endw=n-1;
	endt=n-1;
	for(i=0;i<n;i++){
		scanf("%d",&tian[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&wang[i]);
	}
	for(i=0;i<n;i++){
		for(j=n-1;j>i;j--){
			if(tian[j]>tian[j-1]){
				b=tian[j];
				tian[j]=tian[j-1];
				tian[j-1]=b;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=n-1;j>i;j--){
			if(wang[j]>wang[j-1]){
				b=wang[j];
				wang[j]=wang[j-1];
				wang[j-1]=b;
			}
		}
	}
	for(;stat<=endt;){
		if(tian[stat]>wang[staw]){
			sum+=200;
			staw++;
			stat++;
		}
		else if(tian[stat]<wang[staw]){
			sum-=200;
			endt--;
			staw++;
		}
		else if(tian[stat]==wang[staw]){
			for(;(a==1);){
				if(tian[endt]>wang[endw]){
					sum+=200;
					endt--;
					endw--;
				}
				else if(tian[endt]<=wang[endw]){
					if(tian[endt]<wang[staw]){
						sum-=200;
					}
					staw++;
					endt--;
					a=0;
				}
			}
			a=1;
		}
	}
	printf("%d\n",sum);
	return 0;
}