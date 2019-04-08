int main()
{
    int i,j,m,p;
	char zichuan[100],danci[100];
	scanf("%s%s",&zichuan,&danci);
    int n=strlen(zichuan);
	p=0;
	for(i=0;danci[i]!=0;i++)
	{
		if(p==1)
		{
			break;
		}
		if(danci[i]==zichuan[0])
		{
			for(j=1;j<n;j++)
			{
				if(danci[i+j]!=zichuan[j])
				{
                    break;				
				}
				else
				{
					p=1;
					m=i;
					printf("%d",m);
					break;
				}
			}
		}
	}
	return 0;
}