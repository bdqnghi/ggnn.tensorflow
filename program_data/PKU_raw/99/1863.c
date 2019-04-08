int main ()
{
	int n;
	int tmp;
	int i;
	int  s1=0,s2=0,s3=0,s4=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){ 
		scanf("%d",&tmp);
		if(tmp>=1&&tmp<=18){
         s1++; 
		}
		else if (tmp>=19&&tmp<=35){
			s2++;
		}
		else if(tmp>=36&&tmp<=60){
			s3++;
		}
		else if(tmp>=61){
			s4++;
		}
	}
	int s;
	s=s1+s2+s3+s4;
	printf("1-18: %.2lf%%\n",(double)100*s1/s);
	printf("19-35: %.2lf%%\n",(double)100*s2/s);
	printf("36-60: %.2lf%%\n",(double)100*s3/s);
	printf("60??: %.2lf%%",(double)100*s4/s);
       return 0;
}