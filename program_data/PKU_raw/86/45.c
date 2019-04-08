int main(){
	int a,b,n,m,p[100],i,j;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&m);	
		for(i=0;i<m;i++)
		{
			scanf("%d",&p[i]);
		}	
		if(m==0)
			printf("60\n");
		else
		{
			a=p[m-1]+m*3;
			if(a<=60)
				printf("%d\n",(60-a)+p[m-1]);
		    else if(a>60&&a<=63)
			    printf("%d\n",p[m-1]);
		    else{
			    for(i=m-1;i>=0;)
				{
					b=p[i]+(i+1)*3;
			        if(b<=60)
					{
						printf("%d\n",(60-b)+p[i]);
						break;
					}
			        else if(b>60&&b<=63)
					{
						printf("%d",p[i]);
						break;
					}
				    else
						i--;
				}
			}
		}
	}
	return 0;
}