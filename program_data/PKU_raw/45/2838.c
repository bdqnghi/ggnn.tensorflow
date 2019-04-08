int main()
{
    int m,n,i,j,e,a;
	char s[10000],w[10000];
	scanf("%s%s",s,w);
	m=strlen(s);
	n=strlen(w);
	for(j=0;j<n;j++)
	{
		if(s[0]==w[j])
		{
			int t=j+1;
			int k;
			for(k=1;k<m;k++)
			{
				if(s[k]!=w[t]) break;
				else t++;
			}
			if(k==m) 
			{
				printf("%d\n",t-m);
				break;
			}

		/*	a=0;
			for(i=0,e=j;i<m,e<n-m;i++,e++)
			{
				if(s[i]!=w[e]){a=1;break;}
		 		
			}
			if(a==0){printf("%d",j);break;}
			*/

		}
	}				
	return 0;
}
        

