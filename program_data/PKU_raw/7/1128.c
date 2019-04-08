
int main(int argc, char* argv[])
{
	char s1[300],s2[300],s3[300];
	scanf("%s %s %s",s1,s2,s3);

	int len1,len2;
	len1=strlen(s1);
	len2=strlen(s2);
    
	int i,j,k=0;
	int tag=0,tag1;
      
	
		for(i=0,j=0;j<len1;j++)
		{
			if(tag!=1&&k==0)
		{
			if(s2[i]==s1[j])
			{
				for(k=j+1,i=i+1;i<len2;k++)
				{
					if(s2[i]!=s1[k])
					{
						i=0;
					}

						else
					{
						i++;
						if(i==len2)
						{
							tag=1; tag1=k-len2+1;
						}
					}
				}
			}
		}
			else if(tag!=1&&k==len1) break;
			else if(tag==1) break;


		}
		
		if(tag==0)
		{
			printf("%s",s1);
		}
		else
		{
			int t,m;
			for(t=tag1,m=0;t<tag1+len2;t++)
			{
				s1[t]=s3[m];
				m++;
				if(m==len2)
				{
					break;
				}
			}
			printf("%s",s1);
		}


	


	return 0;
}
