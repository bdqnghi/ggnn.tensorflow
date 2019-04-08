
int x[200],y[200],m,n;
void sca(void)
{
    int i;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
	    scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++)
	{
	    scanf("%d",&y[i]);
	}
}

void bubble(int a[],int n)          //&Ecirc;&yacute;ื้&Atilde;ฐ&Aring;&Yacute; &pound;&not;n&Icirc;&ordf;&Ecirc;&yacute;ื้&sup3;ค&para;&Egrave;
{
    int i,j,b;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                b=a[j];
                a[j]=a[j+1];
                a[j+1]=b;                  
            }                  
        }                
    }     
} 

void bing(int a[],int l1,int b[],int l2)
{
    int i,j,z[500];
	for(i=0;i<l1;i++)
	    z[i]=a[i];
	for(j=0;i<(l1+l2);j++,i++)
	    z[i]=b[j];
	printf("%d",z[0]);
	for(i=1;i<(l1+l2);i++)
		printf(" %d",z[i]);
	
}

int main()
{
    sca();
	bubble(x,m);
	bubble(y,n);
    bing(x,m,y,n);
	return 0;
}