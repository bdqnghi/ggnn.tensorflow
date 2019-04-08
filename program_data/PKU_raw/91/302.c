

int main()
{char str1[103],str2[103];
cin.getline(str1,101);
char *p=str1,*q=str2;
int l=strlen(str1);
for(int i=0;i<l-1;i++)q[i]=p[i]+p[i+1];
q[l-1]=p[l-1]+p[0];
for(int i=0;i<l;i++)cout<<q[i];

return 0;
}