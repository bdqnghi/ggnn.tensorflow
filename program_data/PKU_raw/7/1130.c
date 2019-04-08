
int main(int argc, char* argv[])
{
	char a[256],b[256],c[256];
	int la,i,j,lb,lc,h=300,p;
	scanf ("%s %s %s",a,b,c);
    la=strlen (a);
	lb=strlen (b);
	lc=strlen (c);
    for (j=0;j<la;j++)
	{   
		if (b[0]==a[j]) 
		{   
			for (i=0;i<lb;i++) 
			{	if (b[i]!=a[j+i]) 
					break;
            if ((i==lb-1) && (b[i]==a[j+i]))
			{	
				h=j;
			    j=100;
				break;
			}
			}
		}
	}
    if(h!=300)
	{
    	for (p=h;p<h+lb;p++)
		{
		     a[p]=c[0+p-h];
		}
	}
printf("%s",a)    ;

	return 0;
}

