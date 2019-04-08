void main(){
	char a[1500];
	int r[300];
	int max,smax;
	int i,j;
	int num;
	gets(a);
	for(i=0,j=0;a[i]!=0;){
		if(a[i]==','){
			j++;
			i++;
			continue;
		}
		num=0;
		for(;a[i]!=','&&a[i]!=0;i++)
			num=num*10+a[i]-'0';
		r[j]=num;
	}
	r[j+1]=-1;
	max=-1;
	smax=-1;
	for(i=0;r[i]!=-1;i++)
		if(r[i]>max)
			max=r[i];
	for(i=0;r[i]!=-1;i++)
		if(r[i]>smax&&r[i]<max)
			smax=r[i];
	if(smax>-1)
		printf("%d\n",smax);
	else
		printf("No\n");
}
