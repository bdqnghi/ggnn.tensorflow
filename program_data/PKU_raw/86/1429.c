int main()
{
 	int n,m,i,k,sum,sum1,cs;
 	int js[20];
 	scanf("%d",&n);
 	for(i=0;i<n;i++){
			scanf("%d",&m);
			if(m==0) printf("60\n");
			else{
				for(k=0;k<m;k++) scanf("%d",&js[k]);					
				sum=0;
				for(k=0;k<m;k++){
					sum1=sum;
					sum=js[k]+3*(k+1);
					if(sum>60) break;
					}
				if(sum<60){
					cs=js[m-1]+60-sum;
					}
				else if(sum>=60&&sum<=63){
					cs=js[k];
					}
				else if(sum>63){
					cs=js[k-1]+60-sum1;
					}
				printf("%d\n",cs);
				}
			}
 	scanf("%d",&n);
    return 0;
}
