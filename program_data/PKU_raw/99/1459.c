int main(int argc, char* argv[])
{   int n,a[100];
    scanf("%d",&n);
	int i;
	int s1=0,s2=0,s3=0,s4=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if((a[i]>=1)&&(a[i]<=18))
			s1++;
		else if((a[i]>=19)&&(a[i]<=35))
			s2++;
		else if((a[i]>=36)&&(a[i]<=60))
			s3++;
		else s4++;
	}
	int S;
	S=s1+s2+s3+s4;
	printf("1-18: %.2lf%%\n",(double)s1*100/S);
	printf("19-35: %.2lf%%\n",(double)s2*100/S);
	printf("36-60: %.2lf%%\n",(double)s3*100/S);
	printf("60??: %.2lf%%\n",(double)s4*100/S);
	return 0;
}

