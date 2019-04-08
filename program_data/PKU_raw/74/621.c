int main () {
    int m,n,i,j,k,t,s,b=0,z,o,v=0,a[100],p[100],l[100];
	scanf ("%d %d",&m,&n);
	for (i=m;i<=n;i++) 
	{
		z=0;
		k=0;
		s=i;
		t=0;
		v=0;
		for (j=1;j<=i;j++) {
			
			if (i%j==0) t++;
		}
		while (s!=0){
		    
			a[k]=s%10;
			p[z]=s%10;
			s=s/10;
			k++;
			z++;
		}
	
		for (k=0,o=z-1;k<z,o>=0;k++,o--){
			if (a[k]==p[o]) v++;
		}
		if (t==2 && v==z){
			l[b]=i;
			b++;
		}
	}
	if (b==0) printf ("no");
    else printf ("%d",l[0]);
         for (i=1;i<b;i++){
		 printf (",%d",l[i]);
		 }
    return 0;
}

		

