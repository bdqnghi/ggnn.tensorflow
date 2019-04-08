int main(){
	int n,q=0;
	int i,j;

	struct qujian{
	int begin;
	int end;
	}qujian[50000];
    
	int a[100000]={0},first,last,A=0;
	
	scanf("%d",&n);
    for(i=0;i<n;i++){
		scanf("%d%d",&qujian[i].begin,&qujian[i].end);
	}
	
	first=qujian[0].begin;
    for(i=0;i<n-1;i++){
			
		if(first>qujian[i+1].begin){
			  first=qujian[i+1].begin;
			
		}
	}
	
	last=qujian[n-1].end;
	for(i=0;i<n-1;i++){
			if(qujian[i].end>last){
			  last=qujian[i].end;
			
			}
	}
	for(i=0;i<n;i++){
		for(j=qujian[i].begin*10;j<=qujian[i].end*10;j++){
		a[j]--;
		}
	}
	
	first=first*10;
	last=last*10;
	for(i=first;i<=last;i++){
		if(a[i]==0){
		
		A=9;
		break;
		}
	
	}
	if(A==9){
	   printf("no");
	}else{
	   printf("%d %d",first/10,last/10);
	}
	return 0;
}
