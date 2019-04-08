/*
 * ???
 * ?????
 */

int main(){
    int n,a[300],k=0,q=0,t=0,b[100];
    cin>>n;
    double s=0;
    for(int i=0;i<n;i++)
    	{cin>>a[i];
    	s+=a[i];
    	}
    s/=n;
    double max=fabs(s-a[0]);
    for(int i=1;i<n;i++)
    {
    	if(fabs(s-a[i])>max)
    		{k=i;
    		max=fabs(s-a[i]);
    		}
    }max=fabs(s-a[0]);
    for(int i=1;i<n;i++)
        {
        	if(fabs(s-a[i])>=max)
        		{q=i;
        		max=fabs(s-a[i]);
        		}
        }
 for(int i=0;i<n;i++)
   { if(fabs(s-a[k])==fabs(s-a[i]))
		  b[t++]=a[i];}
 for(int i=0;i<t-1;i++){
	 for(int j=0;j<t-i-1;j++){
		 if(b[j]>b[j+1]){
			 int temp=b[j];
			 b[j]=b[j+1];
			 b[j+1]=temp;
		 }
	 }
 }
 if(t==1)cout<<a[k];
 else{ for(int i=0;i<t-1;i++){
	 cout<<b[i]<<',';
 }cout<<b[t-1];}
	return 0;
}