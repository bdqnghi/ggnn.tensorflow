int main()
{int a[20];
int b[20];
int n1,n2;
int s;
int i;
int l1,l2;
int sum(int n1,int n2,int a[],int l1,int b[],int l2);
scanf("%d %d",&n1,&n2);
for(i=0;i<n1;i++)
	scanf("%d",&a[i]);
for(i=0;i<n2;i++)
	scanf("%d",&b[i]);
s=sum(n1,n2,a,l1,b,l2);
printf("%d",a[0]);
for(i=1;i<n1;i++)
printf(" %d",a[i]);
for(i=0;i<n2;i++)
printf(" %d",b[i]);
return 0;
}
int sum(int n1,int n2,int a[],int l1,int b[],int l2){
	int i,j,temp;
for(j=1;j<n1;j++){
	for(i=0;i<n1-j;i++){
		if(a[i]>a[i+1]){
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
}
for(j=1;j<n2;j++){
	for(i=0;i<n2-j;i++){
		if(b[i]>b[i+1]){
			temp=b[i];
			b[i]=b[i+1];
			b[i+1]=temp;
		}
	}
}
return 0;
}