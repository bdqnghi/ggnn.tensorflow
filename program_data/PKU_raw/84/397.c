
int main(int argc, char* argv[])
{
	int len,i,m,b1,b2,a[100];
	scanf("%d",&len);
    for(i=0;i<len;i++){
	scanf("%d",&a[i]);
	}
	b1=a[0];
	b2=a[1];
    for(i=0;i<len;i++){
		if(b1<a[i]){
		b1=a[i];
		m=i;
		}
	}
	for(i=0;i<len;i++){
		if(i!=m&&b2<a[i]){
		b2=a[i];
		}
	}
	printf("%d\n%d",b1,b2);
	return 0;
}
