int main()
{
	struct student
	{
		int num;
		int chinese;
		int math;
		int sum;
	}stu[100000],t;

         int n;
	int i;
	int k;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&stu[i].num,&stu[i].chinese,&stu[i].math);
                  stu[i].sum=stu[i].chinese+stu[i].math;
	}

         for(k=n-1;k>n-4;k--){
		for(i=0;i<k;i++){
			if(stu[i].sum>=stu[i+1].sum){
				t=stu[i];
                                    stu[i]=stu[i+1];
                                    stu[i+1]=t;
			}
		}
	}

        printf("%d %d\n",stu[n-1].num,stu[n-1].sum);
        printf("%d %d\n",stu[n-2].num,stu[n-2].sum);
        printf("%d %d\n",stu[n-3].num,stu[n-3].sum);

	return 0;
}
