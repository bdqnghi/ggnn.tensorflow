int main()
{
	int n=0;
	cin>>n;
	double an[100][3];
	int i=0,j=0;
	for(i=0;i<n;i++)
		for(j=0;j<3;j++)
			cin>>an[i][j];
	struct 
	{
		int i;
		int j;
		double dis;
	}stu[1000],t;
	int k=0,m=0,p=0;
	for(m=0;m<n;m++)
	{
		for(p=m+1;p<n;p++)
		{
			stu[k].i=m;
			stu[k].j=p;
			double mm=(an[m][0]-an[p][0])*(an[m][0]-an[p][0])+(an[m][1]-an[p][1])*(an[m][1]-an[p][1])+(an[m][2]-an[p][2])*(an[m][2]-an[p][2]);
			stu[k].dis=sqrt(mm);
			k++;
		}
	}
	
	for(int q=0;q<k;q++)
		for(int qq=q+1;qq<k;qq++)
		{
			if((stu[q].dis<stu[qq].dis)||(stu[q].dis==stu[qq].dis)&&((stu[q].i>stu[qq].i)||(stu[q].i==stu[qq].i)&&(stu[q].j>stu[qq].j)))
			{
				t=stu[qq];
				stu[qq]=stu[q];
				stu[q]=t;
			}		
		}
	for(int r=0;r<k;r++)
		cout<<fixed << setprecision(0)<<"("<<an[stu[r].i][0]<<","<<an[stu[r].i][1]<<","<<an[stu[r].i][2]<<")-("<<an[stu[r].j][0]<<","<<an[stu[r].j][1]<<","<<an[stu[r].j][2]<<")="<<fixed << setprecision(2)<<stu[r].dis<<endl;
	return 0;
}

		