int main()
{
			char s[1000],f[200];
			cin.getline(s,200);
			char *p;int i,t;
			p=s;i=0;
			while (*p!='\000')
					{
						while (((*p<48)||(*p>57))&&(*p!='\000')) p++;
						while ((*p>=48)&&(*p<=57)&&(*p!='\000')) {cout<<*p;p++;}
      cout<<endl;
					}
}
