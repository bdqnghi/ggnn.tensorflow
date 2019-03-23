package test;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;

public class Test {
  public static List<String> order(String[] projects, String[][] deps) {
    HashMap<String, List<String>> d = new HashMap<String, List<String>>();
    for (int i = 0; i < deps.length; i++) {
      String key = deps[i][0];
      String value = deps[i][1];
      if (!d.containsKey(key)) {
        d.put(key, new ArrayList<String>());
      }
      d.get(key).add(value);
    }

    HashMap<String, Integer> counts = new HashMap<String, Integer>();
    for (String p : projects) {
      if (d.containsKey(p)) {
        for (String v : d.get(p)) {
          if (!counts.containsKey(v)) {
            counts.put(v, 0);
          }
          counts.put(v, counts.get(v) + 1);
        }
      }
      if (!counts.containsKey(p)) {
        counts.put(p, 0);
      }
    }

    List<String> res = new ArrayList<String>();
    LinkedList<String> queue = new LinkedList<String>();
    for (String key : counts.keySet()) {
      if (counts.get(key) == 0) {
        queue.add(key); 
      }
    }
    while (!queue.isEmpty()) {
      String elem = queue.pop(); 
      res.add(elem);
      if (d.containsKey(elem)) {
        for (String par : d.get(elem)) {
          counts.put(par, counts.get(par) - 1);
          if (counts.get(par) == 0) queue.add(par);
        }
      }
    }

    if (res.size() != counts.size()) return null;
    return res;
  }
}
