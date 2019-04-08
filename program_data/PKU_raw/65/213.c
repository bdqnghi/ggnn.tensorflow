int main(){
	int n;
	scanf("%d",&n);
	int i;
	int a[n],b[n];
	for(i=0;i<n;i++){
	  scanf("%d %d",&(a[i]),&(b[i]));
	}
	int c,d;
	c=0;
	d=0;
	for(i=0;i<n;i++){
		if(a[i]==0&&b[i]==1){
		   c++;
		}else if(a[i]==0&&b[i]==0){
		   c++;
		   d++;
		}else if(a[i]==0&&b[i]==2){
		   d++;
		}else if(a[i]==1&&b[i]==0){
		   d++;
		}else if(a[i]==1&&b[i]==1){
		   c++;
		   d++;
		}else if(a[i]==1&&b[i]==2){
		   c++;
		}else if(a[i]==2&&b[i]==1){
		   d++;
		}else if(a[i]==2&&b[i]==0){
		   c++;
		}else if(a[i]==2&&b[i]==2){
		   c++;
		   d++;
		}
	}
	if(c>d){
	   printf("A");
	}else if(c<d){
	   printf("B");
	}else if(c==d){
	   printf("Tie");
	}
   return 0;
}