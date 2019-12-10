@Override
public void end(int n) {
    if (currentPass != n)
        throw new GdxRuntimeException("Begin " + n + " must be called before end " + n);
    endPass(n);
}
