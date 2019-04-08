struct stu
	{
		int num;
		int yuwen;
		int shuxue;
		int sum;
	}score[100000];
int main()
{
	int n,i,a,b,c,a1,b1,c1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&score[i].num,&score[i].yuwen,&score[i].shuxue);
		score[i].sum=score[i].shuxue+score[i].yuwen;
	}a=0;
	b=0;
	c=0;
	a1=0;
	b1=0;
	c1=0;
	for(i=0;i<n;i++){
		if(score[i].sum>a){
		    c=b;
			b=a;
			a=score[i].sum;
			c1=b1;
			b1=a1;
			a1=score[i].num;
		}else if(score[i].sum>b){
			c=b;
			b=score[i].sum;
			c1=b1;
			b1=score[i].num;
		}else if(score[i].sum>c){
			c=score[i].sum;
			c1=score[i].num;
		}
	}printf("%d %d\n%d %d\n%d %d",a1,a,b1,b,c1,c);
	return 0;
}