int main()
{
	char a[501],b[2000][501];
	int i,j,k,l,p,q,t=0;
	scanf("%s",a);
    l=strlen(a);
	for(i=0;i<=l-1;i++)       /*????a[0]????,???????????????????*/
	{
		for(j=i+1;j<=l-1;j++)     //?a[0]????????
		{
			if(a[i]==a[j])                  //?????
			{
				for(k=1;k<=(j-i+1)/2;k++)        //?????????????
				{
					if(a[i+k]!=a[j-k])
						break;
					else if(a[i+k]==a[j-k]&&k==(j-i+1)/2)
					{
						q=0;
						t++;
						for(p=i;p<=j;p++)
						{
							b[t][q++]=a[p];
						}
						b[t][q]='\0';
					}
				}
			}
		}
	}
	for(i=2;i<=l;i++)
	{
		for(j=1;j<=t;j++)
		{
			if(strlen(b[j])==i)
			{
				printf("%s",b[j]);
				printf("\n");
			}
		}
	}
}