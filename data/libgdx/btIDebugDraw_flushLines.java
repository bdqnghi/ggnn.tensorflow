public void flushLines() {
    if (getClass() == btIDebugDraw.class)
        LinearMathJNI.btIDebugDraw_flushLines(swigCPtr, this);
    else
        LinearMathJNI.btIDebugDraw_flushLinesSwigExplicitbtIDebugDraw(swigCPtr, this);
}
