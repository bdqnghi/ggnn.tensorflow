int comp(const void *a,const void *b) 
{ 
return *(int *)a-*(int *)b; 
} 
int main(){
	int n;
	while(cin>>n){
		if(n==0)break;
		int a[n];
		int b[n];
		int i,j;
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
			cin>>b[i];
		qsort(a,n,sizeof(int),comp);
		qsort(b,n,sizeof(int),comp);
        int first1=0,first2=0,last1=n-1,last2=n-1;
        int sum=0;
        while(first2<=last2){
        		if(a[last1]>b[last2]){
        			sum=sum+200;
        			last1--;
        			last2--;
        			continue;
        		}
        		if(a[last1]<b[last2]){
        			sum=sum-200;
        			first1++;
        			last2--;
        			continue;
        		}
        		if(a[last1]==b[last2]){
                	if(a[first1]<b[first2]) {sum=sum-200;last2--;first1++;continue;}
                	if(a[first1]>b[first2]) {sum=sum+200;first2++;first1++;continue;}
                	if(a[first1]==b[first2]){
        			if(a[first1]<b[last2]) sum=sum-200;
        			if(a[first1]==b[last2]) sum=sum;
        			if(a[first1]>b[last2]) sum=sum+200;
        			first1++;
        			last2--;
        			continue;
        		}
        	}
        }
        cout<<sum<<endl;
	}
	return 0;
}