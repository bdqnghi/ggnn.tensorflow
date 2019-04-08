int main()
{
    char a[100000]={'\0'};
    char linshi,diyi;
    int n,i,k,l,m,g=0,p=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        k=strlen(a);
        for(l=0;l<=(k-1);l++)
        {
            diyi=a[l];
            for (m=0;m<k;m++)
            {
                if ((diyi==a[m])&&(l!=m)) 
				{
					g++;
				}
				if ((g==0)) p=0;
				else p=1;
            }
            if (g==0) break;
			g=0;
        }
        if ((g==0)&&(p==0)) cout<<diyi<<endl;
		g=0;
		if (p==1) cout<<"no"<<endl;
		p=1;

    }

    return 0;
}
