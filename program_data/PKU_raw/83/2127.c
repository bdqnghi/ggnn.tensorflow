int main ()
{
 int xuefen[10],fenshu[10],n;
 float jidian[10],GPA;
 float jidianhe=0.0;
 int xuefenhe=0;
 int i;
 scanf ("%d",&n);
 for (i=0;i<n;i++)
 {
  scanf ("%d",&(xuefen[i]));
  xuefenhe+=xuefen[i];
 }
    for (i=0;i<n;i++)
 { 
  scanf ("%d",&(fenshu[i]));
 }
 for (i=0;i<n;i++)
    {
  if (fenshu[i]<=100&&fenshu[i]>=90)
  {
   jidian[i]=4.0f;
  }
  else if (fenshu[i]<=89&&fenshu[i]>=85)
  { 
   jidian[i]=3.7f;
  }
  else if (fenshu[i]<=84&&fenshu[i]>=82)
  { 
   jidian[i]=3.3f;
  }
  else if (fenshu[i]<=81&&fenshu[i]>=78)
  { 
   jidian[i]=3.0f;
  }
  else if (fenshu[i]<=77&&fenshu[i]>=75)
  { 
   jidian[i]=2.7f;
  }
  else if (fenshu[i]<=74&&fenshu[i]>=72)
  { 
   jidian[i]=2.3f;
  }
  else if (fenshu[i]<=71&&fenshu[i]>=68)
  { 
   jidian[i]=2.0f;
  }
  else if (fenshu[i]<=67&&fenshu[i]>=64)
  { 
   jidian[i]=1.5f;
  }
  else if (fenshu[i]<=63&&fenshu[i]>=60)
  { 
   jidian[i]=1.0f;
  } 
  else jidian[i]=0;
   
    jidianhe+=jidian[i]*((float )xuefen[i]);
 }
      
 GPA=jidianhe/(float )xuefenhe;
 printf("%.2f",GPA);
 return 0;
}