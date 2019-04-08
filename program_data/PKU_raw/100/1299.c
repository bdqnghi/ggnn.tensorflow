
int main()
{
	char a[350];
	int n, i, sum[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	scanf("%s", a);
	n=strlen(a);
	for(i=0; i<n; i++)
	{
		if(a[i]<='z' && a[i]>='a')
		{
			if(a[i]=='a')
				sum[0]++;
			else if(a[i]=='b')
				sum[1]++;
			else if(a[i]=='c')
				sum[2]++;
			else if(a[i]=='d')
				sum[3]++;
			else if(a[i]=='e')
				sum[4]++;
			else if(a[i]=='f')
				sum[5]++;
			else if(a[i]=='g')
				sum[6]++;
			else if(a[i]=='h')
				sum[7]++;
			else if(a[i]=='i')
				sum[8]++;
			else if(a[i]=='j')
				sum[9]++;
			else if(a[i]=='k')
				sum[10]++;
			else if(a[i]=='l')
				sum[11]++;
			else if(a[i]=='m')
				sum[12]++;
			else if(a[i]=='n')
				sum[13]++;
			else if(a[i]=='o')
				sum[14]++;
			else if(a[i]=='p')
				sum[15]++;
			else if(a[i]=='q')
				sum[16]++;
			else if(a[i]=='r')
				sum[17]++;
			else if(a[i]=='s')
				sum[18]++;
			else if(a[i]=='t')
				sum[19]++;
			else if(a[i]=='u')
				sum[20]++;
			else if(a[i]=='v')
				sum[21]++;
			else if(a[i]=='w')
				sum[22]++;
			else if(a[i]=='x')
				sum[23]++;
			else if(a[i]=='y')
				sum[24]++;
			else
				sum[25]++;
		}
	}
	if(sum[0]==0 && sum[1]==0 && sum[2]==0 && sum[3]==0 && sum[4]==0 && sum[5]==0 && sum[6]==0 && sum[7]==0 && sum[8]==0 && sum[9]==0 && sum[10]==0 && sum[11]==0 && sum[12]==0 && sum[13]==0 && sum[14]==0 && sum[15]==0 && sum[16]==0 && sum[17]==0 && sum[18]==0 && sum[19]==0 && sum[20]==0 && sum[21]==0 && sum[22]==0 && sum[23]==0 && sum[24]==0 && sum[25]==0)
		printf("No\n");
	else
	{
		if(sum[0]!=0)
			printf("a=%d\n", sum[0]);
		if(sum[1]!=0)
			printf("b=%d\n", sum[1]);
		if(sum[2]!=0)
			printf("c=%d\n", sum[2]);
		if(sum[3]!=0)
			printf("d=%d\n", sum[3]);
		if(sum[4]!=0)
			printf("e=%d\n", sum[4]);
		if(sum[5]!=0)
			printf("f=%d\n", sum[5]);
		if(sum[6]!=0)
			printf("g=%d\n", sum[6]);
		if(sum[7]!=0)
			printf("h=%d\n", sum[7]);
		if(sum[8]!=0)
			printf("i=%d\n", sum[8]);
		if(sum[9]!=0)
			printf("j=%d\n", sum[9]);
		if(sum[10]!=0)
			printf("k=%d\n", sum[10]);
		if(sum[11]!=0)
			printf("l=%d\n", sum[11]);
		if(sum[12]!=0)
			printf("m=%d\n", sum[12]);
		if(sum[13]!=0)
			printf("n=%d\n", sum[13]);
		if(sum[14]!=0)
			printf("o=%d\n", sum[14]);
		if(sum[15]!=0)
			printf("p=%d\n", sum[15]);
		if(sum[16]!=0)
			printf("q=%d\n", sum[16]);
		if(sum[17]!=0)
			printf("r=%d\n", sum[17]);
		if(sum[18]!=0)
			printf("s=%d\n", sum[18]);
		if(sum[19]!=0)
			printf("t=%d\n", sum[19]);
		if(sum[20]!=0)
			printf("u=%d\n", sum[20]);
		if(sum[21]!=0)
			printf("v=%d\n", sum[21]);
		if(sum[22]!=0)
			printf("w=%d\n", sum[22]);
		if(sum[23]!=0)
			printf("x=%d\n", sum[23]);
		if(sum[24]!=0)
			printf("y=%d\n", sum[24]);
		if(sum[25]!=0)
			printf("z=%d\n", sum[25]);
	}
	return 0;
}