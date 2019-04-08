int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	struct student{
		int a,b,c;
	}student_1;
	int x,i=0;
	int a1=0,a2=0,b1=0,b2=0,c1=0,c2=0;
	while(i<n){
		scanf("%d%d%d",&student_1.a,&student_1.b,&student_1.c);
		x=student_1.b+student_1.c;
			if(x>a2){
				c1=b1;
				c2=b2;
				b1=a1;
				b2=a2;
				a1=student_1.a;
				a2=x;
			}
			else if(x==a2){
				if (x > b2)
				{
					c1 = b1;
					c2 = b2;
					b1=student_1.a;
					b2=x;
				}
				else if (x > c2)
				{
					c1 = student_1.a;
					c2 = x;
				}
			}
			else if(x>b2){
				c1=b1;
				c2=b2;
				b1=student_1.a;
				b2=x;
			}
			else if(x==b2){
				if (x > c2)
				{
					c1=student_1.a;
					c2=x;
				}
			}
			else if(x>c2){
				c1=student_1.a;
				c2=x;
			}
		i++;
	}
	printf("%d %d\n",a1,a2);
	printf("%d %d\n",b1,b2);
	printf("%d %d\n",c1,c2);
	return 0;
}