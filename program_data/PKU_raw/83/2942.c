int main(){
	int n,i;
	double sumjd=0,avejd;
	int k,sumxf=0;
	int xf[10];
	int fs[10];
	double jd[10];
    
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
	    scanf("%d",&(xf[i]));
	}
	 for(i=0;i<n;i++)
	{
	    scanf("%d",&(fs[i]));
	}

	 for(k=0;k<n;k++)
	 {
	     if(fs[k]>=90)
		 {
		 jd[k]=4.0;
		 }
	     else if(fs[k]>=85)
		 {
		 jd[k]=3.7;
		 }
	     else if(fs[k]>=85)
		 {
		 jd[k]=3.7;
		 }
		 else if(fs[k]>=82)
		 {
		 jd[k]=3.3;
		 }
		 else if(fs[k]>=78)
		 {
		 jd[k]=3.0;
		 }
		 else if(fs[k]>=75)
		 {
		 jd[k]=2.7;
		 }
		 else if(fs[k]>=72)
		 {
		 jd[k]=2.3;
		 }
		 else if(fs[k]>=68)
		 {
		 jd[k]=2.0;
		 }
		 else if(fs[k]>=64)
		 {
		 jd[k]=1.5;
		 }
		 else if(fs[k]>=60)
		 {
		 jd[k]=1.0;
		 }
	     else
		 {
		 jd[k]=0;
		 }
	 }
     
     for(i=0;i<n;i++)
	 {
	     sumjd=sumjd+1.0*xf[i]*jd[i];
	 }
	 for(i=0;i<n;i++)
	 {
	     sumxf=sumxf+xf[i];   
	 }
     avejd=1.0*sumjd/sumxf;
	 printf("%.2lf",avejd);
	 return 0;
}

