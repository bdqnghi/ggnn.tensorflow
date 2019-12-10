public void setDefaultColors(btIDebugDraw.DefaultColors arg0) {
    if (getClass() == btIDebugDraw.class)
        LinearMathJNI.btIDebugDraw_setDefaultColors(swigCPtr, this, btIDebugDraw.DefaultColors.getCPtr(arg0), arg0);
    else
        LinearMathJNI.btIDebugDraw_setDefaultColorsSwigExplicitbtIDebugDraw(swigCPtr, this, btIDebugDraw.DefaultColors.getCPtr(arg0), arg0);
}
