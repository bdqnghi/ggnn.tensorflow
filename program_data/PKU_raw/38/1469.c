int main()
{
	int k,i=0,j,num;
	double shuzu[101],a,a_1,average,average_1,s;
	scanf("%d",&k);
	for(i=0;i<k;i++){
	a=0;
	a_1=0;
	scanf("%d",&num);
	for(j=0;j<num;j++){
	scanf("%lf",shuzu+j);
	a+=*(shuzu+j);
	}
	average=a/num;
	for(j=0;j<num;j++){
	a_1+=(*(shuzu+j)-average)*(*(shuzu+j)-average);
	}
	average_1=a_1/num;
	s=sqrt(average_1);
	printf("%.5lf\n",s);
	}
	return 0;
}