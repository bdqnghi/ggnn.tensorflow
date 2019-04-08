int a[100][100];
int f(int n,int a[][100])//???????a[1][1]?????
{
        int i,j,k;
        for(i=0;i<n;i++)//???
        {
                int min=a[i][0];
                for(j=1;j<n;j++)
                        if(a[i][j]<min)min=a[i][j];
                if(min>0)
                for(j=0;j<n;j++)
                        a[i][j]-=min;
        }
        for(j=0;j<n;j++)//???
        {
                int min=a[0][j];
                for(i=1;i<n;i++)
                        if(a[i][j]<min)min=a[i][j];
                if(min>0)
                        for(i=0;i<n;i++)
                                a[i][j]-=min;
        }
		int z=a[1][1];
		for(i=1;i<n-1;i++){//??
			a[0][i]=a[0][i+1];
			a[i][0]=a[i+1][0];
			for(j=1;j<n-1;j++)
				a[i][j]=a[i+1][j+1];
		}
        if(n==2)return z;
        else return z+f(n-1,a);
}
int main()
{
        int n;
        int i,j,k;//????
        cin>>n;
        for(i=0;i<n;i++){
                for(j=0;j<n;j++)
                        for(k=0;k<n;k++)
                                cin>>a[j][k];
                cout<<f(n,a)<<endl;
        }
        return 0;
}
