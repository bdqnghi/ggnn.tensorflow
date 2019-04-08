int main ()
{   
	struct point
	{
		char w[20];
	}sen[40];
	int i,j;
	for(i=0;i<40;i++)
	{
		for(j=0;j<20;j++)
		{
			sen[i].w[j]='\0';
		}
	}
	char a[100];
	char from[20],to[20];
	gets(a);
	gets(from);
	
	gets(to);
	int e;
	e=strlen(to);
	to[e]=' ';
	to[e+1]='\0';
	int b;
	b=strlen(a);
	int k,p,q;
	int num=0;
	for(i=0,j=0;i<=b;i++)
	{   int m;
		if(a[i]==' ')
		{
			for(k=i;;k--)
			{
				if(k==0)
				{
					m=k;
					break;
				}
				else if(a[k-1]==' ')
				{
					m=k;
					break;
				}
			}
			for(p=m,q=0;p<i;p++,q++)
			{
				sen[j].w[q]=a[p];
				sen[j].w[q+1]=' ';
			}
			
			j++;
			num++;
		}
		else if(i==b)
		{
			for(k=i;;k--)
			{
				if(k==0)
				{
					m=k;
					break;
				}
				else if(a[k-1]==' ')
				{
					m=k;
					break;
				}
			}
			for(p=m,q=0;p<i;p++,q++)
			{
				sen[j].w[q]=a[p];
				sen[j].w[q+1]=' ';
			}
			j++;
			num++;
		}
	}
	int judge;
	for(i=0;i<=num;i++)
	{   
		judge=1;
		for(j=0;from[j]!='\0';j++)
		{
			if(sen[i].w[j]!=from[j])
			{
				judge=0;
				break;
			}
		}
		if(judge==1)
		{
			strcpy(sen[i].w,to);
			
		}
	}
	for(i=0;;i++)
	{
		if(sen[num-1].w[i]==' ')
		{
			sen[num-1].w[i]='\0';
			break;
		}
	}
    
	
	
	for(i=0;i<=num+1;i++)
	{
		printf("%s",sen[i].w);
	}
	return 0;
}


				

	

