int main()
{
			char s[40],f[40];
			cin.getline(s,40);
			char *p;
                        int i,t;
			p=s;
                        i=0;
			while (*p!='\0')
					{
						while (*p>=48&&*p<=57) {f[i]=*p;i++;p++;}
						while ((*p<48||*p>57)&&(*p!='\0')) p++;
						if (*p=='\0') break;
                                                f[i]=' ';i++;
					}
					for(t=0;t<i;t++)
			{
                         if (f[t]!=' ') 
                               cout<<f[t];
                         else cout<<endl;
                        }
                        return 0;
}