int a[120][120];
int math(int);
int n;
int main()
{ int sum,b,c;
cin>>n;
c=n;
while(c--){for(int i=0;i<n;i++)
	           for(int j=0;j<n;j++)cin>>a[i][j];
             sum=math(n);

             b=n;
             while(b--){for(int i=2;i<b+1;i++)a[0][i-1]=a[0][i];
                for(int i=2;i<b+1;i++)a[i-1][0]=a[i][0];
                for(int i=2;i<b+1;i++)
                	for(int j=2;j<b+1;j++)a[i-1][j-1]=a[i][j];
                if(b==1)break;
                sum=math(b)+sum;

             }
                cout<<sum<<endl;

             }

return 0;
}
int math(int x)
{int min[x];
for(int i=0;i<x;i++)min[i]=a[i][0];

	for(int i=0;i<x;i++)
		for(int j=0;j<x;j++){if(a[i][j]<min[i])min[i]=a[i][j];}

	for(int i=0;i<x;i++)
		for(int j=0;j<x;j++)a[i][j]=a[i][j]-min[i];

int minl[x];
for(int i=0;i<x;i++)minl[i]=a[0][i];
for(int i=0;i<x;i++)
	for(int j=0;j<x;j++){if(a[j][i]<minl[i])minl[i]=a[j][i];}

for(int i=0;i<x;i++)
	for(int j=0;j<x;j++)a[i][j]=a[i][j]-minl[j];

return a[1][1];
}
