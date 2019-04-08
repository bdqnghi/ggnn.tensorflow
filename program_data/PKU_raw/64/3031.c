
 int main(){
	 int n,x[20],y[20],z[20];
	 float dis[20][20],a[400];
	 int k=0;
	 cin>>n;
	 for(int i=0;i<n;i++)
		 cin>>x[i]>>y[i]>>z[i];
	 for(int i=0;i<n;i++)
		 for(int j=i+1;j<n;j++)
			 {
	 			a[k]=dis[i][j]=sqrt((float)((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j])));
				k++;
		     }
	 for(int i=0;i<k-1;i++)
		 for(int j=0;j<k-i;j++)
			if(a[j]<a[j+1])
				 swap(a[j],a[j+1]);

	 for(int g=0;g<k;g++)
		 {
			 for(int i=0;i<n;i++)
			 {
				for(int j=i+1;j<n;j++)
				{
					if (a[g]!=a[g+1]&&a[g]==dis[i][j])
					{
						printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",x[i],y[i],z[i],x[j],y[j],z[j],a[g]);
					}
				}
			 }
		}
 return 0;
 }