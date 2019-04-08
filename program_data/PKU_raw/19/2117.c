void main()
{
	int i,j,k,tag=1,flag=1,e=0;
	char q[101],tmp[50][101],p[101],t[101];
	gets(q);
	gets(p);
	gets(t);
	for(i=0;i<50;i++)
	{
		k=0;
		flag=1;
		for(j=e;j<101;j++)
		{
			if(q[j]!=' '&&q[j]!=','&&q[j]!='\0')
			{
				tmp[i][k]=q[j];
				k++;
			}
			else if(q[j]==' ')
			{
				tmp[i][k]='\0';
				e=j+1;
				break;
			}
			else if(q[j]==',')
			{
				tmp[i][k]='\0';
				e=j+2;
				break;
			}
			else if(q[j]=='\0')
			{
				tmp[i][k]='\0';
				tag=0;
				break;
			}
		}
		for(j=0;j<101;j++)
		{
			if(tmp[i][j]!=p[j]&&p[j]!='\0')
			{
				flag=0;
				break;
			}
			else if(tmp[i][j]==p[j]&&p[j]!='\0') continue;
			else if(p[j]=='\0') break;
		}
		if(tag==1&&flag==0&&i>0) printf(" %s",tmp[i]);
		else if(tag==1&&flag==1&&i>0) printf(" %s",t);
		else if(tag==0&&flag==0&&i>0)
		{
			printf(" %s",tmp[i]);
			break;
		}
		else if(tag==0&&flag==1&&i>0)
		{
			printf(" %s",t);
			break;
		}
		else if(tag==1&&flag==0&&i==0) printf("%s",tmp[i]);
		else if(tag==1&&flag==1&&i==0) printf("%s",t);
		else if(tag==0&&flag==0&&i==0)
		{
			printf("%s",tmp[i]);
			break;
		}
		else if(tag==0&&flag==1&&i==0)
		{
			printf("%s",t);
			break;
		}
	}
}