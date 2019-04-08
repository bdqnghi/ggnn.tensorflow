
float fGPA(int x){
	if (x>=90&&x<=100) return (4.0);
	else if (x>=85&&x<=89) return (3.7);
    else if (x>=82&&x<=84) return (3.3);
	else if (x>=78&&x<=81) return (3.0);
	else if (x>=75&&x<=77) return (2.7);
	else if (x>=72&&x<=74) return (2.3);
	else if (x>=68&&x<=71) return (2.0);
	else if (x>=64&&x<=67) return (1.5);
	else if (x>=60&&x<=63) return (1,0);
	else return (0);
}

void main()
{
	int n;
	scanf("%d",&n);
     
	int a[10];
	int i,sum=0;
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}

	int b[10];
	int j;
	for (j=0;j<n;j++){
		scanf("%d",&b[j]);
	}

	float GPA,g=0;
	int k;
	for (k=0;k<n;k++){
		g=g+a[k]*(fGPA(b[k]));
		}
	GPA=g/sum;
	printf("%.2f",GPA);
	
}
	
