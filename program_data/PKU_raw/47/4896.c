

int main(int argc, char* argv[])
{
int n;
scanf("%d",&n);
int a[100];
int i;
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=n-1;i>0;i--){
printf("%d ",a[i]);
}
printf("%d\n",a[i]);
	return 0;
}

