
main()
{
	double b=0;double c=0;double d=0;double e=0;
	int n;int i;
	cin>>n;
    int a[100];
	for(i=0;i<n;i++)
		cin>>a[i];
    for (i=0;i<n;i++)
	{
		if((a[i]==1||a[i]>1)&&(a[i]==18||a[i]<18))b++;
        if((a[i]==19||a[i]>19)&&(a[i]==35||a[i]<35))c++;
		if((a[i]==36||a[i]>36)&&(a[i]==60||a[i]<60))d++;
        if(a[i]==61||a[i]>61)e++;
	}
    double m=b/n*100;double u=c/n*100;double o=d/n*100; double p=e/n*100;
	cout<<"1-18: "; printf("%.2lf",m);cout<<"%\n";
	cout<<"19-35: "; printf("%.2lf",u);cout<<"%\n";
	cout<<"36-60: "; printf("%.2lf",o);cout<<"%\n";
	cout<<"60??: "; printf("%.2lf",p);cout<<"%\n";
}