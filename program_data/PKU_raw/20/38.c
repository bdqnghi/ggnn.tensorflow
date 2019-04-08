/*#include<stdio.h>
void main()
{
	int n,i,j,k,max[100],c[100],m[100];
	char a[100][10],b[100][3];
	

	
		scanf("%s ",a[i]);
		for(j=0;j<3;j++)
			scanf("%c",&b[i][j]);
	}

	for(i=0;i<n;i++)
		for(j=0;j<10;j++)
		{
			if(a[i][j]!=' '&&a[i][j+1]==' ')break;
			c[i]=j;
		}

		for(i=0;i<n;i++)
		{
			m[i]=a[i][0];max[i]=0;
			for(j=0;j<=c[i];j++)
			if(m[i]<a[i][j])
			{
				m[i]=a[i][j];
			    max[i]=j;
			}
		}

			/*for(k=0;k<c[i]-1;k++)
			{
				max[i]=k;
			for(j=k+1;j<=c[i];j++)
			   if(a[i][k]<a[i][j])
					max[i]=j;
			}*/
	/*
		for(i=0;i<n;i++)
		{
			for(j=0;j<=max[i];j++)
				printf("%c",a[i][j]);
			for(k=0;k<3;k++)
				printf("%c",b[i][k]);
			if(max[i]==c[i])
				printf("\n");
			else if(max[i]<c[i])
			{
				for(j=max[i]+1;j<c[i];j++)
					printf("%c",a[i][j]);
				    printf("%c\n",a[i][c[i]]);
			}
		}
}*/
int main()
{
char a[11],str[4],max;int position,i=0;
while(cin.getline(a,sizeof(a),' ')&&cin.getline(str,sizeof(str),'\n'))
{
	max=a[0];
	for(i=0;i<strlen(a);i++)
		if(max<a[i])
			max=a[i];
	for(i=0;i<strlen(a);i++)
		if(max==a[i])
		{
			position=i;
			break;
		}
	for(i=0;i<=position;i++)
		cout<<a[i];
	cout<<str;
	for(i=position+1;i<strlen(a);i++)
		cout<<a[i];
	cout<<endl;
}
return 0;
}

