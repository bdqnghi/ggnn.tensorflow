int main(){
	int n;
	int result;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		if(a==0){
			result=60;
		}else{
			int cishu[60];
		    for(int b=0;b<a;b++){
			    scanf("%d",&cishu[b]);
			}
			for(int c=0;c<a;c++){
				if(cishu[c]+3*c+3<=60){
					result=57-3*c;
				}else if(cishu[c]+3*c<60&&cishu[c]+3*c+3>60){
                    result=cishu[c];
					break;
				}
			}
		}
	printf("%d\n",result);	
	}
	return 0;
}