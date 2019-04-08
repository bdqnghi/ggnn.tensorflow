int main()
{
	int z,q,s,l;                                                      //????????????????
	int a[4],t;char c[4],u;                                           //a[4]??????c[4]??????t?u??????
    for(z=1;z<=5;z++)                     //????
		for(q=1;q<=5;q++)
			if(q!=z)
				for(s=1;s<=5;s++)
					if(s!=z&&s!=q)
						for(l=1;l<=5;l++)
							if(l!=z&&l!=q&&l!=s)
								if(z+q==s+l&&z+l>q+s&&z+s<q)//??????
								{a[0]=z;a[1]=q;a[2]=s;a[3]=l;//???????????????
								c[0]='z';c[1]='q';c[2]='s';c[3]='l';
								break;}
for(int i=0;i<4;i++)
for(int j=0;j<3-i;j++)
if(a[j]<a[j+1])                                     //??
{t=a[j];a[j]=a[j+1];a[j+1]=t;u=c[j];c[j]=c[j+1];c[j+1]=u;}
for(int k=0;k<4;k++)
cout<<c[k]<<" "<<a[k]*10<<endl;
return 0;
}