int main()
{
	int n,m,t[60],i,j,p[1000]={0},a,ms;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		if(m==0){
			p[i]=60;
		}else{
		for(j=0;j<m;j++){
			scanf("%d",&t[j]);
		}
		for(j=0;j<m;j++){
			ms=t[j]+3*j;
			if(ms>=60){
				
				p[i]=60-3*j;
				break;
			}
			else if(ms<60&&ms>57){
				p[i]=60-(3*j+60-ms);
				break;
			}else{
				p[i]=60-(3*(j+1));
			}
		}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",p[i]);
	}
	
	return 0;

}
