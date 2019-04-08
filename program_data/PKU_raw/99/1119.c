int main()
{
	int n,x,i,a,b,c,d;
	double rate1,rate2,rate3,rate4,k,l,m,p;
	i=1,a=0,b=0,c=0,d=0;
	scanf("%d\n",&n);
	if(n>0&&n<=100){
		while (i<=n){
			scanf("%d",&x);
			i=i+1;
			if(x<=18){
				a++;
			}
			else if(x>18&&x<=35){
				b++;
			}
			else if(x>35&&x<=60){
				c++;
			}
			else{
				d++;
			}
		}
		k=a,l=b,m=c,p=d;
		rate1=100*k/n,rate2=100*l/n,rate3=100*m/n,rate4=100*p/n;
		printf("1-18: %.2lf%%\n",rate1);
		printf("19-35: %.2lf%%\n",rate2);
		printf("36-60: %.2lf%%\n",rate3);
		printf("60??: %.2lf%%\n",rate4);
		}
	return 0;
}
