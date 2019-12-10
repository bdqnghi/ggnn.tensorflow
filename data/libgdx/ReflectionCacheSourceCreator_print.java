void print() {
    if (blocks.isEmpty())
        return;
    p("    switch(" + switchStatement + ") {");
    for (String key : blocks.keySet()) {
        p("    case " + key.hashCode() + ": ");
        for (KeyedCodeBlock block : blocks.get(key)) {
            p("        if(" + expectedValue + ".equals(\"" + block.key + "\"))" + block.codeBlock);
            p("    break;");
        }
    }
    p("}");
}
