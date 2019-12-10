@Override
protected void onMeasure(int widthMeasureSpec, int heightMeasureSpec) {
    ResolutionStrategy.MeasuredDimension measures = resolutionStrategy.calcMeasures(widthMeasureSpec, heightMeasureSpec);
    setMeasuredDimension(measures.width, measures.height);
}
