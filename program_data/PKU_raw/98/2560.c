char a[10000],tmp[40],cn;
int n,i,j,l=0,tmpl=0;

int main(int argc, char* argv[])
{
	
	gets(&cn);
	n=atoi (&cn);
	gets(a);
    for (i=0;i<n;i++)
	{
		for (j=0;j<40;j++)
		{
			if (a[j+l]!=' ')
			{
				tmp[j]=a[j+l];
			}
			else 
			{
				tmp[j]='\0';
				j=40;	
			}
		}
		l+=strlen(tmp)+1;
        l:if (tmpl==0)
		{
			printf ("%s",tmp);
			tmpl+=strlen(tmp)+1;
		}
        else if ((strlen(tmp)+tmpl)<=80)
		{
			printf (" %s",tmp);
  		    tmpl+=strlen(tmp)+1;
		}
		else if ((strlen(tmp)+tmpl)>80)
		{
			printf ("\n");
			tmpl=0;
			goto l;
		}
        //printf ("%d",tmpl);
	}
	return 0;
}