
struct Student
{
	int num,yuwen,shuxue,sum;
};

void main()
{
	int n,max1=0,max2=0,max3=0,stu1=0,stu2=0,stu3=0;
	struct Student student[100000],*stu;
	scanf("%d",&n);

	for(stu=student;stu<student+n;stu++){
		scanf("%d",&stu->num);
		scanf("%d",&stu->yuwen);
		scanf("%d",&stu->shuxue);
		(stu->sum)=(stu->yuwen)+(stu->shuxue);
		if(stu->sum>=max3){
			if(stu->sum>=max2){
				if(stu->sum>=max1){
					if(stu->sum>max1){
						max3=max2;
						max2=max1;
						max1=stu->sum;
						stu3=stu2;
						stu2=stu1;
						stu1=stu->num;
					}
					else{
						max3=max2;
						max2=max1;
						max1=stu->sum;
						stu3=stu2;
						stu2=stu->num;
					}
				}
				else{
					if(stu->sum>max2){
						max3=max2;
						max2=stu->sum;
						stu3=stu2;		
						stu2=stu->num;
					}
					else{
						max3=max2;
						max2=stu->sum;
						stu3=stu->num;
					}
				}				
			}
			else{
				if(stu->sum>max3){
					max3=stu->sum;
					stu3=stu->num;
				}
				else max3=stu->sum;
			}
		}
	}
	stu=student;
	printf("%d %d\n",(stu+stu1-1)->num,(stu+stu1-1)->sum);
	printf("%d %d\n",(stu+stu2-1)->num,(stu+stu2-1)->sum);
	printf("%d %d\n",(stu+stu3-1)->num,(stu+stu3-1)->sum);
}