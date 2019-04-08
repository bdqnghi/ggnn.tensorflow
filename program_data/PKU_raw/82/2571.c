int main()
{
int a[100];
int b[100];
int n,i,max,m;
scanf("%d\n",&n);
for (i=0;i<n;i++){
	scanf("%d %d\n",&a[i],&b[i]);
}
printf("\n");
m=0;
max=0;
for (i=0;i<n;i++){
	if (a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)
		m=m+1;
	else{ 
		if (m>max){
			max=m;
		}
	m=0;
	}
}
if (a[n-1]>=90&&a[n-1]<=140&&b[n-1]>=60&&b[n-1]<=90&&m>max)
max=m;
printf("%d\n",max);
return 0;
}