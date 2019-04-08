int main()
{
	double f;
	int i,p,s=1;
	char a[501],b[501];
	scanf("%lf\n%s\n%s\n",&f,a,b);
	int len1=strlen(a);
	int len2=strlen(b);
	if(len1!=len2){printf("error");}
	else if(len1==len2)
	{
		for(i=0;i<len1;i++)
		{
			if(((a[i]!='A')&&(a[i]!='T')&&(a[i]!='C')&&(a[i]!='G'))||
				((b[i]!='A')&&(b[i]!='T')&&(b[i]!='C')&&(b[i]!='G')))
			{
				printf("error");
				p=0;
				break;
			}
			else if(a[i]==b[i]){s++;}
		}
	    if((1.0*s/(1.0*len1)>f)&&(p!=0)){printf("yes");}
		else if((1.0*s/(1.0*len1)<=f)&&(p!=0)){printf("no");}

	}
	return 0;


}

