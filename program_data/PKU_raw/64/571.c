int main()
{
	double s[10][3],a[100],b[100];         //?s????n?????
	double l[100];
	int n;
	int i,j,k=0,g=0,c,d;
	double t;
	cin>>n;
	for(i=0;i<n;i++)
		for(j=0;j<3;j++)
			cin>>s[i][j];
	for(i=0;i<n-1;i++)
	{
		for(g=i+1;g<n;g++)
		{
			l[k]=sqrt((s[i][0]-s[g][0])*(s[i][0]-s[g][0])+(s[i][1]-s[g][1])*(s[i][1]-s[g][1])+(s[i][2]-s[g][2])*(s[i][2]-s[g][2]));
			a[k]=i;
			b[k]=g;
		    k++;
		}
	}                                     
	k=k;                   //l????k????
	for(i=0;i<k-1;i++)
		for(j=0;j<k-i;j++)
		{
			if(l[j]<l[j+1])
			{
				t=l[j+1];
				l[j+1]=l[j];
				l[j]=t;            //?????
				t=0;
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;           
				t=0;
				t=b[j+1];
				b[j+1]=b[j];
				b[j]=t;           //??a?b?????l?????
			}
		}
		for(i=0;i<k;i++)
		{
			c=a[i];
			d=b[i];
			cout<<"("<<s[c][0]<<","<<s[c][1]<<","<<s[c][2]<<")-("<<s[d][0]<<","<<s[d][1]<<","<<s[d][2]<<")=";
			printf("%.2f",l[i]);
			if(i<k-1)
            cout<<endl;
		}

	
	return 0;
}
