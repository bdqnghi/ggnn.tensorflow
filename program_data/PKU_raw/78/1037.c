
int main()
{   void sort(int *,int *,int *,int *);
	int a[4];
	int b[4];
	int z,q,s,l,i,*pointer_1,*pointer_2,*pointer_3,*pointer_4;
   for (z=10;z<=50;z+=10)
      {for (q=10;q<=50;q+=10)
            {for (s=10;s<=50;s+=10)
                  {for(l=10;l<=50;l+=10)
				       { if(z+q==s+l&&z+l>s+q&&z+s<q)
						{ b[0]=z,b[1]=q,b[2]=s,b[3]=l;
							a[0]=z,a[1]=q,a[2]=s,a[3]=l;
                             pointer_1=&a[0];
						  pointer_2=&a[1];
						  pointer_3=&a[2];
						  pointer_4=&a[3];
						  sort(pointer_1,pointer_2,pointer_3,pointer_4);}
					   }
						  
                  }
             }
       }
   for(i=3;i>=0;i--)
						  {if (a[i]==b[0]) cout<<"z"<<" "<<a[i]<<endl;
						   if (a[i]==b[1]) cout<<"q"<<" "<<a[i]<<endl;
						   if (a[i]==b[2]) cout<<"s"<<" "<<a[i]<<endl;
						   if (a[i]==b[3]) cout<<"l"<<" "<<a[i]<<endl;}
   return 0;
}
void sort(int *a,int *b,int *c,int *d)
{
	if(*a>*b) swap(*a,*b);
	if(*a>*c) swap(*a,*c);
	if(*a>*d) swap(*a,*d);
	if(*b>*c) swap(*b,*c);
	if(*b>*d) swap(*b,*d);
	if(*c>*d) swap(*c,*d);

}
