private void forNameC() {
    p("public Type forName(String name) {");
    p("    int hashCode = name.hashCode();");
    int i = 0;
    SwitchedCodeBlockByString cb = new SwitchedCodeBlockByString("hashCode", "name");
    for (String typeName : typeNames2typeIds.keySet()) {
        cb.add(typeName, "return c" + typeNames2typeIds.get(typeName) + "();");
        i++;
        if (i % 1000 == 0) {
            cb.print();
            cb = new SwitchedCodeBlockByString("hashCode", "name");
            p("    return forName" + i + "(name, hashCode);");
            p("}");
            p("private Type forName" + i + ("(String name, int hashCode) {"));
        }
    }
    cb.print();
    p("    return null;");
    p("}");
}
