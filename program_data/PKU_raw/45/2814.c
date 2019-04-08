int main()
{int i,l1,l2,j,k,I,J=0;
	char a[50],b[50],c;
	
	scanf("%s",a);scanf("%s",b);

l1=strlen(a);l2=strlen(b);

for (j=0;j<50;j++)
	if (a[0]==b[j])
	{
	
		for (k=0;k<=l1;k++)
		{if(a[k]!=b[j+k])
		break;
		if(k==l1-1)
		{J=j;
		break;}
		
		}if(J!=0)
		{printf("%d",J);break;}

	
	}
return 0;}
