int main()
{
	int i,n,xuefen[100]={0},grade[100]={0};
	float GPA[100]={0},a=0,sum=0;
	cin>>n;
	for(i=0;i<n;++i)
		cin>>xuefen[i];
	for(i=0;i<n;++i)
	{
		cin>>grade[i];
		if(grade[i]>=90&&grade[i]<=100)
		GPA[i]=4.0;
		else if(grade[i]>=85&&grade[i]<=89)
		GPA[i]=3.7;
		else if(grade[i]>=82&&grade[i]<=84)
		GPA[i]=3.3;
		else if(grade[i]>=78&&grade[i]<=81)
		GPA[i]=3.0;
		else if(grade[i]>=75&&grade[i]<=77)
		GPA[i]=2.7;
		else if(grade[i]>=72&&grade[i]<=74)
		GPA[i]=2.3;
		else if(grade[i]>=68&&grade[i]<=71)
		GPA[i]=2.0;
		else if(grade[i]>=64&&grade[i]<=67)
		GPA[i]=1.5;
		else if(grade[i]>=60&&grade[i]<=63)
		GPA[i]=1.0;
		else 
			GPA[i]=0;
	}
	for(i=0;i<n;++i)
       {
		   sum+=xuefen[i]*GPA[i];
		   a+=xuefen[i];
	}
	printf("%.2f",sum/a);
	 return 0;
}