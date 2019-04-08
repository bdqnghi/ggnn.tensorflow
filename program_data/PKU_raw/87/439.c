int main()
{
	int shuzu[100][6];
	for(int i=0;i<100;i++){
		for(int j=0;j<6;j++){
		scanf("%d",&shuzu[i][j]);
		}
		if(shuzu[i][0]==0 && shuzu[i][1]==0 && shuzu[i][2]==0 && shuzu[i][3]==0 && shuzu[i][4]==0 && shuzu[i][5]==0)
			break;

		int sum=0;
		int h=0;
		h=shuzu[i][3]+12-shuzu[i][0];
		int m=0;
		m=shuzu[i][4]-shuzu[i][1];
		if(m<0){
			h--;
			m=m+60;
		}
		int s=0;
		s=shuzu[i][5]-shuzu[i][2];
		if(s<0){
			m--;
			s=s+60;
		}
		if(m<0){
			h--;
			m=m+60;
		}

		sum=h*60*60+m*60+s;
		printf("%d\n",sum);
		}
	return 0;
}