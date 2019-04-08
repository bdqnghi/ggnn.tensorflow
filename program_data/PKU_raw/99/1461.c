

//#include <math.h>




int main()
{

	int n;
	int ta;
	int t1=0,t2=0,t3=0,t4=0;

	scanf("%d",&n);

	int i;
	for(i=0;i<n;i++){
		scanf("%d",&ta);

		if(ta<=18){
			t1++;
		}
		else if(ta<=35){
			t2++;
		}
		else if(ta<=60){
			t3++;
		}
		else{
			t4++;
		}
	}

	printf("1-18: %.2lf%\n",(double)t1*100/n);
	printf("19-35: %.2lf%\n",(double)t2*100/n);
	printf("36-60: %.2lf%\n",(double)t3*100/n);
	printf("60??: %.2lf%\n",(double)t4*100/n);
	return 0;
}
