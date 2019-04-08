int main(){
	double a[101],b[101],c[101],d,x1,x2;
	int j,n;
	a[0]=0,b[0]=0,c[0]=0,d=0;
	cin >> n;
	for(j=1;j<=n;j=j+1)
	{
		cin >>a[j]>>b[j]>>c[j];
		if(b[j]*b[j] -a[j]*c[j]*4 > 0)
		{
			x1 =(-b[j] + sqrt(b[j]*b[j]-4*a[j]*c[j]))/(2*a[j]);
			x2 = (-b[j] - sqrt(b[j]*b[j]-4*a[j]*c[j]))/(2*a[j]);
			cout <<"x1=";
			printf("%.5f",x1);
			cout<<";x2=";
			printf("%.5f",x2);
			cout<<endl;
		}
		else if(b[j]*b[j] -a[j]*c[j] *4 == 0)
		{
			x1 =(-b[j] )/(2*a[j]);
		    cout <<"x1=x2=";
		    printf("%.5f",x1);
		    cout<<endl;

		}
		    else if(b[j]*b[j] -a[j]*c[j] *4 < 0)
		    {
			x1 =(-b[j] )/(2*a[j]);
		    if (x1>-0.00001&&x1<0.00001)
		    {
		    	x1 =0;
		    }
			d =(sqrt(4*a[j]*c[j]-b[j]*b[j]))/(2*a[j]);
			cout <<"x1=";
		    printf("%.5f",x1);
		    cout<<"+";
		    printf("%.5f",d);
		    cout <<"i;x2=";
		    printf("%.5f",x1);
		    cout<<"-";
		    printf("%.5f",d);
		    cout<<"i" <<endl;
		    }

	    x1=0;
	    x2=0;
	    d =0;



	}
return 0;


}
