	

int main()
{
    int min,max,t,n,i,Y,a[12],y,j,s=0;
	a[1]=a[3]=a[5]=a[7]=a[8]=a[10]=a[12]=31,a[4]=a[6]=a[9]=a[11]=30;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d %d",&n,&y,&Y);
		if((n%100!=0 && n%4==0) ||(n%100==0 && n%400==0))
			a[2]=29;
			else a[2]=28; 
		if(y<Y)
			min=y,max=Y;
		else min=Y,max=y;
		for(j=min;j<max;j++){
			s=s+a[j];
		}
		if(s%7==0){
			printf("YES\n");
			s=0;
		}
		else {
			printf("NO\n");
			s=0;
		}
	}
	return 0;
}
