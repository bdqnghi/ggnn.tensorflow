
int main(){	
	int n,i;
	double nan[100]={0},nv[100]={0};
	char zfc[100];
	double gao[100],e;
	int j=0,m=0,k;
	int s,p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%lf",zfc,&gao[i]);
		if(zfc[0]=='m')
		{
			nv[j]=gao[i];
			j++;
		}
		else if(zfc[0]=='f')
		{
			nan[m]=gao[i];
			m++;
		}
	}
	s=j;
	p=m;




	


  for(k=1;k<=s;k++)
  {
	  for(j=0;j<s-k;j++)
	  {
		  if(nv[j]>nv[j+1])
		  {
			  e=nv[j];
			  nv[j]=nv[j+1];
			  nv[j+1]=e;
		  }
	  }
  }
 for(k=0;k<s;k++)
 {
	 if(k==0)
	 {
		 printf("%.2lf",nv[k]);
	 }
	 else {
		 printf(" %.2lf",nv[k]);
	 }
 }
 for(k=1;k<=p;k++)
 {
	 for(m=0;m<p-k;m++)
	 {
	 if(nan[m]>nan[m+1])
	 {
		 e=nan[m];
		 nan[m]=nan[m+1];
		 nan[m+1]=e;
	 }
	 }
 }
 for(k=p-1;k>=0;k--)
 {
	 printf(" %.2lf",nan[k]);
 }

	 


return 0;
}