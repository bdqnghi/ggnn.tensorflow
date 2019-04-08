
int main()
{
	char a[102];
    int b[50],c[50],k,p,q,i,j,s=0,n,min,h,z;
	char f,g;
	gets(a);
	n=strlen(a);
	f=a[0];
     g=a[n-1];
	 for(z=1;z<=50;z++)
	 
	 { for(i=0;i<(n-1);i++){h=0;
		if(a[i]==f)
		{for(j=i+1;j<n;j++)
			{	
				if(a[j]==g)break;
				else
				{if(a[j]==f){h=1;break;}}
		
		}
		if(h==1)continue;
		else {b[s]=i;c[s]=j;a[i]='\0';a[j]='\0';s++;}}}}
		
		for(q=1;q<=n/2;q++){min=300;
		for(k=0;k<n/2;k++)
		{if(c[k]<min){min=c[k];p=k;}}
			printf("%d %d\n",b[p],c[p]);
			b[p]=400;c[p]=400;}

	return 0;
}

