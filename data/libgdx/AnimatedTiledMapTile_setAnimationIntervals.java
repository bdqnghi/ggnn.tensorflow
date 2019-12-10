public void setAnimationIntervals(int[] intervals) {
    if (intervals.length == animationIntervals.length) {
        this.animationIntervals = intervals;
        loopDuration = 0;
        for (int i = 0; i < intervals.length; i++) {
            loopDuration += intervals[i];
        }
    } else {
        throw new GdxRuntimeException("Cannot set " + intervals.length + " frame intervals. The given int[] must have a size of " + animationIntervals.length + ".");
    }
}
