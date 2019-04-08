int main ()
{
	char name[100][20]={0};
	char bgb,xb;
	int sc1,sc2,lw,sum[100]={0},s=0;
	int n,max=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",name[i]);			
		scanf("%d %d %c %c %d",&sc1,&sc2,&bgb,&xb,&lw);
		if(sc1>80 && lw>0){
			sum[i]+=8000;
		}
		if(sc1>85 && sc2>80){
			sum[i]+=4000;
		}
		if(sc1>90){
			sum[i]+=2000;
		}
		if(sc1>85 && xb=='Y'){
			sum[i]+=1000;
		}
		if(sc2>80 && bgb=='Y'){
			sum[i]+=850;
		}
		s+=sum[i];
	}
	for(int j=0;j<n;j++){
		if(max<sum[j]){
			max=sum[j];
		}
	}
	for(int k=0;k<n;k++){
		if(sum[k]==max){
			printf("%s\n%d\n%d\n",name[k],sum[k],s);
		    break;
		}
	}
	return 0;
}


