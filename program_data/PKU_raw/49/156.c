

void pause()
{int n;
scanf("%d",&n);
}

void find_huiwen(char*str,int len,int n)
{void reverse(char*huiwen,char*rev,int geshu);
char * huiwen;
huiwen=(char*)malloc((len+1)*sizeof(char));
char * rev;
rev=(char*)malloc((len+1)*sizeof(char));

int i,j;

for(i=0;i<=n-len;i++)
	{for(j=0;j<=len-1;j++)
		{huiwen[j]=*(str+i+j);
		}
	huiwen[len]='\0';
	reverse(huiwen,rev,len);//rev???
	if(strcmp(rev,huiwen)==0)
	printf("%s\n",huiwen);
	}
}
void reverse(char*huiwen,char*rev,int geshu)
{
int j;
for(j=0;j<=geshu;j++)
{rev[j]=huiwen[geshu-1-j];
}
rev[geshu]='\0';
}

int main()
{//void pause();
char str[500];
int n;
scanf("%s",str);
n=strlen(str);
//???????
int i;

for(i=2;i<=n;i++)
	find_huiwen(str,i,n);
	

pause();
	return 0;
}
