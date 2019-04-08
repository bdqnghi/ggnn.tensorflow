int main(){
	int n,i,a,b,total=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		if(a==b){
		}
		else if(a==0&&b==1){
			total++;
		}
		else if(a==0&&b==2){
			total--;
		}
		else if(a==1&&b==0){
			total--;
		}	
		else if(a==1&&b==2){
			total++;
		}
		else if(a==2&&b==0){
			total++;
		}
		else if(a==2&&b==1){
			total--;
		}
	}
	if(total<0){
		printf("B");
	}
	else if(total==0){
		printf("Tie");
	}
	else if(total>0){
		printf("A");
	}
	return 0;
}