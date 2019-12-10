private void setArrayElementT() {
    p("public void setArrayElement(Type type, Object obj, int i, Object value) {");
    SwitchedCodeBlock pc = new SwitchedCodeBlock("type.id");
    for (String s : PRIMITIVE_TYPES) {
        if (!typeNames2typeIds.containsKey(s + "[]"))
            continue;
        pc.add(typeNames2typeIds.get(s + "[]"), "((" + s + "[])obj)[i] = " + cast(s, "value") + "; return;");
    }
    pc.print();
    p("	((Object[])obj)[i] = value;");
    p("}");
}
