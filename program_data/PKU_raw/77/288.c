char c1, c2;
int num;
int k=0;
int s[1000][2];
int main()
{
    void f(char str[1000]);
	char a[1000];
	gets(a);
    c1=a[0];
	int i, j;

	num=strlen(a);
	for(i=1;i<num;i++)
    {
		if(a[i]!=c1) {c2=a[i];break;}
	}
	f(a);
    int temp1, temp2;
	for(i=0;i<k;i++)
	{
		for(j=0;j<k-1-i;j++)
		{
		    if(s[j][1]>s[j+1][1])
			{
				temp1=s[j+1][1];
				s[j+1][1]=s[j][1];
				s[j][1]=temp1;
	            temp2=s[j+1][0];
				s[j+1][0]=s[j][0];
				s[j][0]=temp2;
			}
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%d %d\n", s[i][0], s[i][1]);
	}
	printf("\n");
	return 0;
}
void f(char str[1000])
{
	int i, j;

	
	num=strlen(str);
	for(i=0;i<num-1;i++)
	{
		
		   if(str[i]==c1 && str[i+1]==c2)
		   {
              s[k][0]=i;s[k++][1]=i+1;
			  str[i]=' ';str[i+1]=' ';
		      
		   }
	       else
		   {
			 for(j=i;j<num-1;j++)
			 {
				 int p, judge=0;
			    if(str[i]==c1 && str[j]==' ' && str[j+1]==c2)  
				{
					for(p=i+1;p<=j;p++)
					{
						if(str[p]==' '){judge=judge+1;}
					    if(judge==j-i)
						{ s[k][0]=i;s[k++][1]=j+1;
			              str[i]=' ';str[j+1]=' ';
				          break;
						}
					}
				}
			 }
			
		   }
	
	}
	
	if(k*2<num)f(str);//zhuyixunhuanjiesudexianzhitiaojian
	
}

