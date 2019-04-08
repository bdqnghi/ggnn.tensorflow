int main()
{
	int x,y,i,j,l;
	int a[13]={0},b[13]={0};
	scanf("%d%d",&x,&y);
	for(i=0;x>0;i++){
		a[i]=x;
		x=x/2;
	}
	l=i;
	for(;y>0;y=y/2){
		for(j=0;j<l;j++){
			if(a[j]==y){
				printf("%d",a[j]);
				return 0;
			}
		}
	}
}
