int main(){
	int n,i,num,max1,max2,exc;
	i=1;
	max1=0;
	max2=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&num);
		if(i==1){max1=num;}
		else if(i==2){
			if(max1>=num){
				max2=num;
			}else if(num>max1){
				exc=max1;
				max2=exc;
				max1=num;
			}
		}else if(i>=3){
			if(num>max1){
			    exc=max1;
				max2=exc;
				max1=num;
			}else if(num>max2){
				max2=num;
			}
		}
	}
		printf("%d\n%d\n",max1,max2);
		return 0;
	}

	