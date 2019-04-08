int main()
{
	double  n,a[300],b[300]={0},c[300]={0},sum=0,ave=0,max=0,temp=0;int i,j,num=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		sum=sum+a[i];
	  ave=sum/n;
	  for(i=0;i<n;i++)
		  b[i]=fabs(a[i]-ave);
	  for(i=0;i<n;i++)
		  if(b[i]>max)
			  max=b[i];
	  //cout<<max<<endl;
	  for(i=0;i<n;i++)
		  if(b[i]==max)
			  c[num++]=a[i];
	  if(num==1)
		  cout<<c[0];
	  else{
	   
	  for(i=0;i<num-1;i++)
		  for(j=0;j<num-i;j++)
			  if(c[j]>c[j+1])
			  { temp=c[j+1];c[j+1]=c[j];c[j]=temp;}
	  for(i=0;i<num-1;i++)
				  cout<<c[i]<<",";
			      cout<<c[num];
	  
	  
	  
	  
	  }
			 



 	
}