int main()
{
	char name[100][21];
	int n;//??
	int temp=0;//??????????
	int temp_money=0;//?????????????
	int temp_name;//??????????????
	int all_money=0;//??????????????
	int i;
	scanf("%d", &n);
//	printf("n             =         %d\n",n);
	for(i=0;i<n;i++)
	{
		int qi_mo;
		int ping_yi;
		char gan_bu;
		char xi_bu;
		int lun_wen;
//		printf("%d\n", i);
		scanf("%s", name[i]);
//		printf("%s\n",name[i]);
		scanf("%d", &qi_mo);
		scanf("%d", &ping_yi);
		scanf(" %c %c", &gan_bu, &xi_bu);
		scanf("%d", &lun_wen);
		if((qi_mo>80)&&(lun_wen>=1))
			temp += 8000;
		if((qi_mo>85)&&(ping_yi>80))
			temp += 4000;
		if(qi_mo>90)
			temp += 2000;
		if((qi_mo>85)&&(xi_bu=='Y'))
			temp += 1000;
		if((ping_yi>80)&&(gan_bu=='Y'))
			temp += 850;
		if(temp>temp_money)
		{
			temp_money=temp;
			temp_name=i;
		}
		all_money += temp;
		temp = 0;
	}
	printf("%s\n",name[temp_name]);
	printf("%d\n",temp_money);
	printf("%d\n",all_money);
}