int main()                                    //????
{
	int n,i,j,I;                              //??????n?????i,j,I???
	cin>>n;
	if(n<2)
		return 0;
	else
	{
		double dis=0,temp1,temp2,temp3;       //??????dis?????temp1,temp2,temp3???????
		double a[100][2];
		for(I=0;I<n;I++)
			cin>>a[I][0]>>a[I][1];
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				temp1=(a[j][0]-a[i][0])*(a[j][0]-a[i][0]);
			    temp2=(a[j][1]-a[i][1])*(a[j][1]-a[i][1]);
			    temp3=sqrt(temp1+temp2);
				if(dis<temp3)
					dis=temp3;                //????????????
			}
			printf("%.4f\n",dis);
			return 0;
	}
}