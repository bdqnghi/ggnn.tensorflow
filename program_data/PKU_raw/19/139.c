int main()
{
	char a[101],b[101],c[101],q[101];
	int m,i,k,t,n,l,N,z=0;
	gets(a);	
	m=strlen(a);
	strcpy(q,a);

	scanf("%s%s",&b,&c);
	n=strlen(b);
	l=strlen(c);
 

	for(i=0;i<m;i++)
	{
		N=n;
	
			if((i==0)||(a[i-1]==32&&a[i]==b[0]&& (a[i+n]==32 || a[i+n]=='\0')) )
				for(k=i,t=0;t<n && k<m;k++,t++)
				{
					if(a[k]==b[t]) N--;
				}	
			if(N==0)
			{ z=1;
				
				if(n>=l)  
				{
					for(k=0,t=i;k<l;t++,k++)
						a[t]=c[k];
                    
						a[i+l]=' ';
					for(k=i;k<m-(n+1);k++)
					
						a[k+l+1]=q[k+n+1];
					a[m-(n-l)]='\0';
					


				}
	            if(n<l)  
				{
					for(k=0,t=i;k<l;t++,k++)
						a[t]=c[k];	
					a[i+l]=' ';
					for(k=i;k<m-(n+1);k++)
					
						a[k+l+1]=q[k+n+1];
					a[m+(l-n)]='\0';
					

				}
				m=strlen(a);
				strcpy(q,a);

			}
}
		
	
 	if(z==1 ) printf("%s",a);
    if(z==0&&N!=0)
	
		for(i=0;i<m;i++)
		printf("%c",q[i]);
	return 0;
}
