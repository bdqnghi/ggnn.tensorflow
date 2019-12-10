void clamp() {
    if (!clamp)
        return;
    scrollX(overscrollX ? MathUtils.clamp(amountX, -overscrollDistance, maxX + overscrollDistance) : MathUtils.clamp(amountX, 0, maxX));
    scrollY(overscrollY ? MathUtils.clamp(amountY, -overscrollDistance, maxY + overscrollDistance) : MathUtils.clamp(amountY, 0, maxY));
}
