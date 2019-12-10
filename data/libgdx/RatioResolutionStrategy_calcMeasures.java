@Override
public MeasuredDimension calcMeasures(int widthMeasureSpec, int heightMeasureSpec) {
    final int specWidth = View.MeasureSpec.getSize(widthMeasureSpec);
    final int specHeight = View.MeasureSpec.getSize(heightMeasureSpec);
    final float desiredRatio = ratio;
    final float realRatio = (float) specWidth / specHeight;
    int width;
    int height;
    if (realRatio < desiredRatio) {
        width = specWidth;
        height = Math.round(width / desiredRatio);
    } else {
        height = specHeight;
        width = Math.round(height * desiredRatio);
    }
    return new MeasuredDimension(width, height);
}
