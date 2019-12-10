private void getArrayElementT() {
    p("public Object getArrayElement(Type type, Object obj, int i) {");
    SwitchedCodeBlock pc = new SwitchedCodeBlock("type.id");
    for (String s : PRIMITIVE_TYPES) {
        if (!typeNames2typeIds.containsKey(s + "[]"))
            continue;
        pc.add(typeNames2typeIds.get(s + "[]"), "return ((" + s + "[])obj)[i];");
    }
    pc.print();
    p("	return ((Object[])obj)[i];");
    p("}");
}
