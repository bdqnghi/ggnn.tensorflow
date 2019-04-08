int main(){
        int n,shiyan[999],youxiao[999];
		double xo,x;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
		    scanf("%d %d",&shiyan[i],&youxiao[i]);
		}
		xo=1.0*youxiao[0]/shiyan[0];
		for(int w=1;w<n;w++){
		   x=1.0*youxiao[w]/shiyan[w];
		   if(xo-x>0.05){
		        printf("worse\n");
		   }
		   else if(x-xo>0.05){
		        printf("better\n");
		   }
		   else if(x-xo<=0.05&&xo-x<=0.05){
		        printf("same\n");
		   }
		}
		return 0;
}
