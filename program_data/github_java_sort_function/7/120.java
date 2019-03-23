public void shellSort(){
        int n = a.length;
        /*分组排序：分组的规则 d为增量
         * 1.d = 数组长度/2;
         * 2.d = d/2;
         * 
         */
        for(int d=n/2;d>0;d/=2){
            System.out.println("d="+d+"时的排序情况");
            //插入排序
            for(int i=0;i<d;i++){ //增量为1时排序结束
                //遍历所有子序
                System.out.print("i值:"+i+"\t");
                for(int j=i+d;j<n;j+=d){
                    System.out.print("j值："+j+"\t");
                    //对每个子序进行插入排序
                    int insertNode = a[j];
                    int k=j-d;
                    while(k>=i&& a[k]>insertNode){
                        a[k+d]=a[k];
                        k=k-d;
//                      print();
                    }
                    a[k+d]=insertNode;
//                  print();
                }
//              System.out.println("--------------------");
                
            }
//          print();
        }
        print();
    }