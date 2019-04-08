int main()
{
	int a[300];
	char c[300];
	int num=0,i,j,flag=0,t;
	for(i=0;i<300;i++){
		scanf("%d%c",&a[i],&c[i]);
		if(c[i]==',')
			num++;
		else
			break;
	}
	num=num+1;
	if(num==1){
		printf("No\n");
		goto end;
	}
	for(i=0;i<num;i++){
		if(a[i]!=a[0]){
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("No\n");
		goto end;
	}
	for(i=1;i<num;i++){
		for(j=0;j<num-i;j++){
			if(a[j]<a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=1;i<num;i++){
		if(a[i]!=a[0]){
			printf("%d\n",a[i]);
			break;
		}
	}
end:
	return 0;
}

