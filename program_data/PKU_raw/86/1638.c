
int main()
{
    int d,c,n,m,i,j,k,a[20],b[100];
	cin>>n;
    for(i=0;i<n;i++)
		{cin>>m;
	    if(m==0) {b[i]=60;continue;}
		for(j=0;j<m;j++)
		    {cin>>a[j];}
		if(a[m-1]<=(60-m*3))
		    {b[i]=(60-m*3);}
		else 
			{ {for(k=m-1;;k--)
			 if(a[k]+(k+1)*3<=60) break;}
		      c=60-((k+1)*3);
			  if(c<=a[k+1]) b[i]=c;
			  else b[i]=a[k+1];}
	       }
	  for(i=0;i<n;i++) cout<<b[i]<<endl;
	return 0;
}

