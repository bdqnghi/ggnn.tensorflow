int compare (const void * a, const void * b) 
{  
  return ( *(int*)b - *(int*)a );
}

int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)cin>>a[i];
	qsort(a,n,sizeof(int),compare);
	for(int i=0;i<=1;i++)cout<<a[i]<<endl;
	return 0;
}
