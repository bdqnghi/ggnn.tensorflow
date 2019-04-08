int main(int argc, char* argv[])
{
	int i,n,num[300],s,j,b,c;
	double ave,v[300],a;
	s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		s+=num[i];
	}
	ave=(double)s/n;
	for(i=0;i<n;i++){
		if(num[i]<ave){
			v[i]=ave-num[i];
		}
		else{
			v[i]=num[i]-ave;
		}
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(v[j]>v[i]){
				a=v[j];
				v[j]=v[i];
				v[i]=a;
				b=num[j];
				num[j]=num[i];
				num[i]=b;
			}
		}
	}
	if(v[i]==v[i+1]&&num[i]>num[i+1]){
			c=num[i];
			num[i]=num[j];
			num[j]=c;
		}
	printf("%d",num[0]);
	for(i=0;i<n-1;i++){
		if(v[i]==v[i+1]&&num[i]>num[i+1]){
			c=num[i];
			num[i]=num[j];
			num[j]=c;
		}
		else if(v[i]>v[i+1]){
			break;
		}
		
		printf(",%d",num[i+1]);
		
		
	}
	printf("\n");
	
	return 0;
}

