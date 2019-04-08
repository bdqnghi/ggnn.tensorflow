int main(){
	int a[100],b[100],i=0,j=0;
	cin>>a[0]>>b[0];
	while(a[i]>1)
	{a[i+1]=a[i]/2;
	 i++;
	}
	while(b[j]>1)
	{b[j+1]=b[j]/2;
	j++;
	}

	while(a[i]==b[j])
	{i--;
		j--;
		}
	cout<<a[i+1];
	return 0;
}