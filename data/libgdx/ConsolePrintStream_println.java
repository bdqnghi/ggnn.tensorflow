@Override
public void println(String s) {
    buf.append(s);
    consoleLog(buf.toString());
    buf.setLength(0);
}
