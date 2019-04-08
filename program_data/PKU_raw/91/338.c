int main(){
	int t=0;
char a[111],b[110];
for(int i=0;i<111;i++)*(a+i)='\n';
for(int i=0;i<110;i++)
{*(a+i)=getchar();
if(*(a+i)=='\n'){*(a+i)=*a;break;}
else t++;
}
for(int i=0;i<t;i++)
{*(b+i)=(char)((int)*(a+i)+(int)*(a+i+1));}
for(int i=0;i<t;i++)cout<<*(b+i);
	return 0;
}
