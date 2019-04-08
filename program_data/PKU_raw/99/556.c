void bian(int n);
int main()
{int n;
scanf("%d",&n);
bian(n);
return 0;
}
void bian(int n){
float a[4]={0};
int s[100];
int i;
for(i=0;i<n;i++){
	scanf("%d",&s[i]);
	if(s[i]<19)
		a[0]++;
	else if(s[i]<36)
		a[1]++;
	else if(s[i]<61)
		a[2]++;
	else 
		a[3]++;
}
for(i=0;i<4;i++){
	a[i]=a[i]/n;
    a[i]=a[i]*100;
}
	printf("1-18: %.2f%%\n",a[0]);
	printf("19-35: %.2f%%\n",a[1]);
    printf("36-60: %.2f%%\n",a[2]);
	printf("60??: %.2f%%\n",a[3]);
}




