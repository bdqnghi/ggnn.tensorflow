

int wakaka(int z,int q,int s,int l)
{int i;
for(i=50;i>=10;i-=10)
{
if(z==i)printf("z %d\n",z);
if(q==i)printf("q %d\n",q);
if(s==i)printf("s %d\n",s);
if(l==i)printf("l %d\n",l);
}
return 1;
}

int ohyeah()
{int z,q,s,l;
for(z=10;z<=50;z+=10)
for(q=10;q<=50;q+=10)
for(s=10;s<=50;s+=10)
for(l=10;l<=50;l+=10)
if(z!=q&&z!=s&&z!=l&&q!=s&&q!=l&&s!=l)
if((z+q==s+l)&&(z+l>s+q)&&(z+s<q))
{wakaka(z,q,s,l);return 1;}
}

int main()
{ohyeah();}