
struct
{
int ID[100000],Chinese[100000],Maths[100000];
}stu;
int main()
{
	int n,i,sum[100000],max1=0,max2=0,max3=0,num1,num2,num3;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d %d %d",&stu.ID[i],&stu.Chinese[i],&stu.Maths[i]);
	}
	i=0;
	while(stu.ID[i]>0){
	sum[i]=stu.Chinese[i]+stu.Maths[i];
	i++;
	}
	i=0;
	while(i<n){
		if(sum[i]>max1){
		max1=sum[i];
		num1=i;
		}
		i++;
	}
	i=0;
	while(i<n){
		if(sum[i]>max2&&sum[i]<=max1&&i!=num1){
		max2=sum[i];
		num2=i;
		}
	i++;
	}
	i=0;
	while(i<n){
		if(sum[i]>max3&&sum[i]<=max2&&i!=num2&&i!=num1){
		max3=sum[i];
		num3=i;
		}
	i++;
	}
	printf("%d %d\n%d %d\n%d %d",stu.ID[num1],max1,stu.ID[num2],max2,stu.ID[num3],max3);
	return 0;
}