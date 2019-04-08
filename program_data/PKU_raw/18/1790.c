int main()
{
    int i,n,j,k,sum=0,s2;
    cin>>n;                                                                              //n?????
	s2=n;
    for(i=1;i<=s2;i++)
    {
		n=s2;
		sum=0;
        int a[100][100];
        for(j=0;j<n;j++)
            for(k=0;k<n;k++)
                cin>>a[j][k];/*????n*n???*/                                       //??100*100????
        while(n>1)/*?????2???*/
        {
            int s[100];/*?????????????????*/
            for(j=0;j<n;j++)
                s[j]=a[j][0];/*????????????????*/
            for(j=0;j<n;j++)
                for(k=0;k<n;k++)
                    if(a[j][k]<s[j])
                        s[j]=a[j][k];/*???????*/
            for(j=0;j<n;j++)
                for(k=0;k<n;k++)
                    a[j][k]-=s[j];/*???????*/

			int t[100];
            for(j=0;j<n;j++)
                t[j]=a[0][j];
            for(j=0;j<n;j++)
                for(k=0;k<n;k++)
                    if(a[k][j]<t[j])
                        t[j]=a[k][j];
			for (j=0;j<n;j++)
				for (k=0;k<n;k++)
					a[k][j]-=t[j];


            sum+=a[1][1];/*??????*/
            for(j=2;j<n;j++)
				for (k=0;k<n;k++)
                    a[j-1][k]=a[j][k];/*??????*/
            for(k=2;k<n;k++)
				for (j=0;j<n;j++)
                a[j][k-1]=a[j][k];/*??????*/

                n--;/*????*/
        }
        cout<<sum<<endl;
    }
return 0;
} 
