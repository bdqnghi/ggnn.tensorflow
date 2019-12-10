private final static <T> int getFirstKeyframeIndexAtTime(final Array<NodeKeyframe<T>> arr, final float time) {
    final int n = arr.size - 1;
    for (int i = 0; i < n; i++) {
        if (time >= arr.get(i).keytime && time <= arr.get(i + 1).keytime) {
            return i;
        }
    }
    return 0;
}
