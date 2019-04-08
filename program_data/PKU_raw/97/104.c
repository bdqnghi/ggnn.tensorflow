int main() {
	int n,k1,k2,t1,t2,s1,s2,p1,p2,q1,q2,w1,w2;
	scanf ("%d",&n);
	k1=n/100;
	k2=n%100;
	t1=k2/50;
	t2=k2%50;
	s1=t2/20;
	s2=t2%20;
	p1=s2/10;
	p2=s2%10;
	q1=p2/5;
	q2=p2%5;
	w1=q2/1;
	w2=q2%1;
	printf ("%d\n%d\n%d\n%d\n%d\n%d",k1,t1,s1,p1,q1,w1);
	return 0;
}
