int main(int argc, char* argv[])
{
	int i,s;
	while(1){
		int a[6];
		for(i=0;i<6;i++){
			if(i==0){
				scanf("%d",&a[i]);
			}else{
		scanf(" %d",&a[i]);
			}
		}
		if(a[0]==0&&a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0){
			return 0;
		}
			s=(a[3]+12-a[0])*3600+a[5]+a[4]*60-a[2]-a[1]*60;
			printf("%d\n",s);
	}
	return 0;
}
