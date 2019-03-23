 private static void sortlist(ArrayList<Integer> list){
    int ind = 0;
    for(int i = 0; i < list.size() - 1; i++){
      int min = list.get(i);
      for(int j = i + 1; j < list.size(); j++){
        if(list.get(j) < min){
          min = list.get(j);
          ind = j;
        }
      }
      if(min != list.get(i)){
        list.set(ind, list.get(i));
        list.set(i, min);
      }
    }
  }