


int main(int argc, char* argv[])
{
int n,m;
scanf("%d%d",&n,&m);
int a[100];
int i;
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
int pos=n-m;
for(i=0;i<n-1;i++){
printf("%d ",a[(pos+i)%n]);}
printf("%d\n",a[(pos+i)%n]);
	return 0;
}

