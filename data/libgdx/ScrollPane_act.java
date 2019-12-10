public void act(float delta) {
    super.act(delta);
    boolean panning = flickScrollListener.getGestureDetector().isPanning();
    boolean animating = false;
    if (fadeAlpha > 0 && fadeScrollBars && !panning && !touchScrollH && !touchScrollV) {
        fadeDelay -= delta;
        if (fadeDelay <= 0)
            fadeAlpha = Math.max(0, fadeAlpha - delta);
        animating = true;
    }
    if (flingTimer > 0) {
        resetFade();
        float alpha = flingTimer / flingTime;
        amountX -= velocityX * alpha * delta;
        amountY -= velocityY * alpha * delta;
        clamp();
        // Stop fling if hit overscroll distance.
        if (amountX == -overscrollDistance)
            velocityX = 0;
        if (amountX >= maxX + overscrollDistance)
            velocityX = 0;
        if (amountY == -overscrollDistance)
            velocityY = 0;
        if (amountY >= maxY + overscrollDistance)
            velocityY = 0;
        flingTimer -= delta;
        if (flingTimer <= 0) {
            velocityX = 0;
            velocityY = 0;
        }
        animating = true;
    }
    if (// 
    smoothScrolling && flingTimer <= 0 && !panning && // Scroll smoothly when grabbing the scrollbar if one pixel of scrollbar movement is > 20% of the scroll area.
    (// 
    (!touchScrollH || (scrollX && maxX / (hScrollBounds.width - hKnobBounds.width) > areaWidth * 0.1f)) && // 
    (!touchScrollV || (scrollY && maxY / (vScrollBounds.height - vKnobBounds.height) > areaHeight * 0.1f)))) {
        if (visualAmountX != amountX) {
            if (visualAmountX < amountX)
                visualScrollX(Math.min(amountX, visualAmountX + Math.max(200 * delta, (amountX - visualAmountX) * 7 * delta)));
            else
                visualScrollX(Math.max(amountX, visualAmountX - Math.max(200 * delta, (visualAmountX - amountX) * 7 * delta)));
            animating = true;
        }
        if (visualAmountY != amountY) {
            if (visualAmountY < amountY)
                visualScrollY(Math.min(amountY, visualAmountY + Math.max(200 * delta, (amountY - visualAmountY) * 7 * delta)));
            else
                visualScrollY(Math.max(amountY, visualAmountY - Math.max(200 * delta, (visualAmountY - amountY) * 7 * delta)));
            animating = true;
        }
    } else {
        if (visualAmountX != amountX)
            visualScrollX(amountX);
        if (visualAmountY != amountY)
            visualScrollY(amountY);
    }
    if (!panning) {
        if (overscrollX && scrollX) {
            if (amountX < 0) {
                resetFade();
                amountX += (overscrollSpeedMin + (overscrollSpeedMax - overscrollSpeedMin) * -amountX / overscrollDistance) * delta;
                if (amountX > 0)
                    scrollX(0);
                animating = true;
            } else if (amountX > maxX) {
                resetFade();
                amountX -= (overscrollSpeedMin + (overscrollSpeedMax - overscrollSpeedMin) * -(maxX - amountX) / overscrollDistance) * delta;
                if (amountX < maxX)
                    scrollX(maxX);
                animating = true;
            }
        }
        if (overscrollY && scrollY) {
            if (amountY < 0) {
                resetFade();
                amountY += (overscrollSpeedMin + (overscrollSpeedMax - overscrollSpeedMin) * -amountY / overscrollDistance) * delta;
                if (amountY > 0)
                    scrollY(0);
                animating = true;
            } else if (amountY > maxY) {
                resetFade();
                amountY -= (overscrollSpeedMin + (overscrollSpeedMax - overscrollSpeedMin) * -(maxY - amountY) / overscrollDistance) * delta;
                if (amountY < maxY)
                    scrollY(maxY);
                animating = true;
            }
        }
    }
    if (animating) {
        Stage stage = getStage();
        if (stage != null && stage.getActionsRequestRendering())
            Gdx.graphics.requestRendering();
    }
}
