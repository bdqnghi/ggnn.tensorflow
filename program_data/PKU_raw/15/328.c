int main()
{
	int n,i,j,area,flag=1,glaf=0,a_1,a_2,b_1,b_2,term_1,term_2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		term_2=1;
		for(j=0;j<n;j++)
		{
			term_1=term_2;
			scanf("%d",&term_2);
			if(flag)
			{
				if(!term_2)
				{
					a_1=i;
					b_1=j;
					flag=!flag;
				}
			}
			else
			{
				if(!glaf&&i>a_1&&term_1==0&&term_2==0)
				{
					a_2=i;	glaf=!glaf;
				}
				if(glaf&&term_1==0&&term_2==255)
				{
					b_2=j-1;
					goto label;
				}
			}
		}
	}
label:area=(a_2-a_1-1)*(b_2-b_1-1);
	  printf("%d\n",area);
	  return 0;
}




