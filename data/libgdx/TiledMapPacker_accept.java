@Override
public boolean accept(File f, String s) {
    return (new File(f, s).isDirectory());
}
