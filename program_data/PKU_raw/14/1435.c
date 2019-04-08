struct score
{
	int num;
	int yuwen;
	int shuxue;
}student[100000];
int max(int a,int b)
{
	return (a>b)?a:b;
}
int min(int a,int b)
{
	return (a<b)?a:b;
}
int main()
{
	int max(int a,int b);
	int total[100000];
	int n,i;
	int max1=0,max2=0,max3=0;
	int maxnum1=0,maxnum2=0,maxnum3=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&student[i].num);
		scanf("%d",&student[i].yuwen);
		scanf("%d",&student[i].shuxue);
		total[i]=student[i].yuwen+student[i].shuxue;
		if(total[i]>=max1){
			if(total[i]==max1){
				max3=max2;
				max2=max1;
				max1=total[i];
				maxnum3=maxnum2;
				maxnum2=max(maxnum1,i+1);
				maxnum1=min(maxnum1,i+1);
			}
			else{
				max3=max2;
				max2=max1;
				max1=total[i];
				maxnum3=maxnum2;
				maxnum2=maxnum1;
				maxnum1=i+1;
			}
		}
		else if(total[i]<max1&&total[i]>=max2){
			
			if(total[i]==max2){
				max3=max2;
				max2=total[i];
				maxnum3=max(maxnum2,i+1);
				maxnum2=min(maxnum2,i+1);
			}
			else{
				max3=max2;
				max2=total[i];
				maxnum3=maxnum2;
				maxnum2=i+1;
			}
		}
		else if(total[i]<max2&&total[i]>=max3){
			if(total[i]==max3){
				max3=total[i];
				maxnum3=min(i+1,maxnum3);
			}
			else{
				max3=total[i];
				maxnum3=i+1;
			}
		}		
	}
	printf("%d %d\n",maxnum1,max1);
	printf("%d %d\n",maxnum2,max2);
	printf("%d %d",maxnum3,max3);
	return 0;
}