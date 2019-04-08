int main(){
    double n,s=0;
    int len,lon,i,z;
    char a[750],b[750];
    scanf("%lf",&n);
	scanf("%s",a);
	scanf("%s",b);
	z=1;
	len=strlen(a);
	lon=strlen(b);
	if(len!=lon) 
	{z=0;
	printf("error");}
	else
    {for(i=0;i<len;i++)
	{if ((a[i]!='A')&&(a[i]!='T')&&(a[i]!='G')&&(a[i]!='C'))
	{z=0;
	printf("error");
	break;}
	if ((b[i]!='A')&&(b[i]!='T')&&(b[i]!='G')&&(b[i]!='C'))
	{z=0;
	printf("error");
	break;}
	}
	if(z==1)
	{for(i=0;i<len;i++)
		{if(a[i]==b[i])
		s++;}
	double x=s/len;
	if(x>n) printf("yes");
		else printf("no");
	}
	}
return 0;	
}