
int main()
{   char name[20],g,x,highestname[20];
    int q[100],b[100],l[100],n,i,j,sum[100]={0},max=0,t,total=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %d %d %c %c %d",name,&q[i],&b[i],&g,&x,&l[i]);
        if((q[i]>80)&&l[i]>=1){
			sum[i]+=8000;
		}
		if(q[i]>85&&b[i]>80){
			sum[i]+=4000;
		}
		if(q[i]>90){
			sum[i]+=2000;
		}
		if(q[i]>85&&x=='Y'){
			sum[i]+=1000;
		}
		if(b[i]>80&&g=='Y'){
			sum[i]+=850;
		}
	
		total+=sum[i];
		if(sum[i]>max){
			max=sum[i];
			t=i;
			for (j=0;name[j]!='\0';j++){

			    highestname[j]=name[j];
			}
			highestname[j]='\0';
		}
	}
    
	printf("%s\n%d\n%d\n",highestname,sum[t],total);
	return 0;
}