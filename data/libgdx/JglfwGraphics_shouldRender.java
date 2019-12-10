boolean shouldRender() {
    try {
        return renderRequested || isContinuous;
    } finally {
        renderRequested = false;
    }
}
