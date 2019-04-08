int convertor(char A[],int code,int right)
{
	if(right==0)
		return(A[0]);
	else return(A[right]+code*convertor(A,code,right-1));
}

void main()
{int shuzhi1,shuzhi2,i,j,n,l;
 char num1[20],num2[20];
 scanf("%d",&shuzhi1);
 scanf("%s",num1);
 scanf("%d",&shuzhi2);
 n=strlen(num1);
 for(i=0;i<n;i++)
	{if(num1[i]>='A'&&num1[i]<='Z')
		 num1[i]=num1[i]-'A'+10;
     else if(num1[i]>='a'&&num1[i]<='z')
		 num1[i]=num1[i]-'a'+10;
	 else if(num1[i]>='0'&&num1[i]<='9')
		 num1[i]=num1[i]-'0';
	}
 l=convertor(num1,shuzhi1,n-1);
 j=0;
while(l/shuzhi2>0)
	{
	 num2[j]=l%shuzhi2;
     l=l/shuzhi2;
	 j++;
	}
 num2[j]=l;
 for(i=0;i<=j;i++)
	 	{if(num2[i]>9)
		 num2[i]=num2[i]-10+'A';
         else num2[i]=num2[i]+'0';
		}
 for(i=j;i>=0;i--)
	 printf("%c",num2[i]);
}
