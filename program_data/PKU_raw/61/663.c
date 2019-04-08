int main()
{
	int n,a,i,a1,a2,t,l,m;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		a1=1;a2=1;
		if(a==1)
			l=a1;
		else {
		     if(a==2)
		    	l=a2;
			 else {
				 l=2;
           		for(t=1;t<a-2;t++){
        			m=a2;
		        	a2=l;
					l+=m;
				}
			 }
		}
	printf("%d\n",l);
	}
    return 0;
}
