int main()
{
 int z , q , s , l , min , smin , smax , max;
 for(z=1;z<=5;z++)
 {
  for(q=1;q<=5;q++)
  {
   for(s=1;s<=5;s++)
   { 
    for(l=1;l<=5;l++)
    {
     if((z!=q)&&(z!=s)&&(z!=l)&&(q!=s)&&(q!=l)&&(s!=l))
      {
       if(z+q==s+l)
       {
         if(z+l>s+q)
         {
          if (z+s<q)
           {
            min = z ;
            if (q<min)
            {
             min =q;
            }
            if (s<min)
            {
             min=s;
            }
            if (l<min)
            {
             min=l;
            }
            max = z;
            if (q>max)
            {
             max =q;
            }
            if (s>max)
            {
             max=s;
            }
            if (l>max)
            {
             max=l;
            }
           if((z-min)*(z-max)*(q-min)*(q-max)!=0)
           {
            if (z>q)
            {
            smax=z;
            smin=q;
            }
            else
            {
             smin=z;
             smax=q;
             }
            }
           if((z-min)*(z-max)*(s-min)*(s-max)!=0)
           {
            if (z>s)
            {
            smax=z;
            smin=s;
            }
            else
            {
             smin=z;
             smax=s;
             }
            }
           if((z-min)*(z-max)*(l-min)*(l-max)!=0)
           {
            if (z>l)
            {
            smax=z;
            smin=l;
            }
            else
            {
             smin=z;
             smax=l;
             }
            }
		   if((q-min)*(q-max)*(s-min)*(s-max)!=0)
           {
            if (s>q)
            {
            smax=s;
            smin=q;
            }
            else
            {
             smin=s;
             smax=q;
             }
            }
          if((l-min)*(l-max)*(q-min)*(q-max)!=0)
           {
            if (l>q)
            {
            smax=l;
            smin=q;
            }
            else
            {
             smin=l;
             smax=q;
             }
            }
           if((s-min)*(s-max)*(l-min)*(l-max)!=0)
           {
            if (s>l)
            {
            smax=s;
            smin=l;
            }
            else
            {
             smin=l;
             smax=l;
             }
            }
          if(z==max)
           { 
            cout<<"z"<<" "<<z*10<<endl;
           }
           if(q==max)
           { 
            cout<<"q"<<" "<<q*10<<endl;
           }
           if(s==max)
           { 
            cout<<"s"<<" "<<s*10<<endl;
           }
           if(l==max)
           { 
            cout<<"l"<<" "<<l*10<<endl;
           }
           if(z==smax)
           { 
            cout<<"z"<<" "<<z*10<<endl;
           }
           if(q==smax)
           { 
            cout<<"q"<<" "<<q*10<<endl;
           }
           if(s==smax)
           { 
            cout<<"s"<<" "<<s*10<<endl;
           }
           if(l==smax)
           { 
            cout<<"l"<<" "<<l*10<<endl;
           }
           if(z==smin)
           { 
            cout<<"z"<<" "<<z*10<<endl;
           }
           if(q==smin)
           { 
            cout<<"q"<<" "<<q*10<<endl;
           }
           if(s==smin)
           { 
            cout<<"s"<<" "<<s*10<<endl;
           }
           if(l==smin)
           { 
            cout<<"l"<<" "<<l*10<<endl;
           }
           if(z==min)
           { 
            cout<<"z"<<" "<<z*10<<endl;
           }
           if(q==min)
           { 
            cout<<"q"<<" "<<q*10<<endl;
           }
           if(s==min)
           { 
            cout<<"s"<<" "<<s*10<<endl;
           }
           if(l==min)
           { 
            cout<<"l"<<" "<<l*10<<endl;
           }
}
}
}
}
}
}
}
}
return 0;
}
         