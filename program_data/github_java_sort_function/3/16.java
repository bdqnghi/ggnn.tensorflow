private List<Stmt> topologicalSort(StmtList stmts) {

        List<Stmt> out = new ArrayList<Stmt>(stmts.getSize());
        Stack<Stmt> stack = new Stack<Stmt>();
        stack.push(stmts.getFirst());

        boolean visitedFlag = false;

        while (!stack.empty()) {
            Stmt stmt = stack.pop();
            if (stmt._cfg_visited == visitedFlag) {
                continue;
            }
            if (stmt._cfg_froms.size() == 0 || stack.size() == 0) {
                stmt._cfg_visited = visitedFlag;
                out.add(stmt);
                for (Stmt t : stmt._cfg_tos) {
                    t._cfg_froms.remove(stmt);
                    if (t._cfg_visited != visitedFlag) {
                        stack.push(t);
                    }
                }
            }
        }
        return out;
    }

    