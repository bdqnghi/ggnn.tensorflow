int main(){
	int a=0,b=0,c=0,d=0;
	int n,age;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&age);
		
		if(age<=18){
			a++;
			}
		else if (age>=19&&age<36){
			b++;
			}
		else if (age>=36&&age<=60){
			c++;
		}
	else if(age>60){
			d++;
			}
		
	}
	printf("1-18: %.2lf",a*100.0/n);
	printf("%%\n");
    printf("19-35: %.2lf",b*100.0/n);
	printf("%%\n");
    printf("36-60: %.2lf",c*100.0/n);
	printf("%%\n");
    printf("60??: %.2lf",d*100.0/n);
	printf("%%\n");
	return 0;
}

		
	
