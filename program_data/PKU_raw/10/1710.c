
int height[26];

int cal(int N,int M){//N&#206;a&#191;aê&#188;±è&#189;&#207;?&#196;êy?&#196;&#206;&#187;&#214;&#195;?&#172;M&#206;aê?&#207;&#194;?&#196;êy?&#196;&#184;&#246;êy?&#172;N+M=×ü?&#196;êy&#184;&#246;êy 
	int i,max,sub;
	max=0;
	if(M==0){
		return 1;
	}
	for(i=N+1;i<=N+M;i++){
		if(height[N]>=height[i]){
			sub=cal(i,N+M-i);
			if(sub>=max){
				max=sub;
			}
		}
	} 
	return max+1;
}

int main()
{
	int k,i;
	scanf("%d\n",&k);
	height[0]=10000000; 
	scanf("%d",&height[1]);
	for(i=1;i<=k-1;i++){
		scanf(" %d",&height[i+1]);
	}
	
	printf("%d",cal(0,k+1)-2);
	
	return 0;
 } 
 
