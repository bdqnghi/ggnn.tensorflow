private void getArrayLengthT() {
    p("public int getArrayLength(Type type, Object obj) {");
    SwitchedCodeBlock pc = new SwitchedCodeBlock("type.id");
    for (String s : PRIMITIVE_TYPES) {
        if (!typeNames2typeIds.containsKey(s + "[]"))
            continue;
        pc.add(typeNames2typeIds.get(s + "[]"), "return ((" + s + "[])obj).length;");
    }
    pc.print();
    p("	return ((Object[])obj).length;");
    p("}");
}
