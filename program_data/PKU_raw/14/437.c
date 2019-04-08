    struct Student
    {
    	int num;
    	int yuwen;
    	int math;
    }temp,stu[100050];
  
    
    int main()
    {
    	int n,i,j,k;
    	scanf("%d",&n);
    	

    	for(i=0;i<n;i++)
    	{
    		scanf("%d %d %d",&stu[i].num,&stu[i].yuwen,&stu[i].math);
    	    stu[i].math=stu[i].yuwen+stu[i].math;
    	}
    	for(i=0;i<3;i++)
    	{
    		k=i;
    		for(j=i+1;j<n;j++)
    		if(stu[j].math>stu[k].math)
    		k=j;
    		temp=stu[k];stu[k]=stu[i];stu[i]=temp;
    	}
    	for(i=0;i<3;i++)
    	printf("%d %d\n",stu[i].num,stu[i].math);
    }