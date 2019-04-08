/**
 * ???3.cpp
 * ???????
 * ??????
 * ???2010?11?17?
 */
int main()
{
    char a[100],b[100],c[100];
    int i,j,k,lena,lenb,lenc,flag;
    for(i=0;i<100;i++)
    {a[i]=0;}
    gets(a);                     //???????? 
    gets(b);
    gets(c);
    lena=strlen(a);             //?????????
    lenb=strlen(b);
    lenc=strlen(c);
    for(i=0;i<=lena-lenb;i++)   //??????a???b?????
    {
         flag=1;
         for(j=0;j<lenb;j++)
         {
              if(a[i+j]!=b[j])
              {flag=0;break;}
         }
         if(flag==1 && (i==0 || a[i-1]==' ') && (i==lena-lenb || a[i+lenb]==' ') )
         {
            if(lenb>lenc)     //????????
            {
                for(k=i,j=0;k<i+lenc,j<lenc;k++,j++) //?????
				{a[k]=c[j];}
                for(k=i+lenc;k<lena;k++)     //?????????
                {a[k]=a[k+lenb-1];}
                i+=lenc-1;
                lena-=lenb-lenc;
            }
			if(lenb==lenc)
			{
				for(k=i,j=0;k<i+lenc,j<lenc;k++,j++) //?????
				{a[k]=c[j];}
			}
            if(lenb<lenc)     //????????
            {
                for(k=lena-1+lenc-lenb;k>=i+lenc;k--)  //??????????
                {a[k]=a[k-lenc+lenb];}
                for(k=i,j=0;k<i+lenc,j<lenc;k++,j++)  //??????
                {a[k]=c[j];}
                i+=lenc-1;                   
                lena+=lenc-lenb;              //??????
            }
         }
    }
    cout<<a<<endl;
    return 0;
}