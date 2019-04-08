
int main()
{
	int n,i,j,a[100],b,m,y[200];
	scanf ("%d",&n);
	for (j=0;j<n;j++){
		scanf("%d",&m);
		y[j]=60;
		b=0;
		for(i=0;i<m;i++){
			scanf("%d",&a[i]);
		    if (a[i]<(59-3*i)){
                b++;
			    y[j]=60-3*b;
		    }
		    if (a[i]==(59-3*i)){
			    y[j]=59-3*i;
            }
	    }
	}
    for (j=0;j<n;j++){		
         printf ("%d\n",y[j]);
    }
	return 0;
}