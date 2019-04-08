int main(){
    int n,t,i=0,j=3,k=2,p=0,w=3,v=3,x=0,y=0,z=1;
	scanf("%d",&n);
	t=(n-6)/2;
    int num[t];
	printf("6=3+3\n");
	for(i=0;i<t;i++){
		num[i]=6+2*(i+1);
	}
	int shu[n];
	for(w=3;w<=(n-3);w++)
	{
		for(v=2;v<=sqrt(w);v++)
		{
			if(w%v==0)
			{
				break;
			}
		}
		if(v>sqrt(w))
		{
			shu[p]=w;
			p++;
		}
	}
	for(x=0;x<t;x++){
		y=0;
		for(y=0; ;y++){
			z=1;
			for(z=1; ;z++){
				if(num[x]==shu[y]+shu[z]){
					printf("%d=%d+%d\n",num[x],shu[y],shu[z]);
					break;
				}
				if(shu[z]>(3+num[x])){
					break;
				}
			}
			if(num[x]==shu[y]+shu[z]){
				break;
			}
		}
	}
	return 0;
}
