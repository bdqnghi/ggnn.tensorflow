int main()
{
	float x,y,k=0;
	int i,j;
	char a[501],b[501];
	scanf("%f",&x);
	scanf("%s",a);
	scanf("%s",b);
	for(i=0;a[i];i++)
		if(!(a[i]=='A'||a[i]=='T'||a[i]=='G'||a[i]=='C')){
			printf("error\n");
			return 0;
		}
	for(j=0;b[j];j++)
		if(!(b[j]=='A'||b[j]=='T'||b[j]=='G'||b[j]=='C')){
			printf("error\n");
			return 0;
		}
	if(i!=j){
		printf("error\n");
		return 0;
	}
	for(i=0;a[i];i++)
		if(a[i]==b[i])
			k+=1;
	y=k/j;
	if(y>x)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}