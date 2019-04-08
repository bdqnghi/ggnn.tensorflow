int main()
{
	int w;
	scanf("%d",&w);
	int sum[12];
	int i,x;
	for(i=0;i<12;i++){
		x=0;
		switch(i+1){
		case 1: sum[0]=13;break;
		case 2: sum[1]=31+13;break;
		case 3: sum[2]=31+28+13;break;
		case 4: sum[3]=31+28+31+13;break;
		case 5: sum[4]=31+28+31+13+30;break;
		case 6: sum[5]=31+28+31+13+30+31;break;
		case 7: sum[6]=31+28+31+13+30+31+30;break;
		case 8: sum[7]=31+28+31+13+30+31+30+31;break;
		case 9: sum[8]=31+28+31+13+30+31+30+31+31;break;
		case 10: sum [9]=31+28+31+13+30+31+30+31+31+30;break;
		case 11: sum[10]=31+28+31+13+30+31+30+31+31+30+31;break;
		case 12: sum[11]=31+28+31+13+30+31+30+31+31+30+31+30;break;
		}
	    x=sum[i]%7+w;
		if(x==6||x==13)
			printf("%d\n",i+1);
	}
	return 0;
}
	