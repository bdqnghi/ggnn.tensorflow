int main(int argc, char* argv[])
{
	int n,i,j;
	float c=0,a[10],b[10];
	double e=0, d;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%f",&a[i]);
		c+=a[i];
		
	}
	for(j=0,i=0;j<n,i<n;j++,i++){
		scanf("%f",&b[j]);
		if(b[j]>=90) d=4.0*a[i];
	    else if(b[j]>=85&&b[j]<=89) d=3.7*a[i];
		else if(b[j]>=82&&b[j]<=84) d=3.3*a[i];
        else if(b[j]>=78&&b[j]<=81) d=3.0*a[i];
        else if(b[j]>=75&&b[j]<=77) d=2.7*a[i];
        else if(b[j]>=72&&b[j]<=74) d=2.3*a[i];
        else if(b[j]>=68&&b[j]<=71) d=2.0*a[i];
        else if(b[j]>=64&&b[j]<=67) d=1.5*a[i];
        else if(b[j]>=60&&b[j]<=63) d=1.0*a[i];
        else if(b[j]<=60) d=0*a[i];
		e+=d;
	}
	double GPA;
	GPA=e/c;
    printf("%.2lf",GPA);
	return 0;
}
