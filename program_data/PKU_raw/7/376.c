int main()
{
	char str[257],sub[257],re[257];
	int i,j,k,n1,n2,n3,h=0;
	scanf("%s%s%s",str,sub,re);
	n1=strlen(str);
	n2=strlen(sub);
	n3=strlen(re);
	for(i=0;i<=n1-n2;i++)
	{  
	    if(str[i]==sub[0])
		{
			int ll=0;
			for(j=0;j<n2;j++)
			{
				if(str[i+j]!=sub[j])
				{
					ll=1;
					break;
				}
				else
					continue;
			}
		    if(ll==0)
			{
				h=1;
				for(k=0;k<i;k++){
				    printf("%c",str[k]);
				}
				for(k=0;k<n3;k++){
					printf("%c",re[k]);
				}
				for(k=i+n2;k<n1;k++){
					printf("%c",str[k]);
				}
				break;
			}
			else
				continue;
		 }
	}
	if(h==0)
		printf("%s",str);
	return 0;
}