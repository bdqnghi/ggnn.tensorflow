void huan(int start,char W[100],char B[100],int Len1,int Len2,int Len3,int t)
{
	int i,k;
	char WW[100];
	for(i=0;i<start;i++)
		WW[i]=W[i];
	for(i=start,k=0;i<start+Len3;i++,k++)
		WW[i]=B[k];
	for(i=start+Len3;i<=Len1-Len2*t+Len3*t-1;i++)
		WW[i]=W[i+Len2-Len3];
	for(i=0;i<=Len1-Len2*t+Len3*t-1;i++)
		W[i]=WW[i];
}


int main()
{
	char whole[100];
	char a[100];
	char b[100];
	char gai[100];
	gets(whole);
	gets(a);
	gets(b);
	int i,j,k,t;
	int len1;
	int len2;
	int len3;
	len1=strlen(whole);
	len2=strlen(a);
	len3=strlen(b);
    int judge;
	int begin[100];
	t=0;
	if(whole[0]!=a[0])
	{
	for(i=0;i<len1-len2+1;i++)
	{
		for(j=i, k=0;j<len2+i;j++,k++)
		{
			if(whole[j]!=a[k])
			{
				judge=0;
				break;
			}
			else
				judge=1;
		}
		if(whole[i-1]==' ' && judge==1)
		{
		    begin[t]=i;
			t++;
		}
	}
	}
	else
	{
		t=1;
		begin[0]=0;
for(i=0;i<len1-len2+1;i++)
	{
		for(j=i, k=0;j<len2+i;j++,k++)
		{
			if(whole[j]!=a[k])
			{
				judge=0;
				break;
			}
			else
				judge=1;
		}
		if(whole[i-1]==' ' && judge==1)
		{
		    begin[t]=i;
			t++;
		}
	}
	}

	if(len1>=len2)
	{
    int u;
	for(i=t-1,u=1;i>=0;i--,u++)
	{
		huan(begin[i],whole,b,len1,len2,len3,u);
	}
	for(i=0;i<=len1-1-len2*(u-1)+len3*(u-1);i++)
	{
		printf("%c",whole[i]);
	}
	}
	else
	{int v;
	for(i=0,v=1;i<=t-1;i++,v++)
	{
		huan(begin[i],whole,b,len1,len2,len3,v);
	}
	for(i=0;i<=len1-1-len2*(v-1)+len3*(v-1);i++)
	{
		printf("%c",whole[i]);
	}
	}


	return 0;
}	