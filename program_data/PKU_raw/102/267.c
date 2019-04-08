int main()
{
	int n,i,j,p,q;
	double h1[41],h2[42],t,h;
	char sex[10];
	cin>>n;
         cin.get();
	for(i=0,j=0;i+j<n;)
	{
		cin>>sex>>h;
		if(sex[0]=='m')
	{
		h1[i]=h;
		i++;
	}
	else
	{
		h2[j]=h;
		j++;
	}
	}
    for(p=0;p<i-1;p++)
		for(q=0;q<i-1-p;q++)
			if(h1[q]>h1[q+1])
			{
				t=h1[q];
			    h1[q]=h1[q+1];
				h1[q+1]=t;
			}
	for(p=0;p<j;p++)
		for(q=0;q<j-p;q++)
			if(h2[q]<h2[q+1])
			{
				t=h2[q];
			    h2[q]=h2[q+1];
				h2[q+1]=t;
			}
			cout<<fixed;
			cout<<setprecision(2)<<h1[0];
			for(p=1;p<i;p++)
				cout<<" "<<h1[p];
			for(p=0;p<j;p++)
				cout<<" "<<h2[p];
			return 0;
}


