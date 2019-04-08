int main ()
{char zf[202],nzf[202];
int haha=0;
gets(zf);
int ct=0;

for (int i1=0;zf[i1]!='\0';i1++)
{
    if(zf[i1]==' ')
    {
        for (int i2=i1+1;zf[i2]==32;i2++)
        { 
            i1++;
        }
            
    }
    nzf[ct]=zf[i1];

    ct++;
    
}
nzf[ct]='\0';
printf("%s",nzf);
    return 0;
}


