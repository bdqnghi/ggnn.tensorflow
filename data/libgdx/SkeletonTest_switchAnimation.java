protected void switchAnimation() {
    for (ObjectMap.Entry<ModelInstance, AnimationController> e : animationControllers.entries()) {
        int animIndex = 0;
        if (e.value.current != null) {
            for (int i = 0; i < e.key.animations.size; i++) {
                final Animation animation = e.key.animations.get(i);
                if (e.value.current.animation == animation) {
                    animIndex = i;
                    break;
                }
            }
        }
        animIndex = (animIndex + 1) % e.key.animations.size;
        e.value.animate(e.key.animations.get(animIndex).id, -1, 1f, null, 0.2f);
    }
}
