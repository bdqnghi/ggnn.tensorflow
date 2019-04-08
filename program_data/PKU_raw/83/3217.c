int main(){
	int n, z=0;
	float p, q, s=0, GPA;
	scanf("%d", &n);
	int a[10];
	int i=0;
	for(i=0;i<n; i++){
		scanf("%d", &a[i]);
	}
	int b[10];
	for(i=0;i<n; i++){
		scanf("%d", &b[i]);
	}
	for(i=0;i<n; i++){
		int m=(b[i]);
		p=m>=90?4.0:m>=85?3.7:m>=82?3.3:m>=78?3.0:m>=75?2.7:m>=72?2.3:m>=68?2.0:m>=64?1.5:m>=60?1.0:0;
		q=p*(a[i]);
		s=s+q;
		z=z+(a[i]);
	}
	GPA=s/z;
	printf("%.2f",GPA);
		return 0;
}

