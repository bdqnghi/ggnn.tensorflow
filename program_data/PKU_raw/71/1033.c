int main()
{
	int n,y[200],m1,m2,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d\n",&y[i],&m1,&m2);
		if(m1>m2){
			int t;
		    t=m1;
		    m1=m2;
		    m2=t;
		}
	if((y[i]%4==0&&y[i]%100!=0)||(y[i]%100==0&&y[i]%400==0)){
       if((m1==1&&m2==4)||(m1==1&&m2==7)||(m1==2&&m2==8)||(m1==3&&m2==11)||(m1==4&&m2==7)||(m1==9&&m2==12))
		   printf("YES\n");
       else printf("NO\n");
	   }
    else{
       if((m1==1&&m2==10)||(m1==2&&m2==3)||(m1==2&&m2==11)||(m1==3&&m2==11)||(m1==4&&m2==7)||(m1==9&&m2==12))
		   printf("YES\n");
       else printf("NO\n");
	   }
	}
	return 0;
}