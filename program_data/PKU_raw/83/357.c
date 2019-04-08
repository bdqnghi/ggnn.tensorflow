void main()
{int n,i,d=0,a[10],b[10];float c=0;float f(int x);
	scanf("%d",&n);for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(i=0;i<n;i++)scanf("%d",&b[i]);
	for(i=0;i<n;i++){c=c+a[i]*f(b[i]);d=d+a[i];}
	printf("%.2f",c/d);
}
float f(int x)
{if(x>=90)return 4.0;else if(x>=85)return 3.7;
	else if(x>=82)return 3.3;else if(x>=78)return 3.0;else if(x>=75)return 2.7;
	else if(x>=72)return 2.3;else if(x>=68)return 2.0;else if(x>=64)return 1.5;
	else if(x>=60)return 1.0;else return 0;}