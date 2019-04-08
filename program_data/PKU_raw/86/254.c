void main(){
	int num[20]={0};
	int n,x,i,j,m;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&x);
		if(x==0)printf("60\n");
		else {
			for(j=0;j<x;j++)scanf("%d",&num[j]);
			j--;
			if(num[j]+(j+1)*3<=60){printf("%d\n",60-(j+1)*3);continue;}
			else j--;
			for(;j>=0;j--){
				if(num[j]+(j+1)*3>60)continue;
				else {
					m=60-(j+1)*3;
					if(m<=num[j+1]){printf("%d\n",m);break;}
					else {printf("%d\n",num[j+1]);break;}
				}
			}
		}
	}
}
