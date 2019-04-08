struct data{
	char sex[7];
	float h;
}stu[40],m[39],f[39],temp;

int main()
{
	int n,i,j,male,female;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%f",stu[i].sex,&stu[i].h);
	for(i=male=female=0;i<n;i++)
		if(stu[i].sex[0]=='m'){
			m[male]=stu[i];
			male++;
		}
		else{
			f[female]=stu[i];
			female++;
		}
	for(i=0;i<male-1;i++)
		for(j=0;j<male-1-i;j++)
			if(m[j].h>m[j+1].h){
				temp=m[j+1];
				m[j+1]=m[j];
				m[j]=temp;
			}
	for(i=0;i<female-1;i++)
		for(j=0;j<female-1-i;j++)
			if(f[j].h>f[j+1].h){
				temp=f[j+1];
				f[j+1]=f[j];
				f[j]=temp;
			}
	for(i=0;i<male;i++)
		printf("%.2f ",m[i].h);
	for(i=female-1;i>=1;i--)
		printf("%.2f ",f[i].h);
	printf("%.2f\n",f[i].h);
	return 0;
}