int main(){
	int A=0,B=0;
	int a,b,n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		if(a==0&&b!=0){
			if(b==2){
				B++;;
			}
			else 
			A++;
		}
		else if(a==2&&b!=2){
			if(b==0){
			A++;
			}
			else 
			B++;
		}
		else if(a==1&&b!=1){
			if(b==0){
			B++;
			}
			else 
			A++;
		}
	}
	if(A==B){
		printf("Tie");
	}
	else if(A>B){
		printf("A");
	}
	else {
		printf("B");
	}
	return 0;
}

