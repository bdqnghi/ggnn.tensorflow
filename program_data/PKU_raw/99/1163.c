int main()
{
	double y,n,i,wcn,qn,zn,ln,wcn0,qn0,zn0,ln0;
	i=1;
	wcn=0;
	qn=0;
	zn=0;
	ln=0;
	scanf("%lf",&n);
	while(i<=n){
		scanf("%lf",&y);
		if(y<19){
			wcn=wcn+1;
		}
		else if(y>18&y<36){
			qn=qn+1;
		}
		else if(y>35&y<61){
			zn=zn+1;
		}
		else if(y>60){
			ln=ln+1;
		}
		i=i+1;
	}
	wcn0=wcn/n*100;
	qn0=qn/n*100;
	zn0=zn/n*100;
	ln0=ln/n*100;
	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",wcn0,qn0,zn0,ln0);
	return 0;
}