public void setTitle(String title) {
    if (title == null)
        title = "";
    glfwSetWindowTitle(window, title);
    this.title = title;
}
