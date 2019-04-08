int main(){
	int n;
int tag[10000];
	struct part{
		int start;
		int end;
	};
	struct part number[50000];//???????
	int i,j,max,min,result;	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&number[i].start,&number[i].end);
	}//????
	max=0;
	min=10000;
	result=0;
	
	for(i=0;i<10000;i++) tag[i]=1;//????????1~10000????1????????????????0
	for(i=0;i<n;i++){
			if(number[i].end>max) max=number[i].end;
			if(min>number[i].start) min=number[i].start;
		
	}//?????end????start
	for(i=0;i<n;i++)//{
		for(j=number[i].start;j<number[i].end;j++)//{
	//		if(number[i].start<j<=number[i].end&&tag[j]==1){
				tag[j]=0;
		//	}
	//	}
//	}//?????????tag???0
	for(i=min+1;i<max;i++){
		if(min<i<=max){
			if(tag[i]==1){
				printf("no");
				result=1;
				break;
			}
		}
	}
	if(result==0) printf("%d %d",min,max);
	return 0;
}