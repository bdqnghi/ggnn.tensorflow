int main()
{
int z,q,s,l;
int z1,q1,s1,l1;
for(z=1;z<=5;z++)
 for(q=1;q<=5;q++)  {if(z==q)continue;else
  for(s=1;s<=5;s++)  {if(z==s||q==s)continue;else
   for(l=1;l<=5;l++)  {if(z==l||q==l||s==l)continue;else
	   if((z+q==s+l)+(z+l>s+q)+(z+s<q)==3){z1=z;q1=q;s1=s;l1=l;break;}
}}}
z=z1;q=q1;s=s1;l=l1;
int m[4]={z,q,s,l};
char n[4]={'z','q','s','l'};
int i=0,j=0;
int zzz=z;char zzzz='z';
for(i=0;i<=2;i++)
 for(j=0;j<=2-i;j++)
	 if(m[j]<m[j+1]){zzz=m[j];m[j]=m[j+1];m[j+1]=zzz;zzzz=n[j];n[j]=n[j+1];n[j+1]=zzzz;}
for(i=0;i<=3;i++)
cout<<n[i]<<" "<<m[i]*10<<endl;

return 0;
}