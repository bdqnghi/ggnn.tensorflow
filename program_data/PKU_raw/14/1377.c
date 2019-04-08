
struct Student
{
	int number;
	int a;
	int b;
	int c;
};

int main()
{
	int n, i;
	int x, y, z;

	struct Student stu;
	struct Student maxStu, smaxStu, tmaxStu;

	scanf("%d",&n);
	scanf("%d%d%d",&x,&y,&z);
	stu.number = x;
	stu.a = y;
	stu.b = z;
	stu.c = stu.a + stu.b;
	maxStu = stu;
	smaxStu = stu;
	tmaxStu = stu;

	for (i = 0; i < n-1; i++){
		scanf("%d%d%d",&x,&y,&z);
		stu.number = x;
		stu.a = y;
		stu.b = z;
		stu.c = stu.a + stu.b;
		if (stu.c > maxStu.c){
			if (maxStu.c > smaxStu.c){
				if (smaxStu.c > tmaxStu.c){
					tmaxStu = smaxStu;
				}
				smaxStu = maxStu;
			}
			else if (maxStu.c > tmaxStu.c){
					tmaxStu = maxStu;
			}
			maxStu = stu;
		}
		else if (stu.c > smaxStu.c){
			if (smaxStu.c > tmaxStu.c){
				tmaxStu = smaxStu;
			}
			smaxStu = stu;
		}
		else if (stu.c > tmaxStu.c){
			tmaxStu = stu;
		}
	}

	printf ("%d %d\n%d %d\n%d %d",maxStu.number,maxStu.c,smaxStu.number,smaxStu.c,tmaxStu.number,tmaxStu.c);
	return 0;
}