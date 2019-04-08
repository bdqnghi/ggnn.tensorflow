
int main(int argc, char *argv[])
{
	int n,i,age,one=0,two=0,three=0,four=0;
	double on,tw,th,fo;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&age);
		if(age<19)	one++;
		else if(age<36)	two++;
		else if(age<61)	three++;
		else	four++;
	}
	on=(double)100*one/n;
	tw=(double)100*two/n;
	th=(double)100*three/n;
	fo=(double)100*four/n;
	printf("\n1-18: %.2f%%\n19-35: %.2f%%\n36-60: %.2f%%\n60??: %.2f%%",on,tw,th,fo);
	return 0;
}