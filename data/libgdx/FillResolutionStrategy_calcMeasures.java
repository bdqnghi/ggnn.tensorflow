@Override
public MeasuredDimension calcMeasures(int widthMeasureSpec, int heightMeasureSpec) {
    final int width = View.MeasureSpec.getSize(widthMeasureSpec);
    final int height = View.MeasureSpec.getSize(heightMeasureSpec);
    return new MeasuredDimension(width, height);
}
