private void test(String text, Object object) {
    check(text, object);
    text = text.replace("{", "/*moo*/{/*moo*/");
    check(text, object);
    text = text.replace("}", "/*moo*/}/*moo*/");
    text = text.replace("[", "/*moo*/[/*moo*/");
    text = text.replace("]", "/*moo*/]/*moo*/");
    text = text.replace(":", "/*moo*/:/*moo*/");
    text = text.replace(",", "/*moo*/,/*moo*/");
    check(text, object);
    text = text.replace("/*moo*/", " /*moo*/ ");
    check(text, object);
    text = text.replace("/*moo*/", "// moo\n");
    check(text, object);
    text = text.replace("\n", "\r\n");
    check(text, object);
    text = text.replace(",", "\n");
    check(text, object);
    text = text.replace("\n", "\r\n");
    check(text, object);
    text = text.replace("\r\n", "\r\n\r\n");
    check(text, object);
}
