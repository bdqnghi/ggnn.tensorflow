

int a[MAXN], f[MAXN] = {0},n,longest_index=-1,longest_f = -1; 



void main() 
{ 
    int i,t; 
    scanf("%d",&n); 
    for (i=0;i<n;++i) 
      scanf("%d",&a[i]); 

	{ 
		int i,j; 
		for (i=0; i<n;++i) 
		  f[i] = 1; 
		for (i=n-2; i >= 0; --i) 
		{ 
		  for (j=i+1;j<n;++j) 
		  { 
			if ((f[i]<f[j]+1 )&& (a[i] >= a[j])) 
			{ 
				f[i]=f[j]+1; 
				if (longest_f<f[i]) 
				{ 
				  longest_f=f[i]; 
				  longest_index=i; 
				} 
			} 
		  } 
		} 
	} 

	printf("%d\n",longest_f);


} 

