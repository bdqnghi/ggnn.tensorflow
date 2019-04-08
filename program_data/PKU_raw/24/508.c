void main()
{
    char str[5000]={'0'},w[50][100]={'0'};
    int i=0,k=0,j=0,t[50],p[50],b[50];
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
    	if(str[i]!=' ')
    	{w[k][j]=str[i];
    	j++;
    	}
        else {k++;j=0;}
    }
    for(i=0;i<=k;i++)
    {b[i]=strlen(w[i]);
    }
    for(i=0;i<=k;i++)
    {   t[i]=0;
    	for(j=0;j<=k;j++)
    	if(b[i]<b[j])
    	t[i]=1;
    }
    for(i=0;i<=k;i++)
    {if(t[i]==0)
    {printf("%s\n",w[i]);
    break;}
    }
    for(i=0;i<=k;i++)
    {   p[i]=0;
    	for(j=0;j<=k;j++)
    	if(b[i]>b[j])
    	p[i]=1;
    }
    for(i=0;i<=k;i++)
    {if(p[i]==0)
    {printf("%s\n",w[i]);
    break;}
    }    
}