
float score[12],point[12];
float GPA[12];

int main(){
	int n,i;
	float tmp;
	cin>>n;
	for(i=0;i<n;i++)
		scanf("%f",&score[i]);
	for(i=0;i<n;i++)
	{
		scanf("%f",&tmp);
		//cout<<tmp<<' ';
		if(tmp<=100&&tmp>=90)
			GPA[i]=4;
		else
			if(tmp<=89&&tmp>=85)
				GPA[i]=3.7;
			else
				if(tmp<=84&&tmp>=82)
					GPA[i]=3.3;
				else
					if(tmp<=81&&tmp>=78)
						GPA[i]=3.0;
					else if(tmp<=77&&tmp>=75)
						GPA[i]=2.7;
					else if(tmp<=74&&tmp>=72)
						GPA[i]=2.3;
					else if(tmp<=71&&tmp>=68)
						GPA[i]=2.0;
					else if(tmp<=67&&tmp>=65)
						GPA[i]=1.5;
					else if(tmp<=64&&tmp>=60)
						GPA[i]=1.0;
					else
						GPA[i]=0;
	//cout<<GPA[i]<<endl;

	}
	float Res=0;
	float sum=0;
	for(i=0;i<n;i++)
	{
		sum+=score[i];
		Res+=(score[i]*GPA[i]);
	}
	Res/=sum;
	printf("%.2f\n",Res);
	return 0;
}