int main()
{
    int a,b,c,m[5]={0},i;char k[5]={'\0'};//cout<<m[3]<<"   "<<k[3]<<endl;
    for(a=0;a<3;a++)
         for(b=0;b<3;b++)
         {if(a==b) continue;
            for(c=0;c<3;c++)
            {
                if(a==c||b==c) continue;
                m[1]=b>a;
                m[2]=(a>b)+(a>c);
                m[3]=(c>b)+(b>a);
                if(m[1]>=m[2]&&a>b||m[1]<=m[2]&&a<b)  continue;
                if(m[2]>=m[3]&&b>c||m[2]<=m[3]&&b<c)  continue;
                if(m[1]>=m[3]&&a>c||m[1]<=m[3]&&a<c)  continue;
                k[a]='A';k[b]='B';k[c]='C';
                for(i=0;i<3;i++)
                cout<<k[i];
            }
        }
 
return 0;
}
