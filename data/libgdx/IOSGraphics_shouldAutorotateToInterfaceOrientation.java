@Callback
@BindSelector("shouldAutorotateToInterfaceOrientation:")
private static boolean shouldAutorotateToInterfaceOrientation(IOSUIViewController self, Selector sel, UIInterfaceOrientation orientation) {
    return self.shouldAutorotateToInterfaceOrientation(orientation);
}
