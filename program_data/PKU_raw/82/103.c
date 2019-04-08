int main()
{
	int i,n,p1[100],p2[100],t[100],c=0,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	     scanf("%d%d",&p1[i],&p2[i]);
		 if(((p1[i]>=90)&&(p1[i]<=140))&&((p2[i]>=60)&&(p2[i]<=90)))
			 t[i]=1;
		 else
			 t[i]=0;
	}
	for(i=0;i<n;i++){
		if(t[i]==1){
		     c++;
			 if(c>max)
				 max=c;
		}
		else{
		    c=0;
		}
	}
	printf("%d",max);
	return 0;
}